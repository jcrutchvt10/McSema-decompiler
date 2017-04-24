#pragma once

#include <mcsema/Arch/Register.h>
#include <mcsema/Arch/Dispatch.h>

#include <llvm/IR/Module.h>
#include <string>

//
// translation interface
//

typedef const std::string &(*GetRegisterNamePtr)(MCSemaRegs register_id);
typedef MCSemaRegs (*GetRegisterNumberPtr)(const std::string &register_name);
typedef unsigned (*GetRegisterOffsetPtr)(MCSemaRegs register_id);
typedef MCSemaRegs (*GetRegisterParentPtr)(MCSemaRegs register_id);
typedef unsigned (*GetRegisterSizePtr)(MCSemaRegs register_id);

typedef void (*AllocateRegisterVariablesPtr)(llvm::BasicBlock *basic_block);
typedef llvm::StructType *(*GetRegisterStateStructureTypePtr)();
typedef llvm::Function *(*CreateRegisterStateTracerPtr)(llvm::Module *module);
typedef llvm::Function *(*CreateSemanticsPtr)(llvm::Module *, const std::string &);
typedef InstTransResult (*LiftInstructionPtr)(TranslationContext &, llvm::BasicBlock *&, InstructionLifter *);

struct MCSemaTranslationInterface final {
  GetRegisterNamePtr registerName;
  GetRegisterNumberPtr registerNumber;
  GetRegisterOffsetPtr registerOffset;
  GetRegisterParentPtr registerParent;
  GetRegisterSizePtr registerSize;
  AllocateRegisterVariablesPtr allocateRegisterVariables;
  GetRegisterStateStructureTypePtr registerStateStructureType;
  CreateRegisterStateTracerPtr createRegisterStateTracer;
  CreateSemanticsPtr createSemantics;
  LiftInstructionPtr liftInstruction;
};

//
// module interface
//

typedef void (*InitializeLLVMComponentsPtr)();
typedef void (*InitializeRegisterStatePtr)(llvm::LLVMContext *context);
typedef void (*InitializeInstructionDispatchTablePtr)(DispatchMap &dispatcher);

struct MCSemaModuleInterface final {
  MCSemaTranslationInterface translation;

  InitializeLLVMComponentsPtr initializeLLVMComponents;
  InitializeRegisterStatePtr initializeRegisterState;
  InitializeInstructionDispatchTablePtr initializeInstructionDispatchTable;
};
