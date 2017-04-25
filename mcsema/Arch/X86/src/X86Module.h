#pragma once

#include <mcsema/IMCSemaModule.h>
#include <mcsema/X86/utils.h>

#include <memory>

class MCSEMA_PRIVATE_SYMBOL X86Module final : public IMCSemaModule {
  struct PrivateData;
  std::unique_ptr<PrivateData> d;

public:
  X86Module();
  virtual ~X86Module();

  // IMCSemaModule interface
  virtual std::string getRegisterName(MCSemaRegs id) const noexcept override;
  virtual llvm::StructType *getRegisterStateStructureType() const noexcept override;
  virtual void allocateRegisterVariables(llvm::BasicBlock *basic_block) const noexcept override;
  virtual std::size_t getRegisterSize(MCSemaRegs id) const noexcept override;
  virtual InstTransResult liftInstruction(TranslationContext &context, llvm::BasicBlock *&basic_block, InstructionLifter *lifter) const noexcept override;
  virtual llvm::Function *processSemantics(llvm::Module *module, const std::string &unknown) const noexcept override;
  virtual llvm::Function *createRegisterStateTracer(llvm::Module *module) const noexcept override;
  virtual void initializeRegisterState(llvm::LLVMContext *context) const noexcept override;
  virtual void initializeInstructionDispatchTable(DispatchMap &dispatch_map) const noexcept override;
  virtual llvm::Value *memoryAsDataReference(llvm::BasicBlock *basic_block, NativeModulePtr native_module, const llvm::MCInst &instruction, NativeInstPtr native_instruction, uint32_t which) const noexcept override;
};
