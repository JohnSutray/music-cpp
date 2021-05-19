#include "MyForm.h"

#include <Windows.h>


using namespace System::Timers;
using namespace System::Threading;

using namespace lab9; //То ,что указывалось при создании CLR проекта

using namespace System;


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm);

	return 0;
}

System::Void lab9::MyForm::exit_button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void lab9::MyForm::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void lab9::MyForm::listBox1_SelectedIndexClick(System::Object^ sender, System::EventArgs^ e)
{
	
	return System::Void();
}

System::Void lab9::MyForm::added_button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	listBox1->Items->Add(i);
	listBox1->Items[i] = input_textBox1->Text;
	i++;

}

System::Void lab9::MyForm::input_textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}



System::Void lab9::MyForm::listBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	
}

System::Void lab9::MyForm::delete_button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (listBox1->SelectedIndex != -1) {
		listBox1->Items->RemoveAt(listBox1->SelectedIndex);
	}
}

System::Void lab9::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	richTextBox1->Text = "Окунь 1 кг 5 рублей";
}