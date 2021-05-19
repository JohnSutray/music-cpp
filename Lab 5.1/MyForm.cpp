#include "MyForm.h"

#include <Windows.h>

using namespace Lab51; //�� ,��� ����������� ��� �������� CLR �������

using namespace System;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm);

	return 0;
}


String^ Lab51::MyForm::TranslateText(String^ input) {

    array<String^>^ rus = gcnew array<String^>{"�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�",
        "�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�"};


    array<String^>^ eng = gcnew array<String^>{ "q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "[", "]", "a", "s", "d", "f", "g", "h", "j", "k", "l", ";", "'", "z", "x", "c", "v", "b", "n", "m", ",", ".",
        "Q","W","E","R","T","Y","U","I","O","P","{","}","A","S","D","F","G","H","J","K","L",":","\"","Z","X","C","V","B","N","M","<",">" };
    String^ ret = "";
    for (int i = 0; i < input->Length; i++)

    {
        auto indexOfCharacter = eng->IndexOf(eng, input[i].ToString());
        if (indexOfCharacter != -1) {
            ret += rus[indexOfCharacter];  
        }
        else {
            ret += input[i];
        }
    }

	return ret;
}

System::Void Lab51::MyForm::Leave_box(System::Object^ sender, System::EventArgs^ e) {
    Enter->BackColor = System::Drawing::SystemColors::ControlLight;
}


System::Void Lab51::MyForm::Enter_box(System::Object^ sender, System::EventArgs^ e)
{
	Output->Text = TranslateText(Enter->Text);
    //auto a = (gcnew array<String^> {"c","d", "a"});
    //Output->Text = (a->IndexOf(a, "a")).ToString();
	return System::Void();
}

System::Void Lab51::MyForm::Output_box(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Lab51::MyForm::Hover_box(System::Object^ sender, System::EventArgs^ e)
{
    Enter->BackColor = System::Drawing::SystemColors::Highlight;
    return System::Void();
}
