#include "MyForm.h"
#include "loginForm.h"
#include <Windows.h>

using namespace System::Timers;
using namespace System::Threading;

using namespace kursach; //�� ,��� ����������� ��� �������� CLR �������

using namespace System;


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew loginForm);

	return 0;
}