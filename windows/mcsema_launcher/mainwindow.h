#pragma once

#include "types.h"

#include <memory>
#include <windows.h>

class MainWindow final
{
	struct PrivateData;
	std::unique_ptr<PrivateData> d;

	MainWindow &operator=(const MainWindow &other) = delete;
	MainWindow(const MainWindow &other) = delete;

public:
	MainWindow();
	~MainWindow();

	static INT_PTR CALLBACK DialogProcedureDispatcher(HWND handle, UINT message, WPARAM wparam, LPARAM lparam) noexcept;

private:
	void setOperatingSystem(OperatingSystem os) noexcept;
	OperatingSystem getOperatingSystem() const noexcept;

	void setArchitecture(Architecture arch) noexcept;
	Architecture getArchitecture() const noexcept;

	void selectFile(const tstring &path) noexcept;
	tstring getSelectedFile() const noexcept;

	void translateExecutable() const noexcept;

	INT_PTR dialogProcedure(UINT message, WPARAM wparam, LPARAM lparam);
};
