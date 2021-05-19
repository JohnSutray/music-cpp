#include "lobby.h"

#include "loginForm.h"

#include <Windows.h>


using namespace System::Timers;
using namespace System::Threading;

using namespace kursach; //“о ,что указывалось при создании CLR проекта

using namespace System;
using namespace System::IO;
using namespace System::Media;
using namespace WMPNetWendor;




System::Void kursach::lobby::lobby_Load(System::Object^ sender, System::EventArgs^ e)
{
	//textBox1->Text = loginFormInstance->loginBox->Text;
	for (int i = 0; i < player->lenght2(); i++)
	{
		listBox1->Items->Add(player->list1(i, ".\\Music"));
	}
}

System::Void kursach::lobby::play_button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	player->Play();
}

System::Void kursach::lobby::stop_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	player->Stop();
}

System::Void kursach::lobby::ok_button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	player->searsh(textBox1->Text);
}

System::Void kursach::lobby::listBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Text = listBox1->Text;
}

System::Void kursach::lobby::add_button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	player->txt(loginFormInstance->loginBox->Text + ".txt", listBox1->Text);

	auto sr = gcnew IO::StreamReader(".\\profile\\"+loginFormInstance->loginBox->Text+".txt");
	auto lines = sr->ReadToEnd()->Split('\n');

	for (int i = 0; i < lines->Length; i++)
	{
		listBox2->Items->Add(lines[i]);
	}
	

	//listBox2->Items->Add(player->read(loginFormInstance->loginBox->Text));
}

System::Void kursach::lobby::listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	listBox1->CanSelect;
	textBox1->Text = listBox2->Text;
}

