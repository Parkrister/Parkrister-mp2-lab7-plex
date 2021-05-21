#pragma once
#include <msclr/marshal_cppstd.h>
#include"Plex.h"
std::string flag = "Линия добавлена не к плексу";
namespace CppWinForm1 {

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
		Graphics^ gr;
		   TPoint* point;
		   bool f1, f2, res;

		   Pen^ ErrorPoint, ^ ErrorLine;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox7;


		   TChart* chart, * ch;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;




	private: System::Windows::Forms::TextBox^ textBox11;

	public:
		MyForm(void)
		{
			InitializeComponent();
			gr = this->CreateGraphics();
			ErrorPoint = ErrorLine = gcnew Pen(Color::Red);
			ErrorPoint->Width = (float)(PointWidth);
			ErrorLine->Width = (float)(LineWidth);
			point = NULL;
			ch = chart = NULL;
			f1 = f2 = res = false;
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

			}
		}

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(441, 628);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(114, 31);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Скрыть";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(17, 591);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(201, 28);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Сохранить в файл";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(563, 628);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(121, 31);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Восстановить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(242, 594);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(144, 22);
			this->textBox6->TabIndex = 16;
			this->textBox6->Text = L"new_plex.txt";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(17, 627);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(201, 28);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Прочитать из файла ";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(242, 627);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(144, 22);
			this->textBox7->TabIndex = 19;
			this->textBox7->Text = L"plexxx.txt";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(720, 500);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(144, 34);
			this->button10->TabIndex = 22;
			this->button10->Text = L"Добавить линию";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// textBox8
			// 
			this->textBox8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox8->Location = System::Drawing::Point(468, 532);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(87, 22);
			this->textBox8->TabIndex = 23;
			this->textBox8->Text = L"100";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(443, 500);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 17);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Х";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(444, 538);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 17);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Y";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(589, 535);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 17);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Y";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(589, 503);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(17, 17);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Х\r\n";
			// 
			// textBox9
			// 
			this->textBox9->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox9->Location = System::Drawing::Point(614, 533);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(87, 22);
			this->textBox9->TabIndex = 27;
			this->textBox9->Text = L"200";
			// 
			// textBox10
			// 
			this->textBox10->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox10->Location = System::Drawing::Point(614, 500);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(87, 22);
			this->textBox10->TabIndex = 26;
			this->textBox10->Text = L"200";
			// 
			// textBox11
			// 
			this->textBox11->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox11->Location = System::Drawing::Point(468, 498);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(87, 22);
			this->textBox11->TabIndex = 30;
			this->textBox11->Text = L"100";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(444, 477);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 17);
			this->label10->TabIndex = 31;
			this->label10->Text = L"Начало";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(589, 477);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 17);
			this->label11->TabIndex = 32;
			this->label11->Text = L"Конец";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(23, 547);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(147, 17);
			this->label12->TabIndex = 33;
			this->label12->Text = L"Введите координаты";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(440, 591);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(58, 22);
			this->textBox1->TabIndex = 35;
			this->textBox1->Text = L"0";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(570, 586);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 30);
			this->button2->TabIndex = 36;
			this->button2->Text = L"Переместить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(504, 591);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(58, 22);
			this->textBox2->TabIndex = 37;
			this->textBox2->Text = L"0";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(457, 571);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 17);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Х";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(521, 571);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 17);
			this->label2->TabIndex = 39;
			this->label2->Text = L"Y";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(692, 627);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 31);
			this->button3->TabIndex = 40;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(918, 686);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (chart)
			chart->hide(gr);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (chart)
			chart->show(gr);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (chart) {
			std::string filename = msclr::interop::marshal_as<std::string>(this->textBox6->Text);
			chart->save(filename);
		}
	}
		
	//private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//	this->button8->Enabled = false;
	//	point = new TPoint;
	//	point->SetX(Convert::ToInt32(textBox1->Text));
	//	point->SetY(Convert::ToInt32(textBox2->Text));
	//	point->show(gr);
	//	this->textBox4->Text = Convert::ToString(point->GetX());
	//	this->textBox4->Text += L",";
	//	this->textBox4->Text += Convert::ToString(point->GetY());
	//	f2 = true;
	//}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string filename = msclr::interop::marshal_as<std::string>(this->textBox7->Text);
		if (chart)
			chart->hide(gr);
		chart = new TChart;
		chart->read(filename);
		chart->show(gr);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (chart)
			chart->hide(gr);
		chart = NULL;
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	int X1 = 0, Y1 = 0, X2 = 0, Y2 = 0, tmp = 0;


	X1 = std::stoi(msclr::interop::marshal_as<std::string>(textBox11->Text));
	Y1 = std::stoi(msclr::interop::marshal_as<std::string>(textBox8->Text));
	X2 = std::stoi(msclr::interop::marshal_as<std::string>(textBox10->Text));
	Y2 = std::stoi(msclr::interop::marshal_as<std::string>(textBox9->Text));


	ch = new TChart;
	point = new TPoint;
	if (X1 && Y1 && X2 && Y2) {
		point->SetX(X1);
		point->SetY(Y1);

		ch->SetFirst(point);

		point = new TPoint;

		point->SetX(X2);
		point->SetY(Y2);
		ch->SetLast(point);

		if (chart)
		{
			res = chart->InsLine(ch);
		}
		else
		{
			res = true;
			chart = ch;
		}

		if (!res) {
			label12->Text = L"Невозможно добавить к плексу";
		}
		else {
			label12->Text = L"Линия добавлена";
			chart->show(gr);

		}

		textBox11->Text = Convert::ToString(X2);
		textBox8->Text = Convert::ToString(Y2);


	}
	else
		label12->Text = "Недостаточно данных";

}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chart) {
		int X1 = 0, Y1 = 0, X2 = 0, Y2 = 0, tmp = 0;


		X1 = std::stoi(msclr::interop::marshal_as<std::string>(textBox11->Text));
		Y1 = std::stoi(msclr::interop::marshal_as<std::string>(textBox8->Text));
		X2 = std::stoi(msclr::interop::marshal_as<std::string>(textBox10->Text));
		Y2 = std::stoi(msclr::interop::marshal_as<std::string>(textBox9->Text));
		point->SetX(X1);
		point->SetY(Y1);

		ch->SetFirst(point);

		point = new TPoint;

		point->SetX(X2);
		point->SetY(Y2);
		ch->SetLast(point);
		ch->TChart::hide(gr);
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chart) {
		int X = std::stoi(msclr::interop::marshal_as<std::string>(textBox1->Text));
		int Y = std::stoi(msclr::interop::marshal_as<std::string>(textBox2->Text));

		chart->hide(gr);
		try {
			chart->move(X, Y);
			int NewX = std::stoi(msclr::interop::marshal_as<std::string>(textBox11->Text)) + X;
			int NewY = std::stoi(msclr::interop::marshal_as<std::string>(textBox8->Text)) + Y;

			textBox11->Text = Convert::ToString(NewX);
			textBox8->Text = Convert::ToString(NewY);
		}
		catch(int err){
			label12->Text = "Невозможно переместить";
		}
		chart->show(gr);
	}
	//textBox1->Text = "0";
	//textBox2->Text = "0";

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chart)
		chart->hide(gr);
	chart = NULL;
}
};
}
