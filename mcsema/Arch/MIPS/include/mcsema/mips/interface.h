#pragma once

#include <mcsema/mips/utils.h>
#include <mcsema/IMCSemaModule.h>

namespace mcsema
{
namespace mips
{

MCSEMA_PUBLIC_SYMBOL void GetSupportedArchitectures(std::list<std::string> &supported_architectures) noexcept;
MCSEMA_PUBLIC_SYMBOL IMCSemaModule *CreateModule(const std::string &architecture_name) noexcept;

}
}
