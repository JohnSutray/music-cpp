#include <Windows.h>
#include "lobby.h"
#include "loginForm.h"

using namespace System::Timers;
using namespace System::Threading;

using namespace kursach; //“о ,что указывалось при создании CLR проекта

using namespace System;
using namespace System::IO;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew loginForm);

	return 0;
}