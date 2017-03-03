/* Copyright 2017 Peter Goodman (peter@trailofbits.com), all rights reserved. */

#include <iostream>
#include <queue>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include <llvm/ADT/iterator_range.h>
#include <llvm/ADT/SmallVector.h>

#include <llvm/IR/Argument.h>
#include <llvm/IR/CFG.h>
#include <llvm/IR/DataLayout.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/Instructions.h>
#include <llvm/IR/LegacyPassManager.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Metadata.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Type.h>

#include <llvm/Support/CommandLine.h>

#include <llvm/Transforms/Scalar.h>

#include "mcsema/Arch/Register.h"
#include "mcsema/BC/DeadRegElimination.h"

static llvm::cl::opt<bool> IgnoreUnsupportedInsts(
    "disable-global-opt",
    llvm::cl::desc(
        "Disable whole-program dead register load/store optimizations."),
    llvm::cl::init(false));

namespace {

using RegSet = std::bitset<128>;

//class RegSet : public std::bitset<128> {
// public:
//  inline RegSet(void) {
//    set();
//  }
//};

using OffsetMap = std::unordered_map<llvm::Value *, unsigned>;

struct FunctionState {
  std::unordered_map<llvm::Instruction *, unsigned> offsets;
};

// Tracks register
static std::vector<size_t> gByteOffsetToRegOffset;
static std::vector<unsigned> gByteOffsetToBeginOffset;
static std::vector<unsigned> gByteOffsetToRegSize;
static std::vector<unsigned> gRegOffsetToRegSize;

static std::unordered_map<llvm::Value *, RegSet> gLiveRegsOnEntry;
static std::unordered_map<llvm::Value *, RegSet> gLiveRegsOnExit;

// Alias scopes, used to mark accesses to the reg state struct and memory as
// being within disjoint alias scopes.
static llvm::MDNode *gMemoryScope = nullptr;
static llvm::MDNode *gMemoryNoAliasScope = nullptr;

static std::vector<llvm::MDNode *> gRegScope;
static std::vector<llvm::MDNode *> gRegNoAliasScope;

// Register ID for a given metadata scope.
static std::unordered_map<llvm::MDNode *, unsigned> gScopeToRegOffset;

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

        } else if (auto cast = llvm::dyn_cast<llvm::BitCastInst>(&inst)) {
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

// Assign alias information to the bitcode of a function.
static void AssignAliasInfo(llvm::Function *func, OffsetMap &offsets) {
  for (auto &block : *func) {
    for (auto &inst : block) {
      llvm::AAMDNodes meta;
      if (llvm::isa<llvm::LoadInst>(&inst) ||
          llvm::isa<llvm::StoreInst>(&inst)) {
        if (offsets.count(&inst)) {
          auto byte_offset = offsets[&inst];
          auto reg_offset = gByteOffsetToRegOffset[byte_offset];
          meta.Scope = gRegScope[reg_offset];
          meta.NoAlias = gRegNoAliasScope[reg_offset];
        } else {
          meta.Scope = gMemoryScope;
          meta.NoAlias = gMemoryNoAliasScope;
        }
        inst.setAAMetadata(meta);
      }
    }
  }
}

struct DeadStats {
  size_t num_intrinsic_calls;
  size_t num_extern_calls;
  size_t num_indirect_calls;
  size_t num_intern_calls;

  size_t num_dead_stores;
  size_t num_load_load_forwards;
  size_t num_store_load_forwards;

  size_t num_deleted;
  size_t num_instructions_preopt;
  size_t num_instructions_postopt;
};

// Perform block-local optimizations, including dead store and dead load
// elimination.
static void DeleteDeadRegs(llvm::BasicBlock *block, DeadStats &stats) {
  llvm::DataLayout layout(block->getModule());
  std::unordered_map<size_t, llvm::LoadInst *> load_forwarding;

  auto live = gLiveRegsOnExit[block];

  std::unordered_set<llvm::Instruction *> to_remove;
  for (auto it = block->rbegin(); it != block->rend(); ++it) {
    llvm::Instruction *inst = &*it;
    stats.num_instructions_preopt++;

    // Call out to another function; need to be really conservative here until
    // we apply a global alias analysis.
    //
    // TODO(pag): Apply some ABI stuff here when dealing with calls to externals
    //            or calls through pointers.
    if (auto call = llvm::dyn_cast<llvm::CallInst>(inst)) {
      auto called_func = call->getCalledFunction();
      if (!called_func) {
        stats.num_indirect_calls++;
        live.set();  // All regs are live.
        load_forwarding.clear();

      } else if (called_func->isDeclaration()) {
        if (!called_func->isIntrinsic()) {
          live.set();  // External/unknown call; all is live.
          load_forwarding.clear();
          stats.num_extern_calls++;
        } else {
          stats.num_intrinsic_calls++;
        }
      } else {
        stats.num_intern_calls++;
        live = gLiveRegsOnEntry[inst];
        load_forwarding.clear();
      }
    }

    auto md = inst->getMetadata(llvm::LLVMContext::MD_alias_scope);
    if (!md || md == gMemoryScope) {
      continue;
    }

    auto reg_num = gScopeToRegOffset.at(md);
    auto reg_size = gRegOffsetToRegSize[reg_num];

    if (auto load = llvm::dyn_cast<llvm::LoadInst>(inst)) {
      auto &next_load = load_forwarding[reg_num];
      auto size = layout.getTypeStoreSize(load->getType());

      // Load-to-load forwarding.
      if (next_load && next_load->getType() == load->getType()) {
        stats.num_load_load_forwards++;
        next_load->replaceAllUsesWith(load);
        to_remove.insert(next_load);
      }

      next_load = load;
      live.set(reg_num);

    } else if (auto store = llvm::dyn_cast<llvm::StoreInst>(inst)) {
      auto stored_val = inst->getOperand(0);
      auto stored_val_type = stored_val->getType();
      auto size = layout.getTypeStoreSize(stored_val_type);
      auto &next_load = load_forwarding[reg_num];

      // Dead store elimination.
      if (!live.test(reg_num)) {
        stats.num_dead_stores++;
        to_remove.insert(store);

      // Partial store, possible false write-after-read dependency, has to
      // revive the register.
      } else if (size != reg_size) {
        live.set(reg_num);

      // Full store, kills the reg.
      } else {
        live.reset(reg_num);

        // Store-to-load forwarding.
        if (next_load && next_load->getType() == stored_val_type) {
          stats.num_store_load_forwards++;
          next_load->replaceAllUsesWith(stored_val);
          to_remove.insert(next_load);
        }
      }

      next_load = nullptr;
    }
  }

  for (auto dead_inst : to_remove) {
    dead_inst->eraseFromParent();
    stats.num_deleted++;
  }
}

}  // namespace

