#pragma once

#include <tchar.h>
#include <string>
#include <sstream>

typedef std::basic_string<TCHAR> tstring;
typedef std::basic_stringstream<TCHAR> tstringstream;

enum class OperatingSystem
{
	Linux,
	Windows
};

enum class Architecture
{
	x86,
	amd64
};
