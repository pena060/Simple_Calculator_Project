#pragma once
namespace CalculatorProject {

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
	private: System::Windows::Forms::Button^ div_btn;
	private: System::Windows::Forms::Button^ mul_btn;
	private: System::Windows::Forms::Button^ sub_btn;
	private: System::Windows::Forms::Button^ add_btn;

	protected:










	private: System::Windows::Forms::Label^ Operator;


	private: System::Windows::Forms::Label^ Output;
	private: System::Windows::Forms::Button^ rslt_btn;
	private: System::Windows::Forms::NumericUpDown^ firstDigit;
	private: System::Windows::Forms::NumericUpDown^ secondDigit;





















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
			this->div_btn = (gcnew System::Windows::Forms::Button());
			this->mul_btn = (gcnew System::Windows::Forms::Button());
			this->sub_btn = (gcnew System::Windows::Forms::Button());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->Operator = (gcnew System::Windows::Forms::Label());
			this->Output = (gcnew System::Windows::Forms::Label());
			this->rslt_btn = (gcnew System::Windows::Forms::Button());
			this->firstDigit = (gcnew System::Windows::Forms::NumericUpDown());
			this->secondDigit = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstDigit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondDigit))->BeginInit();
			this->SuspendLayout();
			// 
			// div_btn
			// 
			this->div_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->div_btn->Location = System::Drawing::Point(229, 146);
			this->div_btn->Name = L"div_btn";
			this->div_btn->Size = System::Drawing::Size(58, 55);
			this->div_btn->TabIndex = 4;
			this->div_btn->Text = L"/";
			this->div_btn->UseVisualStyleBackColor = true;
			this->div_btn->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// mul_btn
			// 
			this->mul_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mul_btn->Location = System::Drawing::Point(165, 146);
			this->mul_btn->Name = L"mul_btn";
			this->mul_btn->Size = System::Drawing::Size(58, 55);
			this->mul_btn->TabIndex = 5;
			this->mul_btn->Text = L"*";
			this->mul_btn->UseVisualStyleBackColor = true;
			this->mul_btn->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// sub_btn
			// 
			this->sub_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sub_btn->Location = System::Drawing::Point(101, 146);
			this->sub_btn->Name = L"sub_btn";
			this->sub_btn->Size = System::Drawing::Size(58, 55);
			this->sub_btn->TabIndex = 6;
			this->sub_btn->Text = L"-";
			this->sub_btn->UseVisualStyleBackColor = true;
			this->sub_btn->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// add_btn
			// 
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_btn->Location = System::Drawing::Point(37, 146);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(58, 55);
			this->add_btn->TabIndex = 7;
			this->add_btn->Text = L"+";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// Operator
			// 
			this->Operator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Operator->Location = System::Drawing::Point(287, 49);
			this->Operator->Name = L"Operator";
			this->Operator->Size = System::Drawing::Size(50, 40);
			this->Operator->TabIndex = 10;
			this->Operator->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Output
			// 
			this->Output->AutoSize = true;
			this->Output->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Output->Location = System::Drawing::Point(536, 49);
			this->Output->Name = L"Output";
			this->Output->Size = System::Drawing::Size(33, 33);
			this->Output->TabIndex = 12;
			this->Output->Text = L"=";
			this->Output->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// rslt_btn
			// 
			this->rslt_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rslt_btn->Location = System::Drawing::Point(293, 146);
			this->rslt_btn->Name = L"rslt_btn";
			this->rslt_btn->Size = System::Drawing::Size(460, 55);
			this->rslt_btn->TabIndex = 13;
			this->rslt_btn->Text = L"=";
			this->rslt_btn->UseVisualStyleBackColor = true;
			this->rslt_btn->Click += gcnew System::EventHandler(this, &MyForm::rslt_btn_Click);
			// 
			// firstDigit
			// 
			this->firstDigit->DecimalPlaces = 2;
			this->firstDigit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstDigit->Location = System::Drawing::Point(115, 38);
			this->firstDigit->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->firstDigit->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, System::Int32::MinValue });
			this->firstDigit->Name = L"firstDigit";
			this->firstDigit->Size = System::Drawing::Size(120, 49);
			this->firstDigit->TabIndex = 14;
			// 
			// secondDigit
			// 
			this->secondDigit->DecimalPlaces = 2;
			this->secondDigit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->secondDigit->Location = System::Drawing::Point(378, 38);
			this->secondDigit->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->secondDigit->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, System::Int32::MinValue });
			this->secondDigit->Name = L"secondDigit";
			this->secondDigit->Size = System::Drawing::Size(120, 49);
			this->secondDigit->TabIndex = 15;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(785, 213);
			this->Controls->Add(this->secondDigit);
			this->Controls->Add(this->firstDigit);
			this->Controls->Add(this->rslt_btn);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->Operator);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->sub_btn);
			this->Controls->Add(this->mul_btn);
			this->Controls->Add(this->div_btn);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstDigit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->secondDigit))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		String^ operators;
		Double result = 0;

private: System::Void Operators(System::Object^ sender, System::EventArgs^ e) {
		Button^ op = safe_cast<Button^>(sender);
		operators = op->Text;
		

		if ((firstDigit->Text != "" && secondDigit->Text != "")) {

			if (operators == "+") {
				result = Double::Parse(firstDigit->Text) + Double::Parse(secondDigit->Text);
				Operator->Text = operators;
			}
			else if (operators == "-") {
				result = result = Double::Parse(firstDigit->Text) - Double::Parse(secondDigit->Text);
				Operator->Text = operators;
			}
			else if (operators == "*") {
				result = Double::Parse(firstDigit->Text) * Double::Parse(secondDigit->Text);
				Operator->Text = operators;
			}
			else if (operators == "/") {
				result = Double::Parse(firstDigit->Text) / Double::Parse(secondDigit->Text);
				Operator->Text = operators;
			}

		}



	}

private: System::Void rslt_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	Output->Text = System::Convert::ToString(result);
}
};
}