void InitDeadRegisterEliminator(llvm::Module *module, size_t num_funcs,
                                size_t num_blocks) {
  gLiveRegsOnEntry.reserve(num_blocks);
  gLiveRegsOnExit.reserve(num_blocks);

  llvm::DataLayout layout(module);

  auto state_type = ArchRegStateStructType();
  unsigned reg_offset = 0;
  unsigned total_size = 0;

  for (const auto field_type : state_type->elements()) {
    auto store_size = layout.getTypeStoreSize(field_type);
    gRegOffsetToRegSize.push_back(store_size);
    for (size_t i = 0; i < store_size; ++i) {
      gByteOffsetToRegOffset.push_back(reg_offset);
      gByteOffsetToRegSize.push_back(store_size);
      gByteOffsetToBeginOffset.push_back(total_size);
    }
    total_size += store_size;
    ++reg_offset;
  }

  std::vector<llvm::Metadata *> ops;
  auto &context = module->getContext();

  auto mem_domain_name = llvm::MDString::get(context, "memory_domain");
  auto memory_domain = llvm::MDTuple::get(context, {mem_domain_name});
  auto mem_scope_name = llvm::MDString::get(context, "memory_scope");
  ops = {mem_scope_name, memory_domain};
  gMemoryScope = llvm::MDTuple::get(context, ops);

  auto reg_domain_name = llvm::MDString::get(context, "register_domain");
  auto reg_domain = llvm::MDTuple::get(context, {reg_domain_name});

  std::vector<llvm::MDNode *> reg_scopes;
  auto last_reg_offset = static_cast<unsigned>(
      gByteOffsetToRegOffset[gByteOffsetToRegOffset.size() - 1]);

  // Create an alias scope for every register within the state struct.
  for (unsigned reg_offset = 0; reg_offset <= last_reg_offset; ++reg_offset) {
    auto reg = ArchRegisterForOffset(reg_offset);
    if (!reg) {  // padding.
      gRegScope.push_back(nullptr);
    } else {
      auto reg_name = ArchRegisterName(reg);
      auto reg_scope_name = llvm::MDString::get(context, reg_name + "_scope");
      ops = {reg_scope_name, reg_domain};

      auto reg_scope = llvm::MDTuple::get(context, reg_scope_name);
      gRegScope.push_back(reg_scope);
      gScopeToRegOffset[reg_scope] = reg_offset;
    }
  }

  // Create the no-alias scope list for memory.
  ops.clear();
  for (auto reg_scope : gRegScope) {
    if (reg_scope) {
      ops.push_back(reg_scope);
    }
  }
  gMemoryNoAliasScope = llvm::MDTuple::get(context, ops);

  // Create the no-alias scope lists for registers.
  for (size_t i = 0; i < gRegScope.size(); ++i) {
    if (!gRegScope[i]) {
      continue;
    }
    ops.clear();
    ops.push_back(gMemoryScope);
    for (size_t j = 0; j < gRegScope.size(); ++j) {
      if (i != j && gRegScope[j]) {
        ops.push_back(gRegScope[j]);
      }
    }
    gRegNoAliasScope.push_back(llvm::MDTuple::get(context, ops));
  }
}

