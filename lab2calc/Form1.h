#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ bntReset;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Label^ lblOper;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ lblResult;

	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txtResult;
	private: System::Windows::Forms::Button^ btnSub;
	private: System::Windows::Forms::Button^ btnMulti;
	private: System::Windows::Forms::Button^ btnDiv;
	private: System::Windows::Forms::Label^ lblErr;



	protected:

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
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->bntReset = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->lblOper = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnMulti = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->lblErr = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(360, 285);
			this->btnClose->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(150, 46);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Form1::btnClose_Click);
			// 
			// bntReset
			// 
			this->bntReset->Location = System::Drawing::Point(360, 229);
			this->bntReset->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bntReset->Name = L"bntReset";
			this->bntReset->Size = System::Drawing::Size(150, 46);
			this->bntReset->TabIndex = 1;
			this->bntReset->Text = L"Сброс";
			this->bntReset->UseVisualStyleBackColor = true;
			this->bntReset->Click += gcnew System::EventHandler(this, &Form1::bntReset_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(360, 9);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(150, 46);
			this->btnAdd->TabIndex = 2;
			this->btnAdd->Text = L"Сложить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Form1::btnAdd_Click);
			// 
			// lblOper
			// 
			this->lblOper->AutoSize = true;
			this->lblOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblOper->Location = System::Drawing::Point(165, 15);
			this->lblOper->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblOper->Name = L"lblOper";
			this->lblOper->Size = System::Drawing::Size(0, 25);
			this->lblOper->TabIndex = 3;
			this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(15, 92);
			this->lbl1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(119, 20);
			this->lbl1->TabIndex = 4;
			this->lbl1->Text = L"Первое число:";
			this->lbl1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(165, 92);
			this->txt1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt1->MaxLength = 14;
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(133, 26);
			this->txt1->TabIndex = 5;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt1->TextChanged += gcnew System::EventHandler(this, &Form1::txt1_TextChanged);
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txt1_KeyPress);
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(15, 138);
			this->lbl2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(118, 20);
			this->lbl2->TabIndex = 6;
			this->lbl2->Text = L"Второе число:";
			this->lbl2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(15, 185);
			this->lblResult->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(93, 20);
			this->lblResult->TabIndex = 7;
			this->lblResult->Text = L"Результат:";
			this->lblResult->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(165, 138);
			this->txt2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt2->MaxLength = 14;
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(133, 26);
			this->txt2->TabIndex = 8;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt2->TextChanged += gcnew System::EventHandler(this, &Form1::txt2_TextChanged);
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txt2_KeyPress);
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(165, 185);
			this->txtResult->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(133, 26);
			this->txtResult->TabIndex = 9;
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnSub
			// 
			this->btnSub->Location = System::Drawing::Point(360, 65);
			this->btnSub->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(150, 46);
			this->btnSub->TabIndex = 10;
			this->btnSub->Text = L"Вычесть";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &Form1::btnSub_Click);
			// 
			// btnMulti
			// 
			this->btnMulti->Location = System::Drawing::Point(360, 120);
			this->btnMulti->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnMulti->Name = L"btnMulti";
			this->btnMulti->Size = System::Drawing::Size(150, 46);
			this->btnMulti->TabIndex = 11;
			this->btnMulti->Text = L"Умножить";
			this->btnMulti->UseVisualStyleBackColor = true;
			this->btnMulti->Click += gcnew System::EventHandler(this, &Form1::btnMulti_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->Location = System::Drawing::Point(360, 175);
			this->btnDiv->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(150, 46);
			this->btnDiv->TabIndex = 12;
			this->btnDiv->Text = L"Разделить";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &Form1::btnDiv_Click);
			// 
			// lblErr
			// 
			this->lblErr->AutoSize = true;
			this->lblErr->Location = System::Drawing::Point(108, 229);
			this->lblErr->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblErr->Name = L"lblErr";
			this->lblErr->Size = System::Drawing::Size(0, 20);
			this->lblErr->TabIndex = 13;
			this->lblErr->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(516, 340);
			this->Controls->Add(this->lblErr);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnMulti);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->lblOper);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->bntReset);
			this->Controls->Add(this->btnClose);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"calc";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		//Кнопка закрыть
		this->Close();
	}

	bool isNotEmpty = false;
	bool isNotEmpty2 = false;

	private: System::Void txt1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Проверка наличия запятой
		if (!txt1->Text->Contains(","))
		{
			//Только цифры, запятая и Backspace ASCII
			if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8 && e->KeyChar != 44)
			{
				e->Handled = true;
			}
		}
		else
		{
			//Только цифры и Backspace ASCII
			if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
			{
				e->Handled = true;
			}
		}
		//Проверка на наличие минуса 
		if (!txt1->Text->Contains("-") && e->KeyChar == 45)
		{
			txt1->Text = "-" + txt1->Text;
			txt1->Select(txt1->Text->Length, 0);
		}
		else 
		{
			txt1->Text = txt1->Text->Replace("-", "");
			txt1->Select(txt1->Text->Length, 0);
		}
		
	}
	private: System::Void txt1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//Проверка 1 строки на наличие чисел
		if (String::IsNullOrEmpty(txt1->Text) || txt1->Text == "-")
		{
			isNotEmpty = false;
		}
		else
		{
			isNotEmpty = true;
		}
		//Случай, если пользователь нажмёт ","
		if (txt1->Text == "-,")
		{
			txt1->Text = "-0,";
			txt1->Select(txt1->Text->Length, 0);
		}
		if (txt1->Text == ",")
		{
			txt1->Text = "0,";
			txt1->Select(txt1->Text->Length, 0);
		}
	}
	private: System::Void txt2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Проверка наличия запятой
		if (!txt2->Text->Contains(","))
		{
			//Только цифры, запятая и Backspace ASCII
			if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8 && e->KeyChar != 44)
			{
				e->Handled = true;
			}
		}
		else
		{
			//Только цифры и Backspace ASCII
			if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
			{
				e->Handled = true;
			}
		}
		//Проверка на наличие минуса
		if (!txt2->Text->Contains("-") && e->KeyChar == 45)
		{
			txt2->Text = "-" + txt2->Text;
			txt2->Select(txt2->Text->Length, 0);
		}
		else
		{
			txt2->Text = txt2->Text->Replace("-", "");
			txt2->Select(txt2->Text->Length, 0);
		}
	}
	private: System::Void txt2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//Проверка 2 строки на наличие чисел
		if (String::IsNullOrEmpty(txt2->Text) || txt2->Text == "-")
		{
			isNotEmpty2 = false;
		}
		else
		{
			isNotEmpty2 = true;
		}
		//Случай, если пользователь нажмёт ","
		if (txt2->Text == "-,")
		{
			txt2->Text = "-0,";
			txt2->Select(txt2->Text->Length, 0);
		}
		if (txt2->Text == ",")
		{
			txt2->Text = "0,";
			txt2->Select(txt2->Text->Length, 0);
		}
	}

	private: System::Void bntReset_Click(System::Object^ sender, System::EventArgs^ e) {
		//Кнопка сброса
		this->lblOper->Text = L"";
		this->txt1->Text = L"";
		this->txt2->Text = L"";
		this->txtResult->Text = L"";
		this->lblErr->Text = L"";
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		//Кнопка сложения
		this->lblOper->Text = L"";
		this->lblErr->Text = L"";
		this->txtResult->Text = L"";
		//Проверка на наличие чисел
		if (isNotEmpty && isNotEmpty2)
		{
			double i1, i2, i3;
			this->lblErr->Text = L"";
			this->lblOper->Text = L"Сложение";
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 + i2;
			this->txtResult->Text = Convert::ToString(i3);
		}
		else
		{
			this->lblErr->Text = L"Введите число";
		}
	}
	private: System::Void btnSub_Click(System::Object^ sender, System::EventArgs^ e) {
		//Вычитание
		this->lblOper->Text = L"";
		this->lblErr->Text = L"";
		this->txtResult->Text = L"";
		//Проверка на наличие чисел
		if (isNotEmpty && isNotEmpty2)
		{
			double i1, i2, i3;
			this->lblErr->Text = L"";
			this->lblOper->Text = L"Вычитание";
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 - i2;
			this->txtResult->Text = Convert::ToString(i3);
		}
		else
		{
			this->lblErr->Text = L"Введите число";
		}
	}
	private: System::Void btnMulti_Click(System::Object^ sender, System::EventArgs^ e) {
		//Умножение
		this->lblOper->Text = L"";
		this->lblErr->Text = L"";
		this->txtResult->Text = L"";
		//Проверка на наличие чисел
		if (isNotEmpty && isNotEmpty2)
		{
			double i1, i2, i3;
			this->lblOper->Text = L"Умножение";
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 * i2;
			this->txtResult->Text = Convert::ToString(i3);
		}
		else
		{
			this->lblErr->Text = L"Введите число";
		}
	}
	private: System::Void btnDiv_Click(System::Object^ sender, System::EventArgs^ e) {
		//Деление
		this->lblOper->Text = L"";
		this->lblErr->Text = L"";
		this->txtResult->Text = L"";
		//Проверка на наличие чисел
		if (isNotEmpty && isNotEmpty2)
		{
			this->lblOper->Text = L"Деление";
			double i1, i2, i3;
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			//Если в строке 2 - ноль, вывод ошибки
			if (i2 == 0)
			{
				this->lblErr->Text = L"На ноль делить нельзя";
			}
			else
			{
				i3 = i1 / i2;
				this->txtResult->Text = Convert::ToString(i3);
			}
		}
		else
		{
			this->lblErr->Text = L"Введите число";
		}
	}

};
}
