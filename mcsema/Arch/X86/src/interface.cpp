#include "X86Module.h"
#include <mcsema/X86/interface.h>
#include <iostream>

namespace mcsema
{
namespace x86
{

MCSEMA_PUBLIC_SYMBOL void GetSupportedArchitectures(std::list<std::string> &supported_architectures) noexcept {
  supported_architectures = {
    "x86",
    "amd64"
  };
}

MCSEMA_PUBLIC_SYMBOL IMCSemaModule *CreateModule(const std::string &architecture_name) noexcept {
  try {
    if (architecture_name != "x86" && architecture_name != "amd64")
      return nullptr;

    return new X86Module();
  } catch (const std::exception &exception) {
    std::cerr << "An exception has occurred: " << exception.what() << std::endl;
    return nullptr;
  }
}

}
}
