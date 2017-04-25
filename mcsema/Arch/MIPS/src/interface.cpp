#include "MipsModule.h"
#include <mcsema/mips/interface.h>
#include <iostream>

namespace mcsema
{
namespace mips
{

MCSEMA_PUBLIC_SYMBOL std::list<std::string> GetSupportedArchitectures() noexcept {
  return { "mips32", "mips64" };
}

MCSEMA_PUBLIC_SYMBOL IMCSemaModule *CreateModule(const std::string &architecture_name) noexcept {
  try {
    if (architecture_name == "mips32")
      return new MipsModule(MipsModule::Bitness::x32);
    else if (architecture_name == "mips64")
      return new MipsModule(MipsModule::Bitness::x64);
    else
      return nullptr;
  } catch (const std::exception &exception) {
    std::cerr << "An exception has occurred: " << exception.what() << std::endl;
    return nullptr;
  }
}

}
}
