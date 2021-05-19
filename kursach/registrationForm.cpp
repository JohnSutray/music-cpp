#include "registrationForm.h"

#include <Windows.h>

using namespace System::Timers;
using namespace System::Threading;

using namespace kursach; //“о ,что указывалось при создании CLR проекта

using namespace System;
using namespace System::IO;

System::Void kursach::registrationForm::exit_label2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

System::Void kursach::registrationForm::exit_label2_MouseHover(System::Object^ sender, System::EventArgs^ e)
{
	this->exit_label2->ForeColor = System::Drawing::Color::DarkRed;
}

System::Void kursach::registrationForm::exit_label2_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	this->exit_label2->ForeColor = System::Drawing::Color::Black;
}

Point LastPointOfMouses;

System::Void kursach::registrationForm::panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (isPressed)
	{
		Left += e->X - LastPointOfMouses.X;
		Top += e->Y - LastPointOfMouses.Y;
	}
}

System::Void kursach::registrationForm::panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	isPressed = false;
}

System::Void kursach::registrationForm::panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	LastPointOfMouses = e->Location;
	isPressed = true;
}

System::Void kursach::registrationForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	auto sr = gcnew IO::StreamReader("file.txt");
	auto lines = sr->ReadToEnd()->Split('\n');

	for each (String ^ user in lines)
	{
		if (String::Compare(user->Split(' ')[0], loginBox->Text) == 0) {
			loginBox->Text = "login already exists";
			return;
		}
		
	}
	sr->Close();
	if (passBox->Text == repassBox->Text)
	{
		auto sw = gcnew IO::StreamWriter("file.txt", true);
		sw->WriteLine(loginBox->Text + " " + passBox->Text + "\n");
		sw->Close();
		this->Close();
	}
}