void AnnotateAliases(llvm::Function *func) {
  auto offsets = GetOffsets(func);
  AssignAliasInfo(func, offsets);
}

namespace {

using SuccessorMap = std::unordered_multimap<
    llvm::Instruction *, llvm::Value *>;

//static void AddSuccessors(BlockMap &successors, llvm::Value *from,
//                          llvm::BasicBlock *to_pred) {
//  for (auto succ_block : llvm::successors(to_pred)) {
//    successors.insert({from, succ_block});
//  }
//}

static void BuildSucessorMap(
    llvm::Module *module, SuccessorMap &successors) {

  std::vector<llvm::Instruction *> func_exits;
  std::vector<llvm::CallInst *> indirect_calls;
  std::vector<llvm::Function *> uncalled_funcs;

  for (auto &func : *module) {
    // Go find the logical exit points of this function.
    func_exits.clear();
    llvm::BasicBlock *entry_block = nullptr;

    if (!func.isDeclaration()) {
      entry_block = &(func.getEntryBlock());
      for (auto &block : func) {
        for (auto &inst : block) {
          if (llvm::isa<llvm::ReturnInst>(inst)) {
            func_exits.push_back(&inst);
          } else if (auto call = llvm::dyn_cast<llvm::CallInst>(&inst)) {
            if (!call->getCalledFunction()) {
              indirect_calls.push_back(call);
            }
          }
        }
      }
    }

    auto num_callers = 0;
    for (auto user : func.users()) {
      if (auto caller = llvm::dyn_cast<llvm::CallInst>(user)) {
        ++num_callers;
        successors.insert({caller, entry_block});
        for (auto ret : func_exits) {
          successors.insert({ret, caller});
        }
      }
    }

    // Treat any uncalled yet defined function as a possible target of any
    // indirect call.
    if (!num_callers && !func.isDeclaration()) {
      uncalled_funcs.push_back(&func);
    }
  }

  // Go link every indirect call with every function that isn't called.
  for (auto call : indirect_calls) {
    func_exits.clear();
    for (auto func : uncalled_funcs) {
      if (func->isDeclaration()) {
        continue;
      }
      auto entry_block = &(func->getEntryBlock());
      successors.insert({call, entry_block});
      for (auto &block : *func) {
        for (auto &inst : block) {
          if (llvm::isa<llvm::ReturnInst>(inst)) {
            successors.insert({&inst, call});
          }
        }
      }
    }
  }
}

static RegSet IncomingLiveRegs(SuccessorMap &successors, llvm::Value *val) {

  RegSet live;
  bool seen = false;

  if (auto term = llvm::dyn_cast<llvm::TerminatorInst>(val)) {
    auto block = term->getParent();
    for (auto succ_block : llvm::successors(block)) {
      live |= gLiveRegsOnEntry[succ_block];
      seen = true;
    }

    if (seen) {
      return live;
    }
  }

  // We've got a return; go look at what is live on exit of ever call
  // instruction that may target the function containing this `ret`.
  if (auto ret = llvm::dyn_cast<llvm::ReturnInst>(val)) {
    auto succ_it = successors.find(ret);
    for (; succ_it != successors.end() && succ_it->first == ret; ++succ_it) {
      if (auto call_inst = llvm::dyn_cast<llvm::CallInst>(succ_it->second)) {
        live |= gLiveRegsOnExit[call_inst];
        seen = true;
      }
    }

  // We've got a call, so we need to go accumulate the live regs across every
  // possible target of the call.
  } else if (auto call = llvm::dyn_cast<llvm::CallInst>(val)) {
    auto called_func = call->getCalledFunction();

    if (called_func && called_func->isDeclaration()) {
      std::cerr
          << "Function not used correctly!" << std::endl;
      abort();
    }

    if (called_func) {
      live = gLiveRegsOnEntry[&(called_func->getEntryBlock())];
      seen = true;

    } else {
      auto succ_it = successors.find(call);
      for (; succ_it != successors.end() && succ_it->first == call; ++succ_it) {
        if (auto block = llvm::dyn_cast<llvm::BasicBlock>(succ_it->second)) {
          live |= gLiveRegsOnEntry[block];
          seen = true;
        }
      }
    }
  }

  if (!seen) {
    live.set();  // Treat all as live.
  }

  return live;
}

}  // namespace

