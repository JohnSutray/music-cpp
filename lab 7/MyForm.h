#pragma once

namespace lab7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Windows::Forms::DataVisualization::Charting;

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
	private: System::Windows::Forms::Timer^ timer1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Button^ start_button1;
	private: System::Windows::Forms::Button^ random;
	private: System::Windows::Forms::TextBox^ formula_textBox1;
		   int x = 0;
		   int n;
		   double b, k, y;
	private: System::Windows::Forms::Button^ clear_button1;


	private:
		static int count = 0;
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
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->start_button1 = (gcnew System::Windows::Forms::Button());
			this->random = (gcnew System::Windows::Forms::Button());
			this->formula_textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->clear_button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(460, 64);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(478, 337);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// start_button1
			// 
			this->start_button1->Location = System::Drawing::Point(72, 153);
			this->start_button1->Name = L"start_button1";
			this->start_button1->Size = System::Drawing::Size(75, 23);
			this->start_button1->TabIndex = 1;
			this->start_button1->Text = L"start";
			this->start_button1->UseVisualStyleBackColor = true;
			this->start_button1->Click += gcnew System::EventHandler(this, &MyForm::start_button1_Click);
			// 
			// random
			// 
			this->random->Location = System::Drawing::Point(72, 124);
			this->random->Name = L"random";
			this->random->Size = System::Drawing::Size(75, 23);
			this->random->TabIndex = 2;
			this->random->Text = L"random";
			this->random->UseVisualStyleBackColor = true;
			this->random->Click += gcnew System::EventHandler(this, &MyForm::random_Click);
			// 
			// formula_textBox1
			// 
			this->formula_textBox1->Location = System::Drawing::Point(72, 265);
			this->formula_textBox1->Name = L"formula_textBox1";
			this->formula_textBox1->Size = System::Drawing::Size(283, 20);
			this->formula_textBox1->TabIndex = 3;
			this->formula_textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::formula_textBox1_TextChanged);
			// 
			// clear_button1
			// 
			this->clear_button1->Location = System::Drawing::Point(72, 183);
			this->clear_button1->Name = L"clear_button1";
			this->clear_button1->Size = System::Drawing::Size(75, 23);
			this->clear_button1->TabIndex = 4;
			this->clear_button1->Text = L"clear";
			this->clear_button1->UseVisualStyleBackColor = true;
			this->clear_button1->Click += gcnew System::EventHandler(this, &MyForm::clear_button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(950, 428);
			this->Controls->Add(this->clear_button1);
			this->Controls->Add(this->formula_textBox1);
			this->Controls->Add(this->random);
			this->Controls->Add(this->start_button1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"CHART";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void start_button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		chart1->Series[0]->ChartType = SeriesChartType::Point;
	}
private: System::Void random_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void formula_textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void clear_button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
