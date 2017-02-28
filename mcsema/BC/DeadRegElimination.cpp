/* Copyright 2017 Peter Goodman (peter@trailofbits.com), all rights reserved. */

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include <llvm/ADT/SmallVector.h>

#include <llvm/IR/Argument.h>
#include <llvm/IR/DataLayout.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/Instructions.h>
#include <llvm/IR/LegacyPassManager.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Type.h>

#include <llvm/Transforms/Scalar.h>

#include "mcsema/Arch/Register.h"
#include "mcsema/BC/DeadRegElimination.h"

namespace {
using LocalGenSet = std::bitset<128>;
using LocalKillSet = std::bitset<128>;
using OffsetMap = std::unordered_map<llvm::Value *, unsigned>;

struct BlockState {
  // 1 if this block uses the register without defining it first, 0 if we
  // have no information.
  LocalGenSet gen;

  // 0 if this block defines the register without using it first, 1 if we
  // have no information, or if it is live.
  LocalKillSet kill_mask;
};

struct FunctionState {
  std::unordered_map<llvm::Instruction *, unsigned> offsets;
};

static std::vector<size_t> gByteOffsetToRegOffset;
static std::vector<unsigned> gByteOffsetToBeginOffset;
static std::vector<unsigned> gByteOffsetToRegSize;
static std::unordered_map<llvm::BasicBlock *, BlockState *> gBlockState;

// Get the index sequence of a GEP instruction. For GEPs that access the system
// register state, this allows us to index into the `system_regs` map in order
// to find the correct system register. In cases where we're operating on a
// bitcast system register, this lets us find the offset into that register.
static size_t GetOffsetFromBasePtr(const llvm::GetElementPtrInst *gep_inst,
                                   bool &failed) {
  llvm::APInt offset(64, 0);
  llvm::DataLayout data_layout(gep_inst->getModule());
  const auto found_offset = gep_inst->accumulateConstantOffset(
      data_layout, offset);
  failed = !found_offset;
  return offset.getZExtValue();
}

static OffsetMap GetOffsets(llvm::Function *func) {
  OffsetMap offset;

  llvm::Argument *state_ptr = &*func->arg_begin();
  offset[state_ptr] = 0;

  // Identify and label loads/stores to the state structure.
  for (auto made_progress = true; made_progress; ) {
    made_progress = false;
    for (auto &block : *func) {
      for (auto &inst : block) {
        if (offset.count(&inst)) {
          continue;
        }

        if (auto gep = llvm::dyn_cast<llvm::GetElementPtrInst>(&inst)) {
          auto base = gep->getPointerOperand();
          if (!offset.count(base)) {
            continue;
          }

          bool failed = true;
          auto gep_offset = GetOffsetFromBasePtr(gep, failed);
          if (!failed) {
            offset[gep] = gep_offset + offset[base];
            made_progress = true;
          }

        } else if (auto cast = llvm::dyn_cast<llvm::CastInst>(&inst)) {
          auto base = cast->getOperand(0);
          if (offset.count(base)) {
            offset[cast] = offset[base];
            made_progress = true;
          }

        } else if (auto load = llvm::dyn_cast<llvm::LoadInst>(&inst)) {
          auto ptr = load->getPointerOperand();
          if (offset.count(ptr)) {
            offset[load] = offset[ptr];
            made_progress = true;
          }

        } else if (auto store = llvm::dyn_cast<llvm::StoreInst>(&inst)) {
          auto ptr = store->getPointerOperand();
          if (offset.count(ptr)) {
            offset[store] = offset[ptr];
            made_progress = true;
          }

        } else if (auto phi = llvm::dyn_cast<llvm::PHINode>(&inst)) {
          if (!phi->getType()->isPointerTy()) {
            continue;
          }
          for (auto &op : phi->incoming_values()) {
            auto ptr = op.get();
            if (offset.count(ptr)) {
              offset[phi] = offset[ptr];
              made_progress = true;
              break;
            }
          }
        }
      }
    }
  }

  return offset;
}

// Perform block-local optimizations, including dead store and dead load
// elimination.
static void LocalOptimizeBlock(llvm::BasicBlock *block, OffsetMap &map) {
  llvm::DataLayout layout(block->getModule());
  std::unordered_map<size_t, llvm::LoadInst *> load_forwarding;

  BlockState state;
  state.gen.reset();
  state.kill_mask.set();

  std::unordered_set<llvm::Instruction *> to_remove;
  for (auto inst_rev = block->rbegin(); inst_rev != block->rend(); ++inst_rev) {
    auto inst = &*inst_rev;

    // Call out to another function.
    if (llvm::isa<llvm::CallInst>(inst)) {
      state.gen.reset();
      state.kill_mask.set();
      load_forwarding.clear();
    }

    if (!map.count(inst)) {
      continue;
    }

    auto offset = map[inst];
    size_t reg_num = gByteOffsetToRegOffset[offset];
    auto reg_size = gByteOffsetToRegSize[offset];

    if (auto load = llvm::dyn_cast<llvm::LoadInst>(inst)) {
      auto &next_load = load_forwarding[reg_num];
      auto size = layout.getTypeStoreSize(load->getType());

      // Load-to-load forwarding.
      if (false && next_load && next_load->getType() == load->getType()) {
        block->dump();
        load->dump();
        next_load->dump();
        std::cerr << std::endl;
//        exit(1);
//        next_load->replaceAllUsesWith(load);
//        to_remove.insert(next_load);
      }

      next_load = load;
      state.gen.set(reg_num);
      state.kill_mask.set(reg_num);

    } else if (auto store = llvm::dyn_cast<llvm::StoreInst>(inst)) {
      auto stored_val = inst->getOperand(0);
      auto stored_val_type = stored_val->getType();
      auto size = layout.getTypeStoreSize(stored_val_type);
      auto &next_load = load_forwarding[reg_num];

      // Dead store elimination.
      if (!state.kill_mask.test(reg_num)) {
        to_remove.insert(store);

      // Partial store, possible false write-after-read dependency, has to
      // revive the register.
      } else if (size != reg_size) {
        state.gen.set(reg_num);
        state.kill_mask.set(reg_num);

      } else {  // Full store, kills the reg.
        state.gen.reset(reg_num);
        state.kill_mask.reset(reg_num);

        // Store-to-load forwarding.
        if (next_load && next_load->getType() == stored_val_type) {
          next_load->replaceAllUsesWith(stored_val);
          to_remove.insert(next_load);
        }
      }

      next_load = nullptr;
    }
  }

  for (auto dead_inst : to_remove) {
    dead_inst->eraseFromParent();
  }
}

}  // namespace

