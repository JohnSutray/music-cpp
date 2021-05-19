#pragma once
#include "loginForm.h"

namespace kursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for lobby
	/// </summary>
	public ref class lobby : public System::Windows::Forms::Form
	{
	public:
		loginForm^ loginFormInstance;
		
		lobby(loginForm^ login)
		{
			loginFormInstance = login;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ add_button1;
	public:

	public:

		WMPNetWendor::Class1^ player = gcnew WMPNetWendor::Class1();
	private: System::Windows::Forms::ListBox^ listBox2;
	public:
		loginForm^ textBoxlogin = gcnew loginForm();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~lobby()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ play_button1;
	private: System::Windows::Forms::Button^ stop_button;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ ok_button1;

		   
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->play_button1 = (gcnew System::Windows::Forms::Button());
			this->stop_button = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ok_button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->add_button1 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &lobby::label1_Click);
			// 
			// play_button1
			// 
			this->play_button1->Location = System::Drawing::Point(29, 69);
			this->play_button1->Name = L"play_button1";
			this->play_button1->Size = System::Drawing::Size(123, 38);
			this->play_button1->TabIndex = 1;
			this->play_button1->Text = L"play";
			this->play_button1->UseVisualStyleBackColor = true;
			this->play_button1->Click += gcnew System::EventHandler(this, &lobby::play_button1_Click);
			// 
			// stop_button
			// 
			this->stop_button->Location = System::Drawing::Point(185, 70);
			this->stop_button->Name = L"stop_button";
			this->stop_button->Size = System::Drawing::Size(111, 38);
			this->stop_button->TabIndex = 2;
			this->stop_button->Text = L"stop";
			this->stop_button->UseVisualStyleBackColor = true;
			this->stop_button->Click += gcnew System::EventHandler(this, &lobby::stop_button_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(476, 69);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(259, 38);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &lobby::textBox1_TextChanged);
			// 
			// ok_button1
			// 
			this->ok_button1->Location = System::Drawing::Point(302, 70);
			this->ok_button1->Name = L"ok_button1";
			this->ok_button1->Size = System::Drawing::Size(126, 41);
			this->ok_button1->TabIndex = 4;
			this->ok_button1->Text = L"ok";
			this->ok_button1->UseVisualStyleBackColor = true;
			this->ok_button1->Click += gcnew System::EventHandler(this, &lobby::ok_button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(557, 178);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(259, 95);
			this->listBox1->TabIndex = 5;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &lobby::listBox1_SelectedIndexChanged_1);
			// 
			// add_button1
			// 
			this->add_button1->Location = System::Drawing::Point(476, 178);
			this->add_button1->Name = L"add_button1";
			this->add_button1->Size = System::Drawing::Size(75, 23);
			this->add_button1->TabIndex = 6;
			this->add_button1->Text = L"add";
			this->add_button1->UseVisualStyleBackColor = true;
			this->add_button1->Click += gcnew System::EventHandler(this, &lobby::add_button1_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(169, 178);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(259, 95);
			this->listBox2->TabIndex = 7;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &lobby::listBox2_SelectedIndexChanged);
			// 
			// lobby
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(913, 335);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->add_button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->ok_button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->stop_button);
			this->Controls->Add(this->play_button1);
			this->Controls->Add(this->label1);
			this->Name = L"lobby";
			this->Text = L"lobby";
			this->Load += gcnew System::EventHandler(this, &lobby::lobby_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lobby_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void play_button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void stop_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ok_button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void add_button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
};
}
