#include <mcsema/mips/interface.h>
#include <llvm/Support/TargetSelect.h>

MCSEMA_PRIVATE_SYMBOL void InitializeMipsLLVMComponents() noexcept {
  LLVMInitializeMipsTargetInfo();
  LLVMInitializeMipsTargetMC();
  LLVMInitializeMipsAsmParser();
  LLVMInitializeMipsDisassembler();
}

MCSEMA_PRIVATE_SYMBOL void InitializeRegisterState(llvm::LLVMContext *context) noexcept {
}

MCSEMA_PRIVATE_SYMBOL void InitializeInstructionDispatchTable(DispatchMap &dispatcher) noexcept {
}

namespace mcsema
{
namespace mips
{

MCSEMA_PUBLIC_SYMBOL MCSemaModuleInterface GetInterface() noexcept {
  MCSemaTranslationInterface translation_interface = { };

  MCSemaModuleInterface module_interface;
  module_interface.translation = translation_interface;
  module_interface.initializeLLVMComponents = InitializeMipsLLVMComponents;
  module_interface.initializeRegisterState = InitializeRegisterState;
  module_interface.initializeInstructionDispatchTable = InitializeInstructionDispatchTable;

  return module_interface;
}

}
}