void InitDeadRegisterEliminator(llvm::Module *module) {
  llvm::DataLayout layout(module);

  auto state_type = ArchRegStateStructType();
  unsigned reg_offset = 0;
  unsigned total_size = 0;

  for (const auto field_type : state_type->elements()) {
    auto store_size = layout.getTypeStoreSize(field_type);
    for (size_t i = 0; i < store_size; ++i) {
      gByteOffsetToRegOffset.push_back(reg_offset);
      gByteOffsetToRegSize.push_back(store_size);
      gByteOffsetToBeginOffset.push_back(total_size);
    }
    total_size += store_size;
    ++reg_offset;
  }
}

void OptimizeFunction(llvm::Function *func) {
  llvm::legacy::FunctionPassManager func_pass_manager(func->getParent());
  func_pass_manager.add(llvm::createCFGSimplificationPass());
  func_pass_manager.add(llvm::createPromoteMemoryToRegisterPass());
  func_pass_manager.add(llvm::createReassociatePass());
  func_pass_manager.add(llvm::createInstructionCombiningPass());
  func_pass_manager.add(llvm::createDeadStoreEliminationPass());
  func_pass_manager.add(llvm::createDeadCodeEliminationPass());

  auto offsets = GetOffsets(func);
  for (auto &block : *func) {
    LocalOptimizeBlock(&block, offsets);
  }

  func_pass_manager.doInitialization();
  func_pass_manager.run(*func);
  func_pass_manager.doFinalization();

}
