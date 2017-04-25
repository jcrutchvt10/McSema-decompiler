#include "MipsModule.h"

struct MipsModule::PrivateData final {
  std::size_t bitness;
};

MipsModule::MipsModule(Bitness bitness) : d(new PrivateData) {
  if (bitness == Bitness::x32)
    d->bitness = 32;
  else
    d->bitness = 64;

  /*LLVMInitializeMipsTargetInfo();
  LLVMInitializeMipsTargetMC();
  LLVMInitializeMipsAsmParser();
  LLVMInitializeMipsDisassembler();*/
}

MipsModule::~MipsModule() {
}

std::string MipsModule::getRegisterName(MCSemaRegs id) const noexcept {
  return "";
}

llvm::StructType *MipsModule::getRegisterStateStructureType() const noexcept {
  return nullptr;
}

void MipsModule::allocateRegisterVariables(llvm::BasicBlock *basic_block) const noexcept {
}

std::size_t MipsModule::getRegisterSize(MCSemaRegs id) const noexcept {
  return 0;
}

InstTransResult MipsModule::liftInstruction(TranslationContext &context, llvm::BasicBlock *&basic_block, InstructionLifter *lifter) const noexcept {
  return { };
}

llvm::Function *MipsModule::processSemantics(llvm::Module *module, const std::string &unknown) const noexcept {
  return nullptr;
}

llvm::Function *MipsModule::createRegisterStateTracer(llvm::Module *module) const noexcept {
  return nullptr;
}

void MipsModule::initializeRegisterState(llvm::LLVMContext *context) const noexcept {
}

void MipsModule::initializeInstructionDispatchTable(DispatchMap &dispatch_map) const noexcept {
}

llvm::Value *MipsModule::memoryAsDataReference(llvm::BasicBlock *basic_block, NativeModulePtr native_module, const llvm::MCInst &instruction, NativeInstPtr native_instruction, uint32_t which) const noexcept {
  return nullptr;
}

NativeInst::Prefix MipsModule::getInstructionPrefix(const llvm::MCInst &inst) const noexcept {
  return { };
}

NativeInstPtr MipsModule::decodeInstruction(uintptr_t virtual_address, const std::vector<uint8_t> &buffer) const noexcept {
  return nullptr;
}
