#include "X86Module.h"
#include <mcsema/X86/interface.h>
#include <iostream>

namespace mcsema
{
namespace x86
{

MCSEMA_PUBLIC_SYMBOL std::list<std::string> GetSupportedArchitectures() noexcept {
  return { "x86", "amd64" };
}

MCSEMA_PUBLIC_SYMBOL IMCSemaModule *CreateModule(const std::string &architecture_name) noexcept {
  try {
    if (architecture_name == "x86")
      return new X86Module(32);
    else if (architecture_name == "amd64")
      return new X86Module(64);

    return nullptr;
  } catch (const std::exception &exception) {
    std::cerr << "An exception has occurred: " << exception.what() << std::endl;
    return nullptr;
  }
}

}
}
