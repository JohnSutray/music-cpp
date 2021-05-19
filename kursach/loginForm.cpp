#include "loginForm.h"
#include "registrationForm.h"
#include "lobby.h"
#include <Windows.h>

using namespace System::Timers;
using namespace System::Threading;

using namespace kursach; //“о ,что указывалось при создании CLR проекта

using namespace System;
using namespace System::IO;


System::Void kursach::loginForm::exit_label2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}
System::Void kursach::loginForm::exit_button_color_hover_mouse(System::Object^ sender, System::EventArgs^ e)
{
	this->exit_label2->ForeColor = System::Drawing::Color::DarkRed;
}
System::Void kursach::loginForm::exit_button_color_leave_mouse(System::Object^ sender, System::EventArgs^ e)
{
	this->exit_label2->ForeColor = System::Drawing::Color::Black;
}
Point LastPointOfMouse;
System::Void kursach::loginForm::panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (isPressed)
	{
	Left += e->X - LastPointOfMouse.X;
		Top += e->Y - LastPointOfMouse.Y;
	}
}

System::Void kursach::loginForm::panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	LastPointOfMouse = e->Location;
	isPressed = true;
}

System::Void kursach::loginForm::panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	isPressed = false;
}

System::Void kursach::loginForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	

	auto sw = gcnew IO::StreamReader("file.txt");


	auto lines = sw->ReadToEnd()->Split('\n');

	auto user = Array::Find(lines, gcnew Predicate<String^>(this, &loginForm::FindUser));

	
	sw->Close();
	
	if (user != nullptr) {
		
		auto l = gcnew lobby(this);
		l->Closed += gcnew System::EventHandler(this, &kursach::loginForm::OpenLobby);
		l->Show();
			Hide();
	}


}

Boolean kursach::loginForm::FindUser(String^ item) {
	return item->Compare(item, loginBox->Text + " " + passBox->Text) == 0;
}

System::Void kursach::loginForm::registration_button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	auto form = gcnew kursach::registrationForm();
	form->Show();
}



void kursach::loginForm::OpenLobby(System::Object^ sender, System::EventArgs^ e)
{
	Close();
}


