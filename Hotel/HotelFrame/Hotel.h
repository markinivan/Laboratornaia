#pragma once

#include "FIO.h"
#include "Person.h"
#include "Room.h"
#include "MyTime.h"
#include "Reserv.h"
#include "Rooms.h"
#include "Reserves.h"

#define HOTEL_SIZE 90
#define ECONOM_PRICE 1000
#define STANDART_PRICE 2000
#define LUXURY_PRICE 3000

#include <msclr\marshal_cppstd.h>

using namespace msclr::interop;

Rooms Base;
Reserves ResBase;
int res[5];


namespace HotelFrame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Hotel
	/// </summary>
	public ref class Hotel : public System::Windows::Forms::Form
	{
	public:
		Hotel(void)
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
		~Hotel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button7;




















	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1680, 779);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(1672, 750);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Бронь";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(107, 651);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 16);
			this->label10->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1117, 509);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(119, 16);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Номер телефона";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(1120, 527);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(211, 22);
			this->textBox8->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1021, 122);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(350, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Даты и время указывать в формате ММ:ЧЧ/ДД.ММ.ГГ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1117, 329);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(109, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Номер комнаты";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(612, 502);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Время отбытия";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(612, 329);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Время прибытия";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(612, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Дата рождения";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(107, 502);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Отчество";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(111, 329);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Имя";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(111, 161);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Фамилия";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(1120, 349);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(211, 22);
			this->textBox7->TabIndex = 7;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(615, 527);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(211, 22);
			this->textBox6->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(615, 349);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(211, 22);
			this->textBox5->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(615, 180);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(211, 22);
			this->textBox4->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(110, 527);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(211, 22);
			this->textBox3->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(110, 349);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(211, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(110, 180);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 22);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(700, 651);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Забронировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Hotel::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label66);
			this->tabPage2->Controls->Add(this->label65);
			this->tabPage2->Controls->Add(this->label64);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->textBox16);
			this->tabPage2->Controls->Add(this->textBox14);
			this->tabPage2->Controls->Add(this->label63);
			this->tabPage2->Controls->Add(this->textBox13);
			this->tabPage2->Controls->Add(this->label62);
			this->tabPage2->Controls->Add(this->textBox12);
			this->tabPage2->Controls->Add(this->label61);
			this->tabPage2->Controls->Add(this->label60);
			this->tabPage2->Controls->Add(this->label59);
			this->tabPage2->Controls->Add(this->textBox11);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->label58);
			this->tabPage2->Controls->Add(this->label57);
			this->tabPage2->Controls->Add(this->label56);
			this->tabPage2->Controls->Add(this->label55);
			this->tabPage2->Controls->Add(this->label54);
			this->tabPage2->Controls->Add(this->label53);
			this->tabPage2->Controls->Add(this->label52);
			this->tabPage2->Controls->Add(this->label51);
			this->tabPage2->Controls->Add(this->label50);
			this->tabPage2->Controls->Add(this->label49);
			this->tabPage2->Controls->Add(this->label48);
			this->tabPage2->Controls->Add(this->label47);
			this->tabPage2->Controls->Add(this->label46);
			this->tabPage2->Controls->Add(this->label45);
			this->tabPage2->Controls->Add(this->label44);
			this->tabPage2->Controls->Add(this->label43);
			this->tabPage2->Controls->Add(this->label42);
			this->tabPage2->Controls->Add(this->label41);
			this->tabPage2->Controls->Add(this->label40);
			this->tabPage2->Controls->Add(this->label39);
			this->tabPage2->Controls->Add(this->label38);
			this->tabPage2->Controls->Add(this->label37);
			this->tabPage2->Controls->Add(this->label36);
			this->tabPage2->Controls->Add(this->label35);
			this->tabPage2->Controls->Add(this->label34);
			this->tabPage2->Controls->Add(this->label33);
			this->tabPage2->Controls->Add(this->label32);
			this->tabPage2->Controls->Add(this->label31);
			this->tabPage2->Controls->Add(this->label30);
			this->tabPage2->Controls->Add(this->label29);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->label26);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(1672, 750);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Поиск и удаление";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(1332, 141);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 23);
			this->button10->TabIndex = 84;
			this->button10->Text = L"Удалить";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Hotel::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1332, 189);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 23);
			this->button9->TabIndex = 83;
			this->button9->Text = L"Удалить";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Hotel::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(1332, 233);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 23);
			this->button8->TabIndex = 82;
			this->button8->Text = L"Удалить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Hotel::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1332, 281);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 23);
			this->button7->TabIndex = 81;
			this->button7->Text = L"Удалить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Hotel::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1332, 89);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 23);
			this->button6->TabIndex = 80;
			this->button6->Text = L"Удалить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Hotel::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1249, 551);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(183, 34);
			this->button5->TabIndex = 79;
			this->button5->Text = L"Поиск по комнате";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Hotel::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(922, 551);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(183, 34);
			this->button4->TabIndex = 78;
			this->button4->Text = L"Поиск по вр. отбытия";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Hotel::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(581, 551);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(183, 34);
			this->button3->TabIndex = 77;
			this->button3->Text = L"Поиск по вр. прибытия";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Hotel::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(251, 551);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 34);
			this->button2->TabIndex = 76;
			this->button2->Text = L"Поиск по клиенту";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Hotel::button2_Click);
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(1246, 426);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(109, 16);
			this->label66->TabIndex = 75;
			this->label66->Text = L"Номер комнаты";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(919, 426);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(105, 16);
			this->label65->TabIndex = 74;
			this->label65->Text = L"Время отбытия";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(578, 426);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(114, 16);
			this->label64->TabIndex = 73;
			this->label64->Text = L"Время прибытия";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(1249, 445);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(183, 22);
			this->textBox15->TabIndex = 72;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(922, 445);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(183, 22);
			this->textBox16->TabIndex = 71;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(581, 445);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(183, 22);
			this->textBox14->TabIndex = 70;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(248, 475);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(119, 16);
			this->label63->TabIndex = 69;
			this->label63->Text = L"Номер телефона";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(251, 494);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(183, 22);
			this->textBox13->TabIndex = 68;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(248, 426);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(106, 16);
			this->label62->TabIndex = 67;
			this->label62->Text = L"Дата рождения";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(251, 445);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(183, 22);
			this->textBox12->TabIndex = 66;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(30, 532);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(70, 16);
			this->label61->TabIndex = 65;
			this->label61->Text = L"Отчество";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(30, 475);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(66, 16);
			this->label60->TabIndex = 64;
			this->label60->Text = L"Фамилия";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(30, 426);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(33, 16);
			this->label59->TabIndex = 63;
			this->label59->Text = L"Имя";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(33, 551);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(183, 22);
			this->textBox11->TabIndex = 62;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(33, 494);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(183, 22);
			this->textBox10->TabIndex = 61;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(33, 445);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(183, 22);
			this->textBox9->TabIndex = 60;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(1130, 96);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(10, 16);
			this->label58->TabIndex = 59;
			this->label58->Text = L".";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(1130, 144);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(10, 16);
			this->label57->TabIndex = 58;
			this->label57->Text = L".";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(1130, 192);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(10, 16);
			this->label56->TabIndex = 57;
			this->label56->Text = L".";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(1130, 240);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(10, 16);
			this->label55->TabIndex = 56;
			this->label55->Text = L".";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(676, 144);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(10, 16);
			this->label54->TabIndex = 55;
			this->label54->Text = L".";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(676, 192);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(10, 16);
			this->label53->TabIndex = 54;
			this->label53->Text = L".";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(676, 240);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(10, 16);
			this->label52->TabIndex = 53;
			this->label52->Text = L".";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(676, 288);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(10, 16);
			this->label51->TabIndex = 52;
			this->label51->Text = L".";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(831, 96);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(10, 16);
			this->label50->TabIndex = 51;
			this->label50->Text = L".";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(831, 144);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(10, 16);
			this->label49->TabIndex = 50;
			this->label49->Text = L".";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(831, 240);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(10, 16);
			this->label48->TabIndex = 49;
			this->label48->Text = L".";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(831, 192);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(10, 16);
			this->label47->TabIndex = 48;
			this->label47->Text = L".";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(831, 288);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(10, 16);
			this->label46->TabIndex = 47;
			this->label46->Text = L".";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(996, 96);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(10, 16);
			this->label45->TabIndex = 46;
			this->label45->Text = L".";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(996, 144);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(10, 16);
			this->label44->TabIndex = 45;
			this->label44->Text = L".";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(996, 192);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(10, 16);
			this->label43->TabIndex = 44;
			this->label43->Text = L".";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(996, 240);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(10, 16);
			this->label42->TabIndex = 43;
			this->label42->Text = L".";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(996, 288);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(10, 16);
			this->label41->TabIndex = 42;
			this->label41->Text = L".";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(1130, 288);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(10, 16);
			this->label40->TabIndex = 41;
			this->label40->Text = L".";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(676, 96);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(10, 16);
			this->label39->TabIndex = 40;
			this->label39->Text = L".";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(533, 288);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(10, 16);
			this->label38->TabIndex = 39;
			this->label38->Text = L".";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(533, 240);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(10, 16);
			this->label37->TabIndex = 38;
			this->label37->Text = L".";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(533, 192);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(10, 16);
			this->label36->TabIndex = 37;
			this->label36->Text = L".";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(533, 144);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(10, 16);
			this->label35->TabIndex = 36;
			this->label35->Text = L".";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(533, 96);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(10, 16);
			this->label34->TabIndex = 35;
			this->label34->Text = L".";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(364, 240);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(10, 16);
			this->label33->TabIndex = 34;
			this->label33->Text = L".";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(364, 288);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(10, 16);
			this->label32->TabIndex = 33;
			this->label32->Text = L".";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(364, 192);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(10, 16);
			this->label31->TabIndex = 32;
			this->label31->Text = L".";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(364, 144);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(10, 16);
			this->label30->TabIndex = 31;
			this->label30->Text = L".";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(197, 240);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(10, 16);
			this->label29->TabIndex = 30;
			this->label29->Text = L".";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(364, 96);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(10, 16);
			this->label28->TabIndex = 29;
			this->label28->Text = L".";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(197, 192);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(10, 16);
			this->label27->TabIndex = 28;
			this->label27->Text = L".";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(197, 288);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(10, 16);
			this->label21->TabIndex = 27;
			this->label21->Text = L".";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(197, 144);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(10, 16);
			this->label19->TabIndex = 26;
			this->label19->Text = L".";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(30, 96);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(10, 16);
			this->label26->TabIndex = 25;
			this->label26->Text = L".";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(30, 144);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(10, 16);
			this->label25->TabIndex = 24;
			this->label25->Text = L".";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(30, 192);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(10, 16);
			this->label24->TabIndex = 23;
			this->label24->Text = L".";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(30, 240);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(10, 16);
			this->label23->TabIndex = 22;
			this->label23->Text = L".";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(30, 288);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(10, 16);
			this->label22->TabIndex = 21;
			this->label22->Text = L".";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(197, 96);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(10, 16);
			this->label20->TabIndex = 19;
			this->label20->Text = L".";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(1130, 48);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(119, 16);
			this->label18->TabIndex = 18;
			this->label18->Text = L"Номер телефона";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(996, 48);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(109, 16);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Номер комнаты";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(831, 48);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(105, 16);
			this->label16->TabIndex = 14;
			this->label16->Text = L"Время отбытия";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(676, 48);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(114, 16);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Время прибытия";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(533, 48);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(106, 16);
			this->label14->TabIndex = 12;
			this->label14->Text = L"Дата рождения";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(364, 48);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(70, 16);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Отчество";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(197, 48);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 16);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Имя";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(30, 48);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(66, 16);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Фамилия";
			// 
			// Hotel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1680, 779);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Hotel";
			this->Text = L"Hotel";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		FIO _FInput(marshal_as<std::string>(this->textBox2->Text), marshal_as<std::string>(this->textBox1->Text), marshal_as<std::string>(this->textBox3->Text));
		Time _BirthDate(marshal_as<std::string>(this->textBox4->Text));
		Person _PInput(_FInput,_BirthDate, marshal_as<std::string>(this->textBox8->Text));
		Time _ATime(marshal_as<std::string>(this->textBox5->Text));
		Time _DTime(marshal_as<std::string>(this->textBox6->Text));
		int _InputNumber = atoi(marshal_as<std::string>(this->textBox7->Text).c_str());
		Room _RInput = Base.RoomSearchID(_InputNumber);
		Reserv _NewReserv(_RInput,_PInput,_ATime,_DTime);
		if (_RInput.getID() != 0) {
			if(_BirthDate.check() && _DTime.check() && _ATime.check()){
				if (_DTime > _ATime) {
					if (ResBase.AddReserv(_NewReserv)) {
						std::string str1 = "Бронь добавлена";
						this->label10->Text = gcnew String(str1.c_str());
						this->label10->Visible = true;
					} else {
						std::string str1 = "Ошибка Бронирования";
						this->label10->Text = gcnew String(str1.c_str());
						this->label10->Visible = true;
					}
				}else {
					std::string str1 = "Неверное соотношение дат";
					this->label10->Text = gcnew String(str1.c_str());
					this->label10->Visible = true;
				}
			} else {
				std::string str1 = "Некорректные даты";
				this->label10->Text = gcnew String(str1.c_str());
				this->label10->Visible = true;
			}
		} else {
			std::string str1 = "Комната занята, или введена некорректно";
			this->label10->Text = gcnew String(str1.c_str());
			this->label10->Visible = true;
		}
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	FIO _FInput(marshal_as<std::string>(this->textBox9->Text), marshal_as<std::string>(this->textBox10->Text), marshal_as<std::string>(this->textBox11->Text));
	Time _BirthDate(marshal_as<std::string>(this->textBox12->Text));
	Person _PInput(_FInput, _BirthDate, marshal_as<std::string>(this->textBox13->Text));
	ResBase.ReservSearchClient(_PInput, res);
	if (res[0] != -1) {
		this->label26->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getName().getSecondName().c_str());
		this->label20->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getName().getFirstName().c_str());
		this->label28->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getName().getLastName().c_str());
		this->label34->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getBirthday().Output().c_str());
		this->label39->Text = gcnew String(ResBase.ReservOutput(res[0]).getATime().Output().c_str());
		this->label50->Text = gcnew String(ResBase.ReservOutput(res[0]).getDTime().Output().c_str());
		this->label45->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[0]).getRoom().getID()).c_str());
		this->label58->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getNumber().c_str());
	}
	else {
		this->label26->Text = gcnew String(".");
		this->label20->Text = gcnew String(".");
		this->label28->Text = gcnew String(".");
		this->label34->Text = gcnew String(".");
		this->label39->Text = gcnew String(".");
		this->label50->Text = gcnew String(".");
		this->label45->Text = gcnew String(".");
		this->label58->Text = gcnew String(".");
	}
	if (res[1] != -1) {
		this->label25->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getName().getSecondName().c_str());
		this->label19->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getName().getFirstName().c_str());
		this->label30->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getName().getLastName().c_str());
		this->label35->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getBirthday().Output().c_str());
		this->label54->Text = gcnew String(ResBase.ReservOutput(res[1]).getATime().Output().c_str());
		this->label49->Text = gcnew String(ResBase.ReservOutput(res[1]).getDTime().Output().c_str());
		this->label44->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[1]).getRoom().getID()).c_str());
		this->label57->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getNumber().c_str());
	}
	else {
		this->label25->Text = gcnew String(".");
		this->label19->Text = gcnew String(".");
		this->label30->Text = gcnew String(".");
		this->label35->Text = gcnew String(".");
		this->label54->Text = gcnew String(".");
		this->label49->Text = gcnew String(".");
		this->label44->Text = gcnew String(".");
		this->label57->Text = gcnew String(".");
	}
	if (res[2] != -1) {
		this->label24->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getName().getSecondName().c_str());
		this->label27->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getName().getFirstName().c_str());
		this->label31->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getName().getLastName().c_str());
		this->label36->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getBirthday().Output().c_str());
		this->label53->Text = gcnew String(ResBase.ReservOutput(res[2]).getATime().Output().c_str());
		this->label47->Text = gcnew String(ResBase.ReservOutput(res[2]).getDTime().Output().c_str());
		this->label43->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[2]).getRoom().getID()).c_str());
		this->label56->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getNumber().c_str());
	}
	else {
		this->label24->Text = gcnew String(".");
		this->label27->Text = gcnew String(".");
		this->label31->Text = gcnew String(".");
		this->label36->Text = gcnew String(".");
		this->label53->Text = gcnew String(".");
		this->label47->Text = gcnew String(".");
		this->label43->Text = gcnew String(".");
		this->label56->Text = gcnew String(".");
	}
	if (res[3] != -1) {
		this->label23->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getName().getSecondName().c_str());
		this->label29->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getName().getFirstName().c_str());
		this->label33->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getName().getLastName().c_str());
		this->label37->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getBirthday().Output().c_str());
		this->label52->Text = gcnew String(ResBase.ReservOutput(res[3]).getATime().Output().c_str());
		this->label48->Text = gcnew String(ResBase.ReservOutput(res[3]).getDTime().Output().c_str());
		this->label42->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[3]).getRoom().getID()).c_str());
		this->label55->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getNumber().c_str());
	}
	else {
		this->label23->Text = gcnew String(".");
		this->label29->Text = gcnew String(".");
		this->label33->Text = gcnew String(".");
		this->label37->Text = gcnew String(".");
		this->label52->Text = gcnew String(".");
		this->label48->Text = gcnew String(".");
		this->label42->Text = gcnew String(".");
		this->label55->Text = gcnew String(".");
	}
	if (res[4] != -1) {
		this->label22->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getName().getSecondName().c_str());
		this->label21->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getName().getFirstName().c_str());
		this->label32->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getName().getLastName().c_str());
		this->label38->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getBirthday().Output().c_str());
		this->label51->Text = gcnew String(ResBase.ReservOutput(res[4]).getATime().Output().c_str());
		this->label46->Text = gcnew String(ResBase.ReservOutput(res[4]).getDTime().Output().c_str());
		this->label41->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[4]).getRoom().getID()).c_str());
		this->label40->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getNumber().c_str());
	}
	else {
		this->label22->Text = gcnew String(".");
		this->label21->Text = gcnew String(".");
		this->label32->Text = gcnew String(".");
		this->label38->Text = gcnew String(".");
		this->label51->Text = gcnew String(".");
		this->label46->Text = gcnew String(".");
		this->label41->Text = gcnew String(".");
		this->label40->Text = gcnew String(".");
	}



}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Time _TInput(marshal_as<std::string>(this->textBox14->Text));
	ResBase.ReservSearchArrival(_TInput, res);
	if (res[0] != -1) {
		this->label26->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getName().getSecondName().c_str());
		this->label20->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getName().getFirstName().c_str());
		this->label28->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getName().getLastName().c_str());
		this->label34->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getBirthday().Output().c_str());
		this->label39->Text = gcnew String(ResBase.ReservOutput(res[0]).getATime().Output().c_str());
		this->label50->Text = gcnew String(ResBase.ReservOutput(res[0]).getDTime().Output().c_str());
		this->label45->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[0]).getRoom().getID()).c_str());
		this->label58->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getNumber().c_str());
	}
	else {
		this->label26->Text = gcnew String(".");
		this->label20->Text = gcnew String(".");
		this->label28->Text = gcnew String(".");
		this->label34->Text = gcnew String(".");
		this->label39->Text = gcnew String(".");
		this->label50->Text = gcnew String(".");
		this->label45->Text = gcnew String(".");
		this->label58->Text = gcnew String(".");
	}
	if (res[1] != -1) {
		this->label25->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getName().getSecondName().c_str());
		this->label19->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getName().getFirstName().c_str());
		this->label30->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getName().getLastName().c_str());
		this->label35->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getBirthday().Output().c_str());
		this->label54->Text = gcnew String(ResBase.ReservOutput(res[1]).getATime().Output().c_str());
		this->label49->Text = gcnew String(ResBase.ReservOutput(res[1]).getDTime().Output().c_str());
		this->label44->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[1]).getRoom().getID()).c_str());
		this->label57->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getNumber().c_str());
	}
	else {
		this->label25->Text = gcnew String(".");
		this->label19->Text = gcnew String(".");
		this->label30->Text = gcnew String(".");
		this->label35->Text = gcnew String(".");
		this->label54->Text = gcnew String(".");
		this->label49->Text = gcnew String(".");
		this->label44->Text = gcnew String(".");
		this->label57->Text = gcnew String(".");
	}
	if (res[2] != -1) {
		this->label24->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getName().getSecondName().c_str());
		this->label27->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getName().getFirstName().c_str());
		this->label31->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getName().getLastName().c_str());
		this->label36->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getBirthday().Output().c_str());
		this->label53->Text = gcnew String(ResBase.ReservOutput(res[2]).getATime().Output().c_str());
		this->label47->Text = gcnew String(ResBase.ReservOutput(res[2]).getDTime().Output().c_str());
		this->label43->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[2]).getRoom().getID()).c_str());
		this->label56->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getNumber().c_str());
	}
	else {
		this->label24->Text = gcnew String(".");
		this->label27->Text = gcnew String(".");
		this->label31->Text = gcnew String(".");
		this->label36->Text = gcnew String(".");
		this->label53->Text = gcnew String(".");
		this->label47->Text = gcnew String(".");
		this->label43->Text = gcnew String(".");
		this->label56->Text = gcnew String(".");
	}
	if (res[3] != -1) {
		this->label23->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getName().getSecondName().c_str());
		this->label29->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getName().getFirstName().c_str());
		this->label33->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getName().getLastName().c_str());
		this->label37->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getBirthday().Output().c_str());
		this->label52->Text = gcnew String(ResBase.ReservOutput(res[3]).getATime().Output().c_str());
		this->label48->Text = gcnew String(ResBase.ReservOutput(res[3]).getDTime().Output().c_str());
		this->label42->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[3]).getRoom().getID()).c_str());
		this->label55->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getNumber().c_str());
	}
	else {
		this->label23->Text = gcnew String(".");
		this->label29->Text = gcnew String(".");
		this->label33->Text = gcnew String(".");
		this->label37->Text = gcnew String(".");
		this->label52->Text = gcnew String(".");
		this->label48->Text = gcnew String(".");
		this->label42->Text = gcnew String(".");
		this->label55->Text = gcnew String(".");
	}
	if (res[4] != -1) {
		this->label22->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getName().getSecondName().c_str());
		this->label21->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getName().getFirstName().c_str());
		this->label32->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getName().getLastName().c_str());
		this->label38->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getBirthday().Output().c_str());
		this->label51->Text = gcnew String(ResBase.ReservOutput(res[4]).getATime().Output().c_str());
		this->label46->Text = gcnew String(ResBase.ReservOutput(res[4]).getDTime().Output().c_str());
		this->label41->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[4]).getRoom().getID()).c_str());
		this->label40->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getNumber().c_str());
	}
	else {
		this->label22->Text = gcnew String(".");
		this->label21->Text = gcnew String(".");
		this->label32->Text = gcnew String(".");
		this->label38->Text = gcnew String(".");
		this->label51->Text = gcnew String(".");
		this->label46->Text = gcnew String(".");
		this->label41->Text = gcnew String(".");
		this->label40->Text = gcnew String(".");
	}



}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Time _TInput(marshal_as<std::string>(this->textBox16->Text));
	ResBase.ReservSearchDeparture(_TInput, res);
	if (res[0] != -1) {
		this->label26->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getName().getSecondName().c_str());
		this->label20->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getName().getFirstName().c_str());
		this->label28->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getName().getLastName().c_str());
		this->label34->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getBirthday().Output().c_str());
		this->label39->Text = gcnew String(ResBase.ReservOutput(res[0]).getATime().Output().c_str());
		this->label50->Text = gcnew String(ResBase.ReservOutput(res[0]).getDTime().Output().c_str());
		this->label45->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[0]).getRoom().getID()).c_str());
		this->label58->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getNumber().c_str());
	}
	else {
		this->label26->Text = gcnew String(".");
		this->label20->Text = gcnew String(".");
		this->label28->Text = gcnew String(".");
		this->label34->Text = gcnew String(".");
		this->label39->Text = gcnew String(".");
		this->label50->Text = gcnew String(".");
		this->label45->Text = gcnew String(".");
		this->label58->Text = gcnew String(".");
	}
	if (res[1] != -1) {
		this->label25->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getName().getSecondName().c_str());
		this->label19->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getName().getFirstName().c_str());
		this->label30->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getName().getLastName().c_str());
		this->label35->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getBirthday().Output().c_str());
		this->label54->Text = gcnew String(ResBase.ReservOutput(res[1]).getATime().Output().c_str());
		this->label49->Text = gcnew String(ResBase.ReservOutput(res[1]).getDTime().Output().c_str());
		this->label44->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[1]).getRoom().getID()).c_str());
		this->label57->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getNumber().c_str());
	}
	else {
		this->label25->Text = gcnew String(".");
		this->label19->Text = gcnew String(".");
		this->label30->Text = gcnew String(".");
		this->label35->Text = gcnew String(".");
		this->label54->Text = gcnew String(".");
		this->label49->Text = gcnew String(".");
		this->label44->Text = gcnew String(".");
		this->label57->Text = gcnew String(".");
	}
	if (res[2] != -1) {
		this->label24->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getName().getSecondName().c_str());
		this->label27->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getName().getFirstName().c_str());
		this->label31->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getName().getLastName().c_str());
		this->label36->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getBirthday().Output().c_str());
		this->label53->Text = gcnew String(ResBase.ReservOutput(res[2]).getATime().Output().c_str());
		this->label47->Text = gcnew String(ResBase.ReservOutput(res[2]).getDTime().Output().c_str());
		this->label43->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[2]).getRoom().getID()).c_str());
		this->label56->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getNumber().c_str());
	}
	else {
		this->label24->Text = gcnew String(".");
		this->label27->Text = gcnew String(".");
		this->label31->Text = gcnew String(".");
		this->label36->Text = gcnew String(".");
		this->label53->Text = gcnew String(".");
		this->label47->Text = gcnew String(".");
		this->label43->Text = gcnew String(".");
		this->label56->Text = gcnew String(".");
	}
	if (res[3] != -1) {
		this->label23->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getName().getSecondName().c_str());
		this->label29->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getName().getFirstName().c_str());
		this->label33->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getName().getLastName().c_str());
		this->label37->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getBirthday().Output().c_str());
		this->label52->Text = gcnew String(ResBase.ReservOutput(res[3]).getATime().Output().c_str());
		this->label48->Text = gcnew String(ResBase.ReservOutput(res[3]).getDTime().Output().c_str());
		this->label42->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[3]).getRoom().getID()).c_str());
		this->label55->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getNumber().c_str());
	}
	else {
		this->label23->Text = gcnew String(".");
		this->label29->Text = gcnew String(".");
		this->label33->Text = gcnew String(".");
		this->label37->Text = gcnew String(".");
		this->label52->Text = gcnew String(".");
		this->label48->Text = gcnew String(".");
		this->label42->Text = gcnew String(".");
		this->label55->Text = gcnew String(".");
	}
	if (res[4] != -1) {
		this->label22->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getName().getSecondName().c_str());
		this->label21->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getName().getFirstName().c_str());
		this->label32->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getName().getLastName().c_str());
		this->label38->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getBirthday().Output().c_str());
		this->label51->Text = gcnew String(ResBase.ReservOutput(res[4]).getATime().Output().c_str());
		this->label46->Text = gcnew String(ResBase.ReservOutput(res[4]).getDTime().Output().c_str());
		this->label41->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[4]).getRoom().getID()).c_str());
		this->label40->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getNumber().c_str());
	}
	else {
		this->label22->Text = gcnew String(".");
		this->label21->Text = gcnew String(".");
		this->label32->Text = gcnew String(".");
		this->label38->Text = gcnew String(".");
		this->label51->Text = gcnew String(".");
		this->label46->Text = gcnew String(".");
		this->label41->Text = gcnew String(".");
		this->label40->Text = gcnew String(".");
	}



}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int _IDInput = atoi(marshal_as<std::string>(this->textBox15->Text).c_str());
	ResBase.ReservSearchRoom(_IDInput, res);
	if (res[0] != -1) {
		this->label26->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getName().getSecondName().c_str());
		this->label20->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getName().getFirstName().c_str());
		this->label28->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getName().getLastName().c_str());
		this->label34->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getBirthday().Output().c_str());
		this->label39->Text = gcnew String(ResBase.ReservOutput(res[0]).getATime().Output().c_str());
		this->label50->Text = gcnew String(ResBase.ReservOutput(res[0]).getDTime().Output().c_str());
		this->label45->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[0]).getRoom().getID()).c_str());
		this->label58->Text = gcnew String(ResBase.ReservOutput(res[0]).getClient().getNumber().c_str());
	}
	else {
		this->label26->Text = gcnew String(".");
		this->label20->Text = gcnew String(".");
		this->label28->Text = gcnew String(".");
		this->label34->Text = gcnew String(".");
		this->label39->Text = gcnew String(".");
		this->label50->Text = gcnew String(".");
		this->label45->Text = gcnew String(".");
		this->label58->Text = gcnew String(".");
	}
	if (res[1] != -1) {
		this->label25->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getName().getSecondName().c_str());
		this->label19->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getName().getFirstName().c_str());
		this->label30->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getName().getLastName().c_str());
		this->label35->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getBirthday().Output().c_str());
		this->label54->Text = gcnew String(ResBase.ReservOutput(res[1]).getATime().Output().c_str());
		this->label49->Text = gcnew String(ResBase.ReservOutput(res[1]).getDTime().Output().c_str());
		this->label44->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[1]).getRoom().getID()).c_str());
		this->label57->Text = gcnew String(ResBase.ReservOutput(res[1]).getClient().getNumber().c_str());
	}
	else {
		this->label25->Text = gcnew String(".");
		this->label19->Text = gcnew String(".");
		this->label30->Text = gcnew String(".");
		this->label35->Text = gcnew String(".");
		this->label54->Text = gcnew String(".");
		this->label49->Text = gcnew String(".");
		this->label44->Text = gcnew String(".");
		this->label57->Text = gcnew String(".");
	}
	if (res[2] != -1) {
		this->label24->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getName().getSecondName().c_str());
		this->label27->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getName().getFirstName().c_str());
		this->label31->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getName().getLastName().c_str());
		this->label36->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getBirthday().Output().c_str());
		this->label53->Text = gcnew String(ResBase.ReservOutput(res[2]).getATime().Output().c_str());
		this->label47->Text = gcnew String(ResBase.ReservOutput(res[2]).getDTime().Output().c_str());
		this->label43->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[2]).getRoom().getID()).c_str());
		this->label56->Text = gcnew String(ResBase.ReservOutput(res[2]).getClient().getNumber().c_str());
	}
	else {
		this->label24->Text = gcnew String(".");
		this->label27->Text = gcnew String(".");
		this->label31->Text = gcnew String(".");
		this->label36->Text = gcnew String(".");
		this->label53->Text = gcnew String(".");
		this->label47->Text = gcnew String(".");
		this->label43->Text = gcnew String(".");
		this->label56->Text = gcnew String(".");
	}
	if (res[3] != -1) {
		this->label23->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getName().getSecondName().c_str());
		this->label29->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getName().getFirstName().c_str());
		this->label33->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getName().getLastName().c_str());
		this->label37->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getBirthday().Output().c_str());
		this->label52->Text = gcnew String(ResBase.ReservOutput(res[3]).getATime().Output().c_str());
		this->label48->Text = gcnew String(ResBase.ReservOutput(res[3]).getDTime().Output().c_str());
		this->label42->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[3]).getRoom().getID()).c_str());
		this->label55->Text = gcnew String(ResBase.ReservOutput(res[3]).getClient().getNumber().c_str());
	}
	else {
		this->label23->Text = gcnew String(".");
		this->label29->Text = gcnew String(".");
		this->label33->Text = gcnew String(".");
		this->label37->Text = gcnew String(".");
		this->label52->Text = gcnew String(".");
		this->label48->Text = gcnew String(".");
		this->label42->Text = gcnew String(".");
		this->label55->Text = gcnew String(".");
	}
	if (res[4] != -1) {
		this->label22->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getName().getSecondName().c_str());
		this->label21->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getName().getFirstName().c_str());
		this->label32->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getName().getLastName().c_str());
		this->label38->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getBirthday().Output().c_str());
		this->label51->Text = gcnew String(ResBase.ReservOutput(res[4]).getATime().Output().c_str());
		this->label46->Text = gcnew String(ResBase.ReservOutput(res[4]).getDTime().Output().c_str());
		this->label41->Text = gcnew String(std::to_string(ResBase.ReservOutput(res[4]).getRoom().getID()).c_str());
		this->label40->Text = gcnew String(ResBase.ReservOutput(res[4]).getClient().getNumber().c_str());
	}
	else {
		this->label22->Text = gcnew String(".");
		this->label21->Text = gcnew String(".");
		this->label32->Text = gcnew String(".");
		this->label38->Text = gcnew String(".");
		this->label51->Text = gcnew String(".");
		this->label46->Text = gcnew String(".");
		this->label41->Text = gcnew String(".");
		this->label40->Text = gcnew String(".");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	ResBase.DelReserv(res[0]);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	ResBase.DelReserv(res[1]);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	ResBase.DelReserv(res[2]);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	ResBase.DelReserv(res[3]);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	ResBase.DelReserv(res[4]);
}
};
}
