#include "MyForm.h"

#include <Windows.h>

#include <cstdlib>

#include <ctime>

using namespace System::Timers;
using namespace System::Threading;

using namespace lab7; //То ,что указывалось при создании CLR проекта

using namespace System;


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm);

	return 0;
}




System::Void lab7::MyForm::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{// Параметры точки - значение (X,Y). Для графика y=x :
	
	y = k * pow(x, n) - b;
	formula_textBox1->Text += y.ToString();
	System::Windows::Forms::DataVisualization::Charting::DataPoint^ dp = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(x, 
		y ));
		
	// добавляем точку dp в график chart1, последовательность точек Series1 
	// Points это поле - массив точек 
	this->chart1->Series[L"Series1"]->Points->Add(dp); // Увеличиваем счетчик срабатываний таймера this->count++;
	this->x++;
	return System::Void();
}

System::Void lab7::MyForm::start_button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->timer1->Start();
}

System::Void lab7::MyForm::random_Click(System::Object^ sender, System::EventArgs^ e)
{
	srand(static_cast<unsigned int>(time(0)));

	System::Random^ RandString = gcnew Random();

	n = (RandString->Next(0, 10));
	b = (RandString->Next(-10, 10));
	k = (RandString->Next(-10, 10));
	formula_textBox1->Text = "y = "+k+"*x^" + n.ToString()+"+"+b.ToString();


}

System::Void lab7::MyForm::formula_textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	
}

System::Void lab7::MyForm::clear_button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart1->Series[L"Series1"]->Points->Clear();
}

