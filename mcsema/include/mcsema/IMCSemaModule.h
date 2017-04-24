#pragma once

#include <mcsema/Arch/Register.h>
#include <mcsema/Arch/Dispatch.h>

#include <llvm/IR/Module.h>

#include <string>
#include <cstdint>

class IMCSemaModule {
public:
  virtual ~IMCSemaModule() = default;

  //
  // translation helpers
  //

  virtual std::string getRegisterName(MCSemaRegs id) const noexcept = 0;
  virtual MCSemaRegs getRegisterId(const std::string &name) const noexcept = 0;
  virtual MCSemaRegs getRegisterParent(MCSemaRegs id) const noexcept = 0;

  virtual llvm::StructType *getRegisterStateStructureType() const noexcept = 0;
  virtual void allocateRegisterVariables(llvm::BasicBlock *basic_block) const noexcept = 0;

  virtual std::uint32_t getRegisterOffset(MCSemaRegs id) const noexcept = 0;
  virtual std::size_t getRegisterSize(MCSemaRegs id) const noexcept = 0;

  virtual InstTransResult liftInstruction(TranslationContext &context, llvm::BasicBlock *&basic_block, InstructionLifter *lifter) const noexcept = 0;
  virtual llvm::Function *processSemantics(llvm::Module *module, const std::string &unknown) const noexcept = 0;

  virtual llvm::Function *createRegisterStateTracer(llvm::Module *module) const noexcept = 0;

  //
  // utils
  //

  virtual void initializeRegisterState(llvm::LLVMContext *context) const noexcept = 0;
  virtual void initializeInstructionDispatchTable(DispatchMap &dispatch_map) const noexcept = 0;
};
