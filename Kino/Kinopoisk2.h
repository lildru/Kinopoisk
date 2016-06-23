#pragma once
#include "Film.h"
#include "FilmAdd.h"
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
#using <System.dll>
//using namespace System;
using namespace System::Diagnostics;
//using namespace System::ComponentModel;


namespace Kino {

	vector<string> Kinds;
	FilmList Films;
	vector<string> Countries;
	int Count;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Kinopoisk2
	/// </summary>
	public ref class Kinopoisk2 : public System::Windows::Forms::Form
	{
	public:
		Kinopoisk2(void)
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
		~Kinopoisk2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listViewFilms;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;


	private: System::Windows::Forms::ColumnHeader^  columnHeader0;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Panel^  panel1;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
	private: System::Windows::Forms::Button^  button6;


	protected:

	protected:




	protected:


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Kinopoisk2::typeid));
			this->listViewFilms = (gcnew System::Windows::Forms::ListView());
			this->columnHeader0 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->SuspendLayout();
			// 
			// listViewFilms
			// 
			this->listViewFilms->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listViewFilms->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader0,
					this->columnHeader1, this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6,
					this->columnHeader7
			});
			this->listViewFilms->FullRowSelect = true;
			this->listViewFilms->Location = System::Drawing::Point(12, 64);
			this->listViewFilms->MultiSelect = false;
			this->listViewFilms->Name = L"listViewFilms";
			this->listViewFilms->Size = System::Drawing::Size(1190, 382);
			this->listViewFilms->TabIndex = 0;
			this->listViewFilms->UseCompatibleStateImageBehavior = false;
			this->listViewFilms->View = System::Windows::Forms::View::Details;
			this->listViewFilms->DoubleClick += gcnew System::EventHandler(this, &Kinopoisk2::listViewFilms_DoubleClick);
			// 
			// columnHeader0
			// 
			this->columnHeader0->Text = L"№";
			this->columnHeader0->Width = 25;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Название";
			this->columnHeader1->Width = 143;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Режиссер";
			this->columnHeader2->Width = 135;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Жанр";
			this->columnHeader3->Width = 90;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Год выпуска";
			this->columnHeader4->Width = 94;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Страна";
			this->columnHeader5->Width = 86;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Актеры";
			this->columnHeader6->Width = 193;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Рейтинг";
			this->columnHeader7->Width = 55;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(886, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Kinopoisk2::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(995, 16);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Kinopoisk2::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(7, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Список фильмов";
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(1107, 16);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 35);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Смотреть";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Kinopoisk2::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->Location = System::Drawing::Point(1381, 321);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(136, 22);
			this->textBox5->TabIndex = 33;
			this->textBox5->Visible = false;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1221, 321);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 17);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Рейтинг";
			this->label9->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Location = System::Drawing::Point(1381, 280);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(136, 22);
			this->textBox4->TabIndex = 31;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1221, 280);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 17);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Актеры";
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(1381, 237);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(136, 24);
			this->comboBox2->TabIndex = 29;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1220, 237);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 17);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Страна";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(1379, 191);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(136, 22);
			this->textBox3->TabIndex = 27;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Kinopoisk2::textBox3_KeyPress);
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1221, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 17);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Год";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1220, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 17);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Жанр";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1220, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 17);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Режиссер";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1221, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 17);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Название";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1298, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 20);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Поиск фильма";
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(1381, 148);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(136, 24);
			this->comboBox1->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(1381, 104);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(136, 22);
			this->textBox2->TabIndex = 20;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(1381, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 22);
			this->textBox1->TabIndex = 19;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(1240, 351);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 31);
			this->button4->TabIndex = 34;
			this->button4->Text = L"Поиск";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Kinopoisk2::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->Location = System::Drawing::Point(1415, 351);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(78, 31);
			this->button5->TabIndex = 35;
			this->button5->Text = L"Сброс";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Kinopoisk2::button5_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->axWindowsMediaPlayer1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1529, 472);
			this->panel1->TabIndex = 36;
			this->panel1->Visible = false;
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(1476, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(54, 54);
			this->button6->TabIndex = 1;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Kinopoisk2::button6_Click);
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(0, 0);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(1529, 472);
			this->axWindowsMediaPlayer1->TabIndex = 0;
			// 
			// Kinopoisk2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1529, 472);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listViewFilms);
			this->MinimumSize = System::Drawing::Size(1240, 500);
			this->Name = L"Kinopoisk2";
			this->Text = L"Kinopoisk2";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Kinopoisk2::Kinopoisk2_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Kinopoisk2::Kinopoisk2_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Kinopoisk2_Load(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 Films.Load();
					 LoadKinds(); // Файлы не изменяются. Считаем, что в них уже занесены все страны и жанры.
					 LoadCountries();
				 }
				 catch (Exception^)
				 {
					 MessageBox::Show("База данных не загружена.");
				 }
				 for (int i = 0; i < Kinds.size(); i++){
					 comboBox1->Items->Add(msclr::interop::marshal_as<String^>(Kinds[i]));
				 }
				 for (int i = 0; i < Countries.size(); i++){
					 comboBox2->Items->Add(msclr::interop::marshal_as<String^>(Countries[i]));
				 }
				 Fill();
	}

	private: void Fill(){//заполнение фильма
				 listViewFilms->Items->Clear();
				 Count = 0;
				 for (int i = 0; i < Films.GetSize(); ++i)
				 {
					 Count++;
					 auto a = listViewFilms->Items->Add(Count.ToString());
					 a->SubItems->Add(msclr::interop::marshal_as<String^>(Films.GetFilm(i).GetName()));
					 a->SubItems->Add(msclr::interop::marshal_as<String^>(Films.GetFilm(i).GetAuthor()));
					 a->SubItems->Add(msclr::interop::marshal_as<String^>(Kinds[Films.GetFilm(i).GetKind()]));
					 a->SubItems->Add(Films.GetFilm(i).GetYear().ToString());
					 a->SubItems->Add(msclr::interop::marshal_as<String^>(Countries[Films.GetFilm(i).GetCountry()]));
					 a->SubItems->Add(msclr::interop::marshal_as<String^>(Films.GetFilm(i).GetActor()));
					 a->SubItems->Add(Films.GetFilm(i).GetRating().ToString());
				 }	
			 }
	
	private: System::Void Kinopoisk2_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {//сохранение в файл, когда закроем форму
				 Films.Save();
	}

	private: void LoadKinds(){//загрузка жанров с файла/справочника
				 ifstream file;
				 file.open("D:\\Kind.txt", ios_base::in);
				 string k; 
				 while (!file.eof()){
					 getline(file, k);
					 Kinds.push_back(k);
				 }
				 file.close();
			 }

	private: void LoadCountries(){//загрузка стран с файла/справочника
				 ifstream file;
				 file.open("D:\\Country.txt", ios_base::in);
				 string c;
				 while (!file.eof()){
					 getline(file, c);
					 Countries.push_back(c);
				 }
				 file.close();
			 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { //добавление
			 FilmAdd^FA = gcnew FilmAdd();
			 FA->ShowDialog();

			 if (FA->flag){
				 int Index = 0;
				 for (int i = 0; i < Kinds.size(); i++){
					 if (FA->GetKind() == Kinds[i])
						 Index = i;
				 }
				 int Index2 = 0;
				 for (int i = 0; i < Countries.size(); i++){
					 if (FA->GetCountry() == Countries[i])
						 Index2 = i;
				 }
				 Film f(FA->GetName(), FA->GetAuthor(), Index, FA->GetPath(), FA->GetYear(), FA->GetRating(), FA->GetActor(), Index2);
			     
				 Films.Add(f);

				 Fill();
			 }

}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { // удаление
				 if (listViewFilms->SelectedIndices->Count != 0)
				 {
					 string index = msclr::interop::marshal_as<string>(listViewFilms->SelectedItems[0]->Text);
					 int i = atoi(index.c_str());
					 Films.Delete(i - 1);
					 Fill();
				 }
	}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			Watch();
}
		 OpenFileDialog ^ openFileDialog1;
