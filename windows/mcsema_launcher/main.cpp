#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#include "types.h"
#include "programfinder.h"
#include "mainwindow.h"

#include <tchar.h>
#include <windows.h>

#include <list>

bool CheckRequirements() noexcept
{
	const std::list<tstring> required_program_list =
	{
		_T("idal64.exe"),
		_T("python.exe"),
		_T("mcsema-lift.exe")
	};

	ProgramFinder program_finder;
	bool success = true;

	for (const tstring &program : required_program_list)
	{
		tstring path;
		if (!program_finder.find(path, program))
		{
			tstringstream str_helper;
			str_helper << _T("The following executable is not in PATH: ") << program;

			tstring error_message = str_helper.str();
			MessageBox(HWND_DESKTOP, error_message.data(), _T("McSema Launcher"), MB_OK | MB_ICONERROR | MB_TASKMODAL);

			success = false;
		}
	}

	return success;
}

INT WINAPI _tWinMain(HINSTANCE instance, HINSTANCE, LPTSTR command_line, INT cmd_show)
{
	if (CheckRequirements())
		return 1;

	MainWindow main_window;
	
	while (true)
	{
		bool terminate = false;

		MSG message = {};
		switch (GetMessage(&message, nullptr, 0, 0))
		{
			// we have received WM_QUIT
			case 0:
			{
				terminate = true;
				break;
			}

			case -1:
			{
				MessageBox(HWND_DESKTOP, _T("An error has occurred and the program must terminate"), _T("McSema Launcher"), MB_OK | MB_ICONERROR | MB_TASKMODAL);
				ExitProcess(1);
			}

			default:
				break;
		}

		TranslateMessage(&message);
		DispatchMessage(&message);

		if (terminate)
			break;
	}

	return 0;
}
