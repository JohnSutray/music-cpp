#pragma once

namespace lab9 {

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
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ input_textBox1;
	protected:

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ added_button1;
	private: System::Windows::Forms::Button^ delete_button2;
	private: System::Windows::Forms::Button^ exit_button3;
		   int i = 0;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->input_textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->added_button1 = (gcnew System::Windows::Forms::Button());
			this->delete_button2 = (gcnew System::Windows::Forms::Button());
			this->exit_button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(435, 72);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(186, 173);
			this->listBox1->TabIndex = 0;
			this->listBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::listBox1_MouseClick);
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// input_textBox1
			// 
			this->input_textBox1->Location = System::Drawing::Point(46, 72);
			this->input_textBox1->Name = L"input_textBox1";
			this->input_textBox1->Size = System::Drawing::Size(363, 20);
			this->input_textBox1->TabIndex = 1;
			this->input_textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::input_textBox1_TextChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(46, 140);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(363, 40);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// added_button1
			// 
			this->added_button1->Location = System::Drawing::Point(46, 98);
			this->added_button1->Name = L"added_button1";
			this->added_button1->Size = System::Drawing::Size(75, 23);
			this->added_button1->TabIndex = 3;
			this->added_button1->Text = L"add";
			this->added_button1->UseVisualStyleBackColor = true;
			this->added_button1->Click += gcnew System::EventHandler(this, &MyForm::added_button1_Click);
			// 
			// delete_button2
			// 
			this->delete_button2->Location = System::Drawing::Point(435, 251);
			this->delete_button2->Name = L"delete_button2";
			this->delete_button2->Size = System::Drawing::Size(75, 23);
			this->delete_button2->TabIndex = 4;
			this->delete_button2->Text = L"delete";
			this->delete_button2->UseVisualStyleBackColor = true;
			this->delete_button2->Click += gcnew System::EventHandler(this, &MyForm::delete_button2_Click);
			// 
			// exit_button3
			// 
			this->exit_button3->Location = System::Drawing::Point(546, 251);
			this->exit_button3->Name = L"exit_button3";
			this->exit_button3->Size = System::Drawing::Size(75, 23);
			this->exit_button3->TabIndex = 5;
			this->exit_button3->Text = L"exit";
			this->exit_button3->UseVisualStyleBackColor = true;
			this->exit_button3->Click += gcnew System::EventHandler(this, &MyForm::exit_button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Input";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Example";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(797, 371);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exit_button3);
			this->Controls->Add(this->delete_button2);
			this->Controls->Add(this->added_button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->input_textBox1);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exit_button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBox1_SelectedIndexClick(System::Object^ sender, System::EventArgs^ e);
private: System::Void added_button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void input_textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void delete_button2_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}
