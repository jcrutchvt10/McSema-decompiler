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
