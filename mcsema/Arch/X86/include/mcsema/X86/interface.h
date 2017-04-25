#pragma once

#include <mcsema/X86/utils.h>
#include <mcsema/IMCSemaModule.h>

namespace mcsema
{
namespace x86
{

MCSEMA_PUBLIC_SYMBOL void GetSupportedArchitectures(std::list<std::string> &supported_architectures) noexcept;
MCSEMA_PUBLIC_SYMBOL IMCSemaModule *CreateModule(const std::string &architecture_name) noexcept;

}
}
