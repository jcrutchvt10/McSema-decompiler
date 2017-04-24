#include "MipsModule.h"

struct MipsModule::PrivateData final {
  std::size_t bitness;
};

MipsModule::MipsModule(Bitness bitness) : d(new PrivateData) {
  if (bitness == Bitness::x32)
    d->bitness = 32;
  else
    d->bitness = 64;
}

MipsModule::~MipsModule() {
}

std::string MipsModule::getRegisterName(MCSemaRegs id) const noexcept {
  return "";
}

MCSemaRegs MipsModule::getRegisterId(const std::string &name) const noexcept {
  return 0;
}

MCSemaRegs MipsModule::getRegisterParent(MCSemaRegs id) const noexcept {
  return 0;
}

llvm::StructType *MipsModule::getRegisterStateStructureType() const noexcept {
  return nullptr;
}

void MipsModule::allocateRegisterVariables(llvm::BasicBlock *basic_block) const noexcept {
}

std::uint32_t MipsModule::getRegisterOffset(MCSemaRegs id) const noexcept {
  return 0;
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
