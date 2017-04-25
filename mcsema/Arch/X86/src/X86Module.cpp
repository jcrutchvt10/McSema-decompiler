#include "X86Module.h"
#include "Register.h"
#include "Lift.h"
#include "Dispatch.h"

#include "Semantics/fpu.h"
#include "Semantics/MOV.h"
#include "Semantics/CMOV.h"
#include "Semantics/Jcc.h"
#include "Semantics/MULDIV.h"
#include "Semantics/CMPTEST.h"
#include "Semantics/ADD.h"
#include "Semantics/SUB.h"
#include "Semantics/Misc.h"
#include "Semantics/bitops.h"
#include "Semantics/ShiftRoll.h"
#include "Semantics/Exchanges.h"
#include "Semantics/INCDECNEG.h"
#include "Semantics/Stack.h"
#include "Semantics/String.h"
#include "Semantics/Branches.h"
#include "Semantics/SETcc.h"
#include "Semantics/SSE.h"

#include <llvm/Support/TargetSelect.h>

struct X86Module::PrivateData final {
};

X86Module::X86Module() : d(new PrivateData) {
  LLVMInitializeX86TargetInfo();
  LLVMInitializeX86TargetMC();
  LLVMInitializeX86AsmParser();
  LLVMInitializeX86Disassembler();
}

X86Module::~X86Module() {
}

std::string X86Module::getRegisterName(MCSemaRegs id) const noexcept {
  return X86RegisterName(id);
}

llvm::StructType *X86Module::getRegisterStateStructureType() const noexcept {
  return X86RegStateStructType();
}

void X86Module::allocateRegisterVariables(llvm::BasicBlock *basic_block) const noexcept {
  X86AllocRegisterVars(basic_block);
}

std::size_t X86Module::getRegisterSize(MCSemaRegs id) const noexcept {
  return X86RegisterSize(id);
}

InstTransResult X86Module::liftInstruction(TranslationContext &context, llvm::BasicBlock *&basic_block, InstructionLifter *lifter) const noexcept {
  return X86LiftInstruction(context, basic_block, lifter);
}

llvm::Function *X86Module::processSemantics(llvm::Module *module, const std::string &unknown) const noexcept {
  return X86GetOrCreateSemantics(module, unknown);
}

llvm::Function *X86Module::createRegisterStateTracer(llvm::Module *module) const noexcept {
  return X86GetOrCreateRegStateTracer(module);
}

void X86Module::initializeRegisterState(llvm::LLVMContext *context) const noexcept {
  X86InitRegisterState(context);
}

void X86Module::initializeInstructionDispatchTable(DispatchMap &dispatch_map) const noexcept {
  FPU_populateDispatchMap(dispatch_map);
  MOV_populateDispatchMap(dispatch_map);
  CMOV_populateDispatchMap(dispatch_map);
  Jcc_populateDispatchMap(dispatch_map);
  MULDIV_populateDispatchMap(dispatch_map);
  CMPTEST_populateDispatchMap(dispatch_map);
  ADD_populateDispatchMap(dispatch_map);
  Misc_populateDispatchMap(dispatch_map);
  SUB_populateDispatchMap(dispatch_map);
  Bitops_populateDispatchMap(dispatch_map);
  ShiftRoll_populateDispatchMap(dispatch_map);
  Exchanges_populateDispatchMap(dispatch_map);
  INCDECNEG_populateDispatchMap(dispatch_map);
  Stack_populateDispatchMap(dispatch_map);
  String_populateDispatchMap(dispatch_map);
  Branches_populateDispatchMap(dispatch_map);
  SETcc_populateDispatchMap(dispatch_map);
  SSE_populateDispatchMap(dispatch_map);
}

llvm::Value *X86Module::memoryAsDataReference(llvm::BasicBlock *basic_block, NativeModulePtr native_module, const llvm::MCInst &instruction, NativeInstPtr native_instruction, uint32_t which) const noexcept {
  return MEM_AS_DATA_REF(basic_block, native_module, instruction, native_instruction, which);
}

NativeInst::Prefix X86Module::getInstructionPrefix(const llvm::MCInst &inst) const noexcept {
  switch (inst.getOpcode()) {
    case llvm::X86::REP_MOVSB_32:
    case llvm::X86::REP_MOVSB_64:
    case llvm::X86::REP_MOVSW_32:
    case llvm::X86::REP_MOVSW_64:
    case llvm::X86::REP_MOVSD_32:
    case llvm::X86::REP_MOVSD_64:
    case llvm::X86::REP_MOVSQ_64:
    case llvm::X86::REP_LODSB_32:
    case llvm::X86::REP_LODSB_64:
    case llvm::X86::REP_LODSW_32:
    case llvm::X86::REP_LODSW_64:
    case llvm::X86::REP_LODSD_32:
    case llvm::X86::REP_LODSD_64:
    case llvm::X86::REP_LODSQ_64:
    case llvm::X86::REP_STOSB_32:
    case llvm::X86::REP_STOSB_64:
    case llvm::X86::REP_STOSW_32:
    case llvm::X86::REP_STOSW_64:
    case llvm::X86::REP_STOSD_32:
    case llvm::X86::REP_STOSD_64:
    case llvm::X86::REP_STOSQ_64:
      return NativeInst::RepPrefix;

    case llvm::X86::REPE_CMPSB_32:
    case llvm::X86::REPE_CMPSB_64:
    case llvm::X86::REPE_CMPSW_32:
    case llvm::X86::REPE_CMPSW_64:
    case llvm::X86::REPE_CMPSD_32:
    case llvm::X86::REPE_CMPSD_64:
    case llvm::X86::REPE_CMPSQ_64:
      return NativeInst::RepPrefix;

    case llvm::X86::REPNE_CMPSB_32:
    case llvm::X86::REPNE_CMPSB_64:
    case llvm::X86::REPNE_CMPSW_32:
    case llvm::X86::REPNE_CMPSW_64:
    case llvm::X86::REPNE_CMPSD_32:
    case llvm::X86::REPNE_CMPSD_64:
    case llvm::X86::REPNE_CMPSQ_64:
      return NativeInst::RepNePrefix;

    case llvm::X86::REPE_SCASB_32:
    case llvm::X86::REPE_SCASB_64:
    case llvm::X86::REPE_SCASW_32:
    case llvm::X86::REPE_SCASW_64:
    case llvm::X86::REPE_SCASD_32:
    case llvm::X86::REPE_SCASD_64:
    case llvm::X86::REPE_SCASQ_64:
      return NativeInst::RepPrefix;

    case llvm::X86::REPNE_SCASB_32:
    case llvm::X86::REPNE_SCASB_64:
    case llvm::X86::REPNE_SCASW_32:
    case llvm::X86::REPNE_SCASW_64:
    case llvm::X86::REPNE_SCASD_32:
    case llvm::X86::REPNE_SCASD_64:
    case llvm::X86::REPNE_SCASQ_64:
      return NativeInst::RepNePrefix;
  }

  for (const auto &op : inst) {
    if (op.isReg()) {
      if (op.getReg() == llvm::X86::GS) {
        return NativeInst::GSPrefix;
      } else if (op.getReg() == llvm::X86::FS) {
        return NativeInst::FSPrefix;
      }
    }
  }

  return NativeInst::NoPrefix;
}

