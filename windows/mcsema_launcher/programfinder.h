#pragma once

#include "types.h"

#include <windows.h>
#include <memory>

#include <string>
#include <tchar.h>

class ProgramFinder final
{
private:
	struct PrivateData;
	std::unique_ptr<PrivateData> d;

	ProgramFinder &operator=(const ProgramFinder &other) = delete;
	ProgramFinder(const ProgramFinder &other) = delete;

public:
	ProgramFinder();
	~ProgramFinder();

	bool find(tstring &executable_path, const tstring &executable_name) const noexcept;
};
