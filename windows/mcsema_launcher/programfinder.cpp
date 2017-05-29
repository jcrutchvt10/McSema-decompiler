#include "programfinder.h"

#include <list>
#include <algorithm>
#include <sstream>

#include <tchar.h>

struct ProgramFinder::PrivateData final
{
	std::list<tstring> path_entry_list;
};

ProgramFinder::ProgramFinder() : d(new PrivateData)
{
	auto string_size = GetEnvironmentVariable(_T("PATH"), nullptr, 0);
	if (string_size == 0)
		throw std::runtime_error("Failed to access the PATH environment variable");

	tstring path;
	path.resize(string_size);
	if (path.size() != string_size)
		throw std::bad_alloc();

	if (GetEnvironmentVariable(_T("PATH"), &path[0], path.size()) == 0)
		throw std::runtime_error("Failed to read the PATH environment variable");

	// remove the null terminator inserted by windows
	path.pop_back();

	std::size_t start_index = 0;

	while (true)
	{
		std::size_t end_index = path.find(_T(';'), start_index);
		if (end_index == tstring::npos)
			end_index = path.size();

		tstring path_list_entry(&path[start_index], end_index - start_index);
		start_index += path_list_entry.size() + 1;

		if (!path_list_entry.empty())
		{
			std::size_t index = path_list_entry.find_last_not_of(_T("\\"));
			if (index + 1 != path_list_entry.size())
				path_list_entry.resize(index + 1);

			d->path_entry_list.push_back(path_list_entry);
		}

		if (start_index >= path.size())
			break;
	}
}

ProgramFinder::~ProgramFinder()
{
}

bool ProgramFinder::find(tstring &executable_path, const tstring &executable_name) const noexcept
{
	executable_path.clear();
	std::basic_stringstream<TCHAR> str_helper;

	for (tstring path : d->path_entry_list)
	{
		path += _T("\\") + executable_name;

		if (GetFileAttributes(path.data()) != INVALID_FILE_ATTRIBUTES)
		{
			executable_path = path;
			return true;
		}
	}

	return false;
}