private:	 void Watch(){								//просмотр видео
			 if (listViewFilms->SelectedIndices->Count != 0)
			 {
				 string index = msclr::interop::marshal_as<string>(listViewFilms->SelectedItems[0]->Text);
				 int i = atoi(index.c_str()) - 1;
				// Process^ myProcess = gcnew Process(); // ver2.0
				// myProcess->StartInfo->FileName = msclr::interop::marshal_as<String^>(Films.GetFilm(i).GetPath());
				// myProcess->Start();
				 panel1->Visible = true;
				 axWindowsMediaPlayer1->URL = msclr::interop::marshal_as<String^>(Films.GetFilm(i).GetPath());
			 }
		 }

private: System::Void listViewFilms_DoubleClick(System::Object^  sender, System::EventArgs^  e) { //просмотр по дабл клику по фильму
			 Watch();
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) { //очистка
			 Fill();
			 textBox1->Text = "";
			 textBox2->Text = "";
			 textBox3->Text = "";
			 textBox4->Text = "";
			 textBox5->Text = "";
			 comboBox1->SelectedIndex = -1;
			 comboBox2->SelectedIndex = -1;
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) { //поиск
			 Fill();
			 int i = 0;
			 while (i < listViewFilms->Items->Count)
			 {
				 if (!IsNeeded(i))
					 listViewFilms->Items->RemoveAt(i);
				 else
					 i++;
			 }
		 }

private: bool IsNeeded(int i){//поиск (сравнение с тем, что вводят для поиска)
			 bool res = true;
			 if (textBox1->Text != "")
				 res &= listViewFilms->Items[i]->SubItems[1]->Text->Contains(textBox1->Text);
			 if (textBox2->Text != "")
				 res &= listViewFilms->Items[i]->SubItems[2]->Text->Contains(textBox2->Text);
			 if (comboBox1->Text != "")
				 res &= listViewFilms->Items[i]->SubItems[3]->Text->Contains(comboBox1->Text);
			 if (textBox3->Text != "")
				 res &= listViewFilms->Items[i]->SubItems[4]->Text->Contains(textBox3->Text);
			 if (comboBox2->Text != "")
				 res &= listViewFilms->Items[i]->SubItems[5]->Text->Contains(comboBox2->Text);
			 if (textBox4->Text != "")
				 res &= listViewFilms->Items[i]->SubItems[6]->Text->Contains(textBox4->Text);
			 /*if (textBox5->Text != "")																//поиск по рейтингу
				 res &= listViewFilms->Items[i]->SubItems[7]->Text->Contains(textBox5->Text);*/
			 return res;
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {//закрытие видео
			 panel1->Visible = false;
			 axWindowsMediaPlayer1->Ctlcontrols->pause();
}
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {//можно вводить только цифры в году
			 if (e->KeyChar != '0' && e->KeyChar != '1' && e->KeyChar != '2' && e->KeyChar != '3' && e->KeyChar != '4' && e->KeyChar != '5' && e->KeyChar != '6' && e->KeyChar != '7' && e->KeyChar != '8' && e->KeyChar != '9')
			 {
				 e->Handled = true;
			 }
}
};
}
