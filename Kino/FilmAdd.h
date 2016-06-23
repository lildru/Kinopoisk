#pragma once
#include "Film.h"
#include "FilmAdd.h"
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
using namespace std;

namespace Kino {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FilmAdd
	/// </summary>
	public ref class FilmAdd : public System::Windows::Forms::Form
	{
	public:
		bool flag = false;
		FilmAdd(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FilmAdd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(203, 409);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Отмена";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FilmAdd::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(20, 409);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 31);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Подтвердить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FilmAdd::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(177, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(177, 107);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(136, 22);
			this->textBox2->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(177, 151);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(136, 24);
			this->comboBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(94, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Добавление фильма";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Название";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Режиссер";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Жанр";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(20, 369);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 24);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Обзор";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FilmAdd::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(174, 373);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 17);
			this->label5->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 198);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Год";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(177, 198);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(136, 22);
			this->textBox3->TabIndex = 12;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FilmAdd::textBox3_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 240);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Страна";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(177, 240);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(136, 24);
			this->comboBox2->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 283);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Актеры";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(177, 283);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(136, 22);
			this->textBox4->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 324);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 17);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Рейтинг";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(177, 322);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(136, 22);
			this->numericUpDown1->TabIndex = 19;
			// 
			// FilmAdd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(333, 452);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FilmAdd";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"FilmAdd";
			this->Load += gcnew System::EventHandler(this, &FilmAdd::FilmAdd_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FilmAdd_Load(System::Object^  sender, System::EventArgs^  e) {
				 _LoadKinds();
				 _LoadCountries();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {//отмена добавления
				 this->Close();
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {//проверка на то, заполнены ли все поля
			 bool IsCorrect = true;
			 IsCorrect &= textBox1->Text != "";
			 IsCorrect &= textBox2->Text != "";
			 IsCorrect &= textBox3->Text != "";
			 IsCorrect &= textBox4->Text != "";
			 IsCorrect &= numericUpDown1->Value != 0;
			 IsCorrect &= label5->Text != "";
			 // OSTAL'NIE POLYA
			 if (IsCorrect){
				 flag = true;
				 this->Close();
			 }
			 else
				 MessageBox::Show("Не все поля заполненны.");
}

private: void _LoadKinds(){//загрузка жанров в добавление
			 
			vector<string> fdf;
			ifstream file;
			file.open("D:\\Kind.txt", ios_base::in);
			string k;
			while (!file.eof()){
				getline(file, k);
				fdf.push_back(k);
			}
			file.close();
			
			for (int i = 0; i < fdf.size(); i++){
				comboBox1->Items->Add(msclr::interop::marshal_as<String^>(fdf[i]));
			}

			comboBox1->SelectedIndex = 0;
}

		 private: void _LoadCountries(){//загрузка стран в добавление
					  vector<string> fdf;
					  ifstream file;
					  file.open("D:\\Country.txt", ios_base::in);
					  string k;
					  while (!file.eof()){
						  getline(file, k);
						  fdf.push_back(k);
					  }
					  file.close();

					  for (int i = 0; i < fdf.size(); i++){
						  comboBox2->Items->Add(msclr::interop::marshal_as<String^>(fdf[i]));
					  }

					  comboBox2->SelectedIndex = 0;
		 }

public: string GetName(){
			msclr::interop::marshal_context context;
			return context.marshal_as<std::string>(textBox1->Text);
}

public: string GetAuthor(){
			msclr::interop::marshal_context context;
			return context.marshal_as<std::string>(textBox2->Text);
}

public: string GetKind(){
			msclr::interop::marshal_context context;
			return context.marshal_as<std::string>(comboBox1->Text);
}

public: string GetPath(){
			msclr::interop::marshal_context context;
			return context.marshal_as<std::string>(label5->Text);
}

public: int GetYear(){
			msclr::interop::marshal_context context;
			return atoi(context.marshal_as<std::string>(textBox3->Text).c_str());
}
public: string GetCountry(){
			msclr::interop::marshal_context context;
			return context.marshal_as<std::string>(comboBox2->Text);
}

public: string GetActor(){
			msclr::interop::marshal_context context;
			return context.marshal_as<std::string>(textBox4->Text);
}

public: int GetRating(){
			msclr::interop::marshal_context context;
			//return atof(context.marshal_as<std::string>(numericUpDown1->Value).c_str());
			return (int)numericUpDown1->Value;
}


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {//обрзор файла
			 OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
			 openFileDialog1->Title = "Select a Film";
			 openFileDialog1->InitialDirectory = "d:\\Films";

			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 label5->Text = openFileDialog1->FileName;
			 }
}

private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {//только цифры в году
			 if (e->KeyChar != '0' && e->KeyChar != '1' && e->KeyChar != '2' && e->KeyChar != '3' && e->KeyChar != '4' && e->KeyChar != '5' && e->KeyChar != '6' && e->KeyChar != '7' && e->KeyChar != '8' && e->KeyChar != '9')
			{
				e->Handled = true;
			}
}
};
}
