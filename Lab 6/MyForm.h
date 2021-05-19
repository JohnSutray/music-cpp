#pragma once



namespace Lab51 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ Output;
	private: System::Windows::Forms::TextBox^ Enter;
	private: System::Windows::Forms::Button^ button1;

	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Output = (gcnew System::Windows::Forms::TextBox());
			this->Enter = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Output
			// 
			this->Output->Location = System::Drawing::Point(12, 97);
			this->Output->Name = L"Output";
			this->Output->Size = System::Drawing::Size(670, 20);
			this->Output->TabIndex = 1;
			this->Output->TextChanged += gcnew System::EventHandler(this, &MyForm::Output_box);
			// 
			// Enter
			// 
			this->Enter->Location = System::Drawing::Point(12, 48);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(670, 20);
			this->Enter->TabIndex = 2;
			this->Enter->TextChanged += gcnew System::EventHandler(this, &MyForm::Enter_box);
			this->Enter->MouseLeave += gcnew System::EventHandler(this, &MyForm::Leave_box);
			this->Enter->MouseHover += gcnew System::EventHandler(this, &MyForm::Hover_box);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(525, 145);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Clear Color";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Clear_button);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 180);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->Output);
			this->Name = L"MyForm";
			this->Text = L"Translate";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

			 System::String^ Lab51::MyForm::TranslateText(String^ input);
	private: System::Void Enter_box(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Leave_box(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Output_box(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Hover_box(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Timer1();
	private: System::Void Lab51::MyForm::SysTick(Object^ state, System::Timers::ElapsedEventArgs^ e);

private: System::Void Clear_button(System::Object^ sender, System::EventArgs^ e);
};
}