void OptimizeModule(llvm::Module *module) {

  if (IgnoreUnsupportedInsts) {
    return;
  }

  SuccessorMap successors;
  BuildSucessorMap(module, successors);

  llvm::DataLayout data_layout(module);

  // Base cases for things like calls to externals; all the things are live.
  gLiveRegsOnEntry[nullptr].set();
  gLiveRegsOnExit[nullptr].set();

  int iterations = 0;
  for (auto changed = true; changed; ++iterations) {
    changed = false;
    for (auto &func : *module) {
      if (func.isDeclaration()) {
        continue;
      }

      for (auto &block : func) {
        auto it = block.rbegin();
        auto term = &*it++;
        auto live = IncomingLiveRegs(successors, term);

        auto old_live_exit = &(gLiveRegsOnExit[&block]);
        if (live != *old_live_exit) {
          if (old_live_exit->count() > live.count()) {
            abort();
          }
          changed = true;
          *old_live_exit = live;
        }
        old_live_exit = nullptr;

        auto old_live_entry = gLiveRegsOnEntry[&block];

        for (; it != block.rend(); ++it) {
          auto inst = &*it;

          if (auto load = llvm::dyn_cast<llvm::LoadInst>(inst)) {
            auto md = load->getMetadata(llvm::LLVMContext::MD_alias_scope);
            if (!md || md == gMemoryScope) {
              continue;
            }
            auto reg_num = gScopeToRegOffset.at(md);
            live.set(reg_num);

          } else if (auto store = llvm::dyn_cast<llvm::StoreInst>(inst)) {
            auto md = store->getMetadata(llvm::LLVMContext::MD_alias_scope);
            if (!md || md == gMemoryScope) {
              continue;
            }
            auto reg_num = gScopeToRegOffset.at(md);
            auto reg_size = gRegOffsetToRegSize[reg_num];
            auto val = store->getValueOperand();
            auto store_size = data_layout.getTypeStoreSize(val->getType());
            if (store_size == reg_size) {
              live.reset(reg_num);
            } else {
              live.set(reg_num);
            }

          } else if (auto call = llvm::dyn_cast<llvm::CallInst>(inst)) {
            auto called_func = call->getCalledFunction();

            if (called_func && called_func->isDeclaration()) {
              if (!called_func->isIntrinsic()) {
                live.set();  // External/unknown call; all is live.
              }

            } else {
              auto old_live_after_call = &(gLiveRegsOnExit[call]);
              if (*old_live_after_call != live) {
                if (old_live_after_call->count() > live.count()) {
                  abort();
                }
                changed = true;
                *old_live_after_call = live;
              }
              old_live_after_call = nullptr;

              live = IncomingLiveRegs(successors, call);

              auto old_live_before_call = &(gLiveRegsOnEntry[call]);
              if (*old_live_before_call != live) {
                if (old_live_before_call->count() > live.count()) {
                  abort();
                }
                changed = true;
                *old_live_before_call = live;
              }
              old_live_before_call = nullptr;
            }

          } else if (llvm::isa<llvm::TerminatorInst>(inst)) {
            std::cerr
                << "Should not be possible!";
            abort();
          }
        }

        if (live != old_live_entry) {
          if (old_live_entry.count() > live.count()) {
            abort();
          }
          changed = true;
          gLiveRegsOnEntry[&block] = live;
        }
      }
    }
  }

  llvm::legacy::FunctionPassManager func_pass_manager(module);
  func_pass_manager.add(llvm::createCFGSimplificationPass());
  func_pass_manager.add(llvm::createPromoteMemoryToRegisterPass());
  func_pass_manager.add(llvm::createReassociatePass());
  func_pass_manager.add(llvm::createInstructionCombiningPass());
  func_pass_manager.add(llvm::createDeadStoreEliminationPass());
  func_pass_manager.add(llvm::createDeadCodeEliminationPass());

  func_pass_manager.doInitialization();
  DeadStats stats = {};
  for (auto &func : *module) {
    for (auto &block : func) {
      DeleteDeadRegs(&block, stats);
    }
    func_pass_manager.run(func);
    for (auto &block : func) {
      stats.num_instructions_postopt += block.size();
    }
  }

  func_pass_manager.doFinalization();

  std::cerr
      << "Did " << std::dec << iterations
      << " data flow iterations:" << std::endl
      << "  call stats:" << std::endl
      << "    intrinsic calls: " << stats.num_intrinsic_calls << std::endl
      << "    external calls: " << stats.num_extern_calls << std::endl
      << "    indirect calls: " << stats.num_indirect_calls << std::endl
      << "    direct calls: " << stats.num_intern_calls << std::endl
      << "  analysis stats:" << std::endl
      << "    dead stores: " << stats.num_dead_stores << std::endl
      << "    load-to-load forwards: " << stats.num_load_load_forwards
      << std::endl
      << "    store-to-load forwards: " << stats.num_store_load_forwards
      << std::endl
      << "  deletion stats:" << std::endl
      << "    directly deleted: " << stats.num_deleted << std::endl
      << "    pre-opt num instructions: " << stats.num_instructions_preopt
      << std::endl
      << "    post-opt num instructions: " << stats.num_instructions_postopt
      << std::endl << std::endl;
}
