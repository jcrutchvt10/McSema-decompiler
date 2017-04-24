#include <mcsema/mips_module.h>

#include <llvm/Support/TargetSelect.h>

namespace mcsema {

MCSEMA_PUBLIC_SYMBOL void InitializeMipsLLVMComponents() noexcept {
  LLVMInitializeMipsTargetInfo();
  LLVMInitializeMipsTargetMC();
  LLVMInitializeMipsAsmParser();
  LLVMInitializeMipsDisassembler();
}

}
