#pragma once

#include <mcsema/IMCSemaModule.h>
#include <mcsema/mips/utils.h>

#include <memory>

class MCSEMA_PRIVATE_SYMBOL MipsModule final : public IMCSemaModule {
  struct PrivateData;
  std::unique_ptr<PrivateData> d;

public:
  enum class Bitness {
    x32,
    x64
  };

  MipsModule(Bitness bitness);
  virtual ~MipsModule();

  // IMCSemaModule interface
  virtual std::string getRegisterName(MCSemaRegs id) const noexcept override;
  virtual MCSemaRegs getRegisterId(const std::string &name) const noexcept override;
  virtual MCSemaRegs getRegisterParent(MCSemaRegs id) const noexcept override;
  virtual llvm::StructType *getRegisterStateStructureType() const noexcept override;
  virtual void allocateRegisterVariables(llvm::BasicBlock *basic_block) const noexcept override;
  virtual std::uint32_t getRegisterOffset(MCSemaRegs id) const noexcept override;
  virtual std::size_t getRegisterSize(MCSemaRegs id) const noexcept override;
  virtual InstTransResult liftInstruction(TranslationContext &context, llvm::BasicBlock *&basic_block, InstructionLifter *lifter) const noexcept override;
  virtual llvm::Function *processSemantics(llvm::Module *module, const std::string &unknown) const noexcept override;
  virtual llvm::Function *createRegisterStateTracer(llvm::Module *module) const noexcept override;
  virtual void initializeRegisterState(llvm::LLVMContext *context) const noexcept override;
  virtual void initializeInstructionDispatchTable(DispatchMap &dispatch_map) const noexcept override;
};
