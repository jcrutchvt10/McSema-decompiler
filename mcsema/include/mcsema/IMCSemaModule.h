#pragma once

#include <mcsema/Arch/Register.h>
#include <mcsema/Arch/Dispatch.h>
#include <mcsema/CFG/CFG.h>
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
  virtual llvm::StructType *getRegisterStateStructureType() const noexcept = 0;
  virtual void allocateRegisterVariables(llvm::BasicBlock *basic_block) const noexcept = 0;
  virtual std::size_t getRegisterSize(MCSemaRegs id) const noexcept = 0;
  virtual InstTransResult liftInstruction(TranslationContext &context, llvm::BasicBlock *&basic_block, InstructionLifter *lifter) const noexcept = 0;
  virtual llvm::Function *processSemantics(llvm::Module *module, const std::string &unknown) const noexcept = 0;
  virtual llvm::Function *createRegisterStateTracer(llvm::Module *module) const noexcept = 0;

  //
  // utils
  //

  virtual void initializeRegisterState(llvm::LLVMContext *context) const noexcept = 0;
  virtual void initializeInstructionDispatchTable(DispatchMap &dispatch_map) const noexcept = 0;
  virtual llvm::Value *memoryAsDataReference(llvm::BasicBlock *basic_block, NativeModulePtr native_module, const llvm::MCInst &instruction, NativeInstPtr native_instruction, uint32_t which) const noexcept = 0;
  virtual NativeInst::Prefix getInstructionPrefix(const llvm::MCInst &inst) const noexcept = 0;
  virtual NativeInstPtr decodeInstruction(std::uintptr_t virtual_address, const std::vector<uint8_t> &buffer) const noexcept = 0;
};
