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


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Output = (gcnew System::Windows::Forms::TextBox());
			this->Enter = (gcnew System::Windows::Forms::TextBox());
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 418);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->Output);
			this->Name = L"MyForm";
			this->Text = L"Translate";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

			 System::String^ Lab51::MyForm::TranslateText(String^ input);
	private: System::Void Enter_box(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Leave_box(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Output_box(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Hover_box(System::Object^ sender, System::EventArgs^ e);
	};
}
