#include "mainwindow.h"
#include "resource.h"

#include <list>

struct MainWindow::PrivateData final
{
	HWND handle;

	OperatingSystem operating_system;
	Architecture architecture;
	tstring selected_file_path;
};

MainWindow::MainWindow() : d(new PrivateData)
{
	d->handle = CreateDialogParam(GetModuleHandle(nullptr), MAKEINTRESOURCE(IDD_MAINWINDOW), HWND_DESKTOP, DialogProcedureDispatcher, reinterpret_cast<LPARAM>(this));

	const std::list<tstring> operating_system_list =
	{
		_T("Windows"),
		_T("Linux")
	};

	const std::list<tstring> architecture_list =
	{
		_T("x86"),
		_T("amd64")
	};

	for (const auto &os : operating_system_list)
		SendDlgItemMessage(d->handle, IDC_COMBO_OPERATINGSYSTEM, CB_ADDSTRING, 0, reinterpret_cast<LPARAM>(os.data()));
	setOperatingSystem(OperatingSystem::Windows);

	for (const auto &arch : architecture_list)
		SendDlgItemMessage(d->handle, IDC_COMBO_ARCHITECTURE, CB_ADDSTRING, 0, reinterpret_cast<LPARAM>(arch.data()));
	setArchitecture(Architecture::x86);
}

MainWindow::~MainWindow()
{
}

INT_PTR MainWindow::dialogProcedure(UINT message, WPARAM wparam, LPARAM lparam)
{
	switch (message)
	{
		case WM_CLOSE:
		{
			DestroyWindow(d->handle);
			return TRUE;
		}

		case WM_DESTROY:
		{
			PostQuitMessage(0);
			return TRUE;
		}

		case WM_DROPFILES:
		{
			HDROP drag_drop_operation = reinterpret_cast<HDROP>(wparam);
			UINT path_size = DragQueryFile(drag_drop_operation, 0, nullptr, 0) + 1;

			tstring dropped_file_path;
			dropped_file_path.resize(path_size);
			if (dropped_file_path.size() != path_size)
				throw std::bad_alloc();

			DragQueryFile(drag_drop_operation, 0, &dropped_file_path[0], dropped_file_path.size());
			DragFinish(drag_drop_operation);

			selectFile(dropped_file_path);
			return TRUE;
		}

		case WM_COMMAND:
		{
			if (HIWORD(wparam) != STN_CLICKED)
				return FALSE;

			switch (LOWORD(wparam))
			{
				case IDC_BUTTON_BROWSE:
				{
					TCHAR selected_file_path[4096] = {};

					OPENFILENAME open_file_dialog_settings = {};
					open_file_dialog_settings.lStructSize = sizeof(OPENFILENAME);
					open_file_dialog_settings.hwndOwner = d->handle;
					open_file_dialog_settings.lpstrFile = selected_file_path;
					open_file_dialog_settings.nMaxFile = sizeof(selected_file_path);
					open_file_dialog_settings.lpstrFilter = _T("All\0*.*\0");
					open_file_dialog_settings.nFilterIndex = 1;
					open_file_dialog_settings.lpstrFileTitle = _T("Select an executable file");
					open_file_dialog_settings.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;

					if (GetOpenFileName(&open_file_dialog_settings) != TRUE)
						return FALSE;

					selectFile(selected_file_path);
					return TRUE;
				}

				case IDC_BUTTON_TRANSLATE:
				{
					translateExecutable();
					return FALSE;
				}

				default:
					return FALSE;
			}
		}
		
		default:
			return FALSE;
	}
}

INT_PTR CALLBACK MainWindow::DialogProcedureDispatcher(HWND handle, UINT message, WPARAM wparam, LPARAM lparam) noexcept
{
	if (message == WM_INITDIALOG)
	{
		SetLastError(0);

		if (SetWindowLongPtr(handle, GWL_USERDATA, static_cast<LONG_PTR>(lparam)) == 0)
		{
			if (GetLastError() != 0)
			{
				PostQuitMessage(1);
				return TRUE;
			}
		}

		return TRUE;
	}

	MainWindow *window_object = reinterpret_cast<MainWindow *>(GetWindowLongPtr(handle, GWL_USERDATA));
	if (window_object == nullptr)
		return FALSE;

	return window_object->dialogProcedure(message, wparam, lparam);
}

void MainWindow::setOperatingSystem(OperatingSystem os) noexcept
{
	d->operating_system = os;

	int index = (os == OperatingSystem::Windows) ? 0 : 1;
	SendDlgItemMessage(d->handle, IDC_COMBO_OPERATINGSYSTEM, CB_SETCURSEL, index, 0);
}

OperatingSystem MainWindow::getOperatingSystem() const noexcept
{
	return d->operating_system;
}

void MainWindow::setArchitecture(Architecture arch) noexcept
{
	d->architecture = arch;

	int index = (arch == Architecture::x86) ? 0 : 1;
	SendDlgItemMessage(d->handle, IDC_COMBO_ARCHITECTURE, CB_SETCURSEL, index, 0);
}

Architecture MainWindow::getArchitecture() const noexcept
{
	return d->architecture;
}

void MainWindow::selectFile(const tstring &path) noexcept
{
	d->selected_file_path = path;
	SetDlgItemText(d->handle, IDC_EDIT_EXECUTABLEPATH, path.data());
}

tstring MainWindow::getSelectedFile() const noexcept
{
	return d->selected_file_path;
}

void MainWindow::translateExecutable() const noexcept
{
	MessageBox(d->handle, _T("Not yet implemented"), _T("McSema Launcher"), MB_OK | MB_ICONERROR | MB_TASKMODAL);
}
