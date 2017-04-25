#pragma once

#include <mcsema/X86/utils.h>
#include <mcsema/IMCSemaModule.h>

namespace mcsema
{
namespace x86
{

MCSEMA_PUBLIC_SYMBOL std::list<std::string> GetSupportedArchitectures() noexcept;
MCSEMA_PUBLIC_SYMBOL IMCSemaModule *CreateModule(const std::string &architecture_name) noexcept;

}
}
