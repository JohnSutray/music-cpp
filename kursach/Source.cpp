#include <Windows.h>
#include "lobby.h"
#include "loginForm.h"

using namespace System::Timers;
using namespace System::Threading;

using namespace kursach; //�� ,��� ����������� ��� �������� CLR �������

using namespace System;
using namespace System::IO;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew loginForm);

	return 0;
}