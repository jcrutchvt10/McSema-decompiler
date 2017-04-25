#pragma once

#include <mcsema/IMCSemaModule.h>
#include <mcsema/X86/utils.h>

#include <memory>
#include <unordered_set>


class MCSEMA_PRIVATE_SYMBOL X86Module final : public IMCSemaModule {
  struct PrivateData;
  std::unique_ptr<PrivateData> d;

public:
  X86Module(int address_size);
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
  virtual NativeInst::Prefix getInstructionPrefix(const llvm::MCInst &inst) const noexcept override;
  virtual NativeInstPtr decodeInstruction(const llvm::MCDisassembler *llvm_disassembler, std::uintptr_t virtual_address, const std::vector<uint8_t> &buffer) const noexcept override;
  virtual bool initializeArchitecture(ArchitectureInformation &architecture_information, const std::string &operating_system, const std::string &architecture_name) const noexcept override;

private:
  // Decodes the instruction, and returns the number of bytes decoded.
  std::size_t instructionDecoderHelper(const llvm::MCDisassembler *llvm_disassembler, const uint8_t *bytes, const uint8_t *bytes_end, uintptr_t va, llvm::MCInst &inst) const noexcept;

  // Some instructions should be combined with their prefixes. We do this here.
  void combineInstructions(llvm::MCInst &inst, const std::unordered_set<unsigned> &prefixes) const noexcept;
};
