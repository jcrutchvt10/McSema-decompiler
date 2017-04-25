#include "X86Module.h"
#include "Register.h"
#include "Lift.h"
#include "Dispatch.h"

struct X86Module::PrivateData final {
};

X86Module::X86Module() : d(new PrivateData) {
  /*LLVMInitializeX86TargetInfo();
  LLVMInitializeX86TargetMC();
  LLVMInitializeX86AsmParser();
  LLVMInitializeX86Disassembler();*/
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
  X86InitInstructionDispatch(dispatch_map);
}

llvm::Value *X86Module::memoryAsDataReference(llvm::BasicBlock *basic_block, NativeModulePtr native_module, const llvm::MCInst &instruction, NativeInstPtr native_instruction, uint32_t which) const noexcept {
  return MEM_AS_DATA_REF(basic_block, native_module, instruction, native_instruction, which);
}