NativeInstPtr X86Module::decodeInstruction(uintptr_t virtual_address, const std::vector<uint8_t> &buffer) const noexcept {
  const std::size_t kMaxNumInstrBytes = 16;

  VA nextVA = virtual_address;
  // Get the maximum number of bytes for decoding.
  uint8_t decodable_bytes[kMaxNumInstrBytes] = {};
  std::copy(buffer.begin(), buffer.end(), decodable_bytes);
  auto max_size = buffer.size();

  // Try to decode the instruction.
  llvm::MCInst mcInst;
  auto num_decoded_bytes = ArchDecodeInstruction(
      decodable_bytes, decodable_bytes + max_size, virtual_address, mcInst);

  if (!num_decoded_bytes) {
    std::cerr
        << "Failed to decode instruction at address "
        << std::hex << virtual_address << std::endl;
    return nullptr;
  }

  NativeInstPtr inst = new NativeInst(
      virtual_address, num_decoded_bytes, mcInst, architecture_module->getInstructionPrefix(mcInst));

  // Mark some operands as being RIP-relative.
  for (auto i = 0U; i < mcInst.getNumOperands(); ++i) {
    const auto &Op = mcInst.getOperand(i);
    if (Op.isReg() && Op.getReg() == llvm::X86::RIP) {
      inst->set_rip_relative(i);
    }
  }

  llvm::MCOperand oper;

  //ask if this is a jmp, and figure out what the true / false follows are
  switch (mcInst.getOpcode()) {
    case llvm::X86::JMP32m:
    case llvm::X86::JMP32r:
    case llvm::X86::JMP64m:
    case llvm::X86::JMP64r:
      inst->set_terminator();
      break;
    case llvm::X86::RETL:
    case llvm::X86::RETIL:
    case llvm::X86::RETIQ:
    case llvm::X86::RETIW:
    case llvm::X86::RETQ:
      inst->set_terminator();
      break;
    case llvm::X86::JMP_4:
    case llvm::X86::JMP_1:
      oper = mcInst.getOperand(0);
      if (oper.isImm()) {
        nextVA += oper.getImm() + num_decoded_bytes;
        inst->set_tr(nextVA);
      } else {
        std::cerr << "Unhandled indirect branch at 0x" << std::hex << virtual_address;
        return nullptr;
      }
      break;
    case llvm::X86::LOOP:
    case llvm::X86::LOOPE:
    case llvm::X86::LOOPNE:
    case llvm::X86::JO_4:
    case llvm::X86::JO_1:
    case llvm::X86::JNO_4:
    case llvm::X86::JNO_1:
    case llvm::X86::JB_4:
    case llvm::X86::JB_1:
    case llvm::X86::JAE_4:
    case llvm::X86::JAE_1:
    case llvm::X86::JE_4:
    case llvm::X86::JE_1:
    case llvm::X86::JNE_4:
    case llvm::X86::JNE_1:
    case llvm::X86::JBE_4:
    case llvm::X86::JBE_1:
    case llvm::X86::JA_4:
    case llvm::X86::JA_1:
    case llvm::X86::JS_4:
    case llvm::X86::JS_1:
    case llvm::X86::JNS_4:
    case llvm::X86::JNS_1:
    case llvm::X86::JP_4:
    case llvm::X86::JP_1:
    case llvm::X86::JNP_4:
    case llvm::X86::JNP_1:
    case llvm::X86::JL_4:
    case llvm::X86::JL_1:
    case llvm::X86::JGE_4:
    case llvm::X86::JGE_1:
    case llvm::X86::JLE_4:
    case llvm::X86::JLE_1:
    case llvm::X86::JG_4:
    case llvm::X86::JG_1:
    case llvm::X86::JCXZ:
    case llvm::X86::JECXZ:
    case llvm::X86::JRCXZ:
      oper = mcInst.getOperand(0);
      inst->set_tr(virtual_address + oper.getImm() + num_decoded_bytes);
      inst->set_fa(virtual_address + num_decoded_bytes);
      break;
  }

  return inst;
}
