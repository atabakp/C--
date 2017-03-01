#pragma once

#include <math.h>

namespace WindowsBasedApp {
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

	private: System::Windows::Forms::Label^ lblPrime;
	public:
	private: System::Windows::Forms::Button^ btnPrime;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblRoots;

	private: System::Windows::Forms::TextBox^ txtC;
	private: System::Windows::Forms::TextBox^ txtB;
	private: System::Windows::Forms::TextBox^ txtA;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cmbShape;

	private: System::Windows::Forms::RadioButton^ rdP;
	private: System::Windows::Forms::RadioButton^ rdA;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txt3;

	private: System::Windows::Forms::TextBox^ txt2;

	private: System::Windows::Forms::TextBox^ txt1;

	private: System::Windows::Forms::PictureBox^ picBoxFormula;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lbl3;

	private: System::Windows::Forms::Label^ lbl2;

	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ lblResult;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  lbl3DResult;
	private: System::Windows::Forms::Label^  lbl3D3;
	private: System::Windows::Forms::Label^  lbl3D2;
	private: System::Windows::Forms::Label^  lbl3D1;
	private: System::Windows::Forms::PictureBox^  PBFormula3D;
	private: System::Windows::Forms::TextBox^  txtBox3D3;
	private: System::Windows::Forms::TextBox^  txtBox3D2;
	private: System::Windows::Forms::TextBox^  txtBox3D1;
	private: System::Windows::Forms::PictureBox^  PB3D;
	private: System::Windows::Forms::RadioButton^  rd3DA;

	private: System::Windows::Forms::RadioButton^  rd3DV;


	private: System::Windows::Forms::ComboBox^  comboBox3D;
	private: System::Windows::Forms::Button^  resultBtn3D;

	private: System::Windows::Forms::TextBox^ txtPrime;

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ btnAC;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ btnEqual;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnSubtract;

	private: System::Windows::Forms::Button^ btnMultiple;

	private: System::Windows::Forms::Button^ btnDivision;

	private: System::Windows::Forms::Button^ btnPercent;

	private: System::Windows::Forms::Button^ btnPlusMinus;
	private: System::Windows::Forms::Button^ btnDot;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btn3;

	private: System::Windows::Forms::Button^ btn2;

	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn6;

	private: System::Windows::Forms::Button^ btn5;

	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn9;

	private: System::Windows::Forms::Button^ btn8;

	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::TextBox^ txtBox;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txtBox = (gcnew System::Windows::Forms::TextBox());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSubtract = (gcnew System::Windows::Forms::Button());
			this->btnMultiple = (gcnew System::Windows::Forms::Button());
			this->btnDivision = (gcnew System::Windows::Forms::Button());
			this->btnPercent = (gcnew System::Windows::Forms::Button());
			this->btnPlusMinus = (gcnew System::Windows::Forms::Button());
			this->btnAC = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->lblPrime = (gcnew System::Windows::Forms::Label());
			this->btnPrime = (gcnew System::Windows::Forms::Button());
			this->txtPrime = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblRoots = (gcnew System::Windows::Forms::Label());
			this->txtC = (gcnew System::Windows::Forms::TextBox());
			this->txtB = (gcnew System::Windows::Forms::TextBox());
			this->txtA = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->picBoxFormula = (gcnew System::Windows::Forms::PictureBox());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->rdP = (gcnew System::Windows::Forms::RadioButton());
			this->rdA = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmbShape = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->resultBtn3D = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lbl3DResult = (gcnew System::Windows::Forms::Label());
			this->lbl3D3 = (gcnew System::Windows::Forms::Label());
			this->lbl3D2 = (gcnew System::Windows::Forms::Label());
			this->lbl3D1 = (gcnew System::Windows::Forms::Label());
			this->PBFormula3D = (gcnew System::Windows::Forms::PictureBox());
			this->txtBox3D3 = (gcnew System::Windows::Forms::TextBox());
			this->txtBox3D2 = (gcnew System::Windows::Forms::TextBox());
			this->txtBox3D1 = (gcnew System::Windows::Forms::TextBox());
			this->PB3D = (gcnew System::Windows::Forms::PictureBox());
			this->rd3DA = (gcnew System::Windows::Forms::RadioButton());
			this->rd3DV = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox3D = (gcnew System::Windows::Forms::ComboBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxFormula))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBFormula3D))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB3D))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(1, -1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(786, 525);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->txtBox);
			this->tabPage1->Controls->Add(this->btnDot);
			this->tabPage1->Controls->Add(this->btn0);
			this->tabPage1->Controls->Add(this->btn3);
			this->tabPage1->Controls->Add(this->btn2);
			this->tabPage1->Controls->Add(this->btn1);
			this->tabPage1->Controls->Add(this->btn6);
			this->tabPage1->Controls->Add(this->btn5);
			this->tabPage1->Controls->Add(this->btn4);
			this->tabPage1->Controls->Add(this->btn9);
			this->tabPage1->Controls->Add(this->btn8);
			this->tabPage1->Controls->Add(this->btn7);
			this->tabPage1->Controls->Add(this->btnEqual);
			this->tabPage1->Controls->Add(this->btnAdd);
			this->tabPage1->Controls->Add(this->btnSubtract);
			this->tabPage1->Controls->Add(this->btnMultiple);
			this->tabPage1->Controls->Add(this->btnDivision);
			this->tabPage1->Controls->Add(this->btnPercent);
			this->tabPage1->Controls->Add(this->btnPlusMinus);
			this->tabPage1->Controls->Add(this->btnAC);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(778, 499);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Calculator";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// txtBox
			// 
			this->txtBox->Enabled = false;
			this->txtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->txtBox->Location = System::Drawing::Point(222, 58);
			this->txtBox->Margin = System::Windows::Forms::Padding(0);
			this->txtBox->Multiline = true;
			this->txtBox->Name = L"txtBox";
			this->txtBox->Size = System::Drawing::Size(240, 57);
			this->txtBox->TabIndex = 20;
			this->txtBox->Text = L"0";
			this->txtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnDot
			// 
			this->btnDot->BackColor = System::Drawing::Color::Silver;
			this->btnDot->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnDot->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnDot->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnDot->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnDot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btnDot->Location = System::Drawing::Point(342, 331);
			this->btnDot->Margin = System::Windows::Forms::Padding(0);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(60, 54);
			this->btnDot->TabIndex = 19;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = false;
			this->btnDot->Click += gcnew System::EventHandler(this, &MyForm::btnDot_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::Silver;
			this->btn0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn0->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn0->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn0->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btn0->Location = System::Drawing::Point(222, 331);
			this->btn0->Margin = System::Windows::Forms::Padding(0);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(120, 54);
			this->btn0->TabIndex = 17;
			this->btn0->Text = L"0";
			this->btn0->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn0_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::Silver;
			this->btn3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn3->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btn3->Location = System::Drawing::Point(342, 277);
			this->btn3->Margin = System::Windows::Forms::Padding(0);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(60, 54);
			this->btn3->TabIndex = 16;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Silver;
			this->btn2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn2->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btn2->Location = System::Drawing::Point(282, 277);
			this->btn2->Margin = System::Windows::Forms::Padding(0);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(60, 54);
			this->btn2->TabIndex = 15;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Silver;
			this->btn1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn1->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btn1->Location = System::Drawing::Point(222, 277);
			this->btn1->Margin = System::Windows::Forms::Padding(0);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(60, 54);
			this->btn1->TabIndex = 14;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::Silver;
			this->btn6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn6->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btn6->Location = System::Drawing::Point(342, 223);
			this->btn6->Margin = System::Windows::Forms::Padding(0);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(60, 54);
			this->btn6->TabIndex = 13;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::Silver;
			this->btn5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn5->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btn5->Location = System::Drawing::Point(282, 223);
			this->btn5->Margin = System::Windows::Forms::Padding(0);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(60, 54);
			this->btn5->TabIndex = 12;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::Silver;
			this->btn4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn4->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btn4->Location = System::Drawing::Point(222, 223);
			this->btn4->Margin = System::Windows::Forms::Padding(0);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(60, 54);
			this->btn4->TabIndex = 11;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::Silver;
			this->btn9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn9->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn9->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btn9->Location = System::Drawing::Point(342, 169);
			this->btn9->Margin = System::Windows::Forms::Padding(0);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(60, 54);
			this->btn9->TabIndex = 10;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::Silver;
			this->btn8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn8->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn8->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btn8->Location = System::Drawing::Point(282, 169);
			this->btn8->Margin = System::Windows::Forms::Padding(0);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(60, 54);
			this->btn8->TabIndex = 9;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::Silver;
			this->btn7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn7->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btn7->Location = System::Drawing::Point(222, 169);
			this->btn7->Margin = System::Windows::Forms::Padding(0);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(60, 54);
			this->btn7->TabIndex = 8;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// btnEqual
			// 
			this->btnEqual->BackColor = System::Drawing::Color::DarkOrange;
			this->btnEqual->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnEqual->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnEqual->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnEqual->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnEqual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btnEqual->Location = System::Drawing::Point(402, 331);
			this->btnEqual->Margin = System::Windows::Forms::Padding(0);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(60, 54);
			this->btnEqual->TabIndex = 7;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = false;
			this->btnEqual->Click += gcnew System::EventHandler(this, &MyForm::btnEqual_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::DarkOrange;
			this->btnAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnAdd->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnAdd->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnAdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btnAdd->Location = System::Drawing::Point(402, 277);
			this->btnAdd->Margin = System::Windows::Forms::Padding(0);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(60, 54);
			this->btnAdd->TabIndex = 6;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnSubtract
			// 
			this->btnSubtract->BackColor = System::Drawing::Color::DarkOrange;
			this->btnSubtract->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnSubtract->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnSubtract->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnSubtract->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnSubtract->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSubtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btnSubtract->Location = System::Drawing::Point(402, 223);
			this->btnSubtract->Margin = System::Windows::Forms::Padding(0);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(60, 54);
			this->btnSubtract->TabIndex = 5;
			this->btnSubtract->Text = L"-";
			this->btnSubtract->UseVisualStyleBackColor = false;
			this->btnSubtract->Click += gcnew System::EventHandler(this, &MyForm::btnSubtract_Click);
			// 
			// btnMultiple
			// 
			this->btnMultiple->BackColor = System::Drawing::Color::DarkOrange;
			this->btnMultiple->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnMultiple->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnMultiple->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnMultiple->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnMultiple->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMultiple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btnMultiple->Location = System::Drawing::Point(402, 169);
			this->btnMultiple->Margin = System::Windows::Forms::Padding(0);
			this->btnMultiple->Name = L"btnMultiple";
			this->btnMultiple->Size = System::Drawing::Size(60, 54);
			this->btnMultiple->TabIndex = 4;
			this->btnMultiple->Text = L"X";
			this->btnMultiple->UseVisualStyleBackColor = false;
			this->btnMultiple->Click += gcnew System::EventHandler(this, &MyForm::btnMultiple_Click);
			// 
			// btnDivision
			// 
			this->btnDivision->BackColor = System::Drawing::Color::DarkOrange;
			this->btnDivision->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnDivision->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnDivision->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnDivision->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnDivision->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDivision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btnDivision->Location = System::Drawing::Point(402, 115);
			this->btnDivision->Margin = System::Windows::Forms::Padding(0);
			this->btnDivision->Name = L"btnDivision";
			this->btnDivision->Size = System::Drawing::Size(60, 54);
			this->btnDivision->TabIndex = 3;
			this->btnDivision->Text = L"÷";
			this->btnDivision->UseVisualStyleBackColor = false;
			this->btnDivision->Click += gcnew System::EventHandler(this, &MyForm::btnDivision_Click);
			// 
			// btnPercent
			// 
			this->btnPercent->BackColor = System::Drawing::Color::DarkGray;
			this->btnPercent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnPercent->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnPercent->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnPercent->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->btnPercent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPercent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btnPercent->Location = System::Drawing::Point(342, 115);
			this->btnPercent->Margin = System::Windows::Forms::Padding(0);
			this->btnPercent->Name = L"btnPercent";
			this->btnPercent->Size = System::Drawing::Size(60, 54);
			this->btnPercent->TabIndex = 2;
			this->btnPercent->Text = L"%";
			this->btnPercent->UseVisualStyleBackColor = false;
			// 
			// btnPlusMinus
			// 
			this->btnPlusMinus->BackColor = System::Drawing::Color::DarkGray;
			this->btnPlusMinus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnPlusMinus->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnPlusMinus->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnPlusMinus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->btnPlusMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPlusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btnPlusMinus->Location = System::Drawing::Point(282, 115);
			this->btnPlusMinus->Margin = System::Windows::Forms::Padding(0);
			this->btnPlusMinus->Name = L"btnPlusMinus";
			this->btnPlusMinus->Size = System::Drawing::Size(60, 54);
			this->btnPlusMinus->TabIndex = 1;
			this->btnPlusMinus->Text = L"+/-";
			this->btnPlusMinus->UseVisualStyleBackColor = false;
			// 
			// btnAC
			// 
			this->btnAC->BackColor = System::Drawing::Color::DarkGray;
			this->btnAC->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnAC->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnAC->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnAC->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->btnAC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->btnAC->Location = System::Drawing::Point(222, 115);
			this->btnAC->Margin = System::Windows::Forms::Padding(0);
			this->btnAC->Name = L"btnAC";
			this->btnAC->Size = System::Drawing::Size(60, 54);
			this->btnAC->TabIndex = 0;
			this->btnAC->Text = L"AC";
			this->btnAC->UseVisualStyleBackColor = false;
			this->btnAC->Click += gcnew System::EventHandler(this, &MyForm::btnAC_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->lblPrime);
			this->tabPage2->Controls->Add(this->btnPrime);
			this->tabPage2->Controls->Add(this->txtPrime);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(778, 499);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Is Prime\?";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// lblPrime
			// 
			this->lblPrime->AutoSize = true;
			this->lblPrime->Location = System::Drawing::Point(510, 263);
			this->lblPrime->Name = L"lblPrime";
			this->lblPrime->Size = System::Drawing::Size(0, 13);
			this->lblPrime->TabIndex = 2;
			this->lblPrime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnPrime
			// 
			this->btnPrime->Location = System::Drawing::Point(360, 318);
			this->btnPrime->Name = L"btnPrime";
			this->btnPrime->Size = System::Drawing::Size(75, 23);
			this->btnPrime->TabIndex = 1;
			this->btnPrime->Text = L"Prime\?";
			this->btnPrime->UseVisualStyleBackColor = true;
			this->btnPrime->Click += gcnew System::EventHandler(this, &MyForm::btnPrime_Click);
			// 
			// txtPrime
			// 
			this->txtPrime->Location = System::Drawing::Point(316, 260);
			this->txtPrime->Name = L"txtPrime";
			this->txtPrime->Size = System::Drawing::Size(165, 20);
			this->txtPrime->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->lblRoots);
			this->tabPage3->Controls->Add(this->txtC);
			this->tabPage3->Controls->Add(this->txtB);
			this->tabPage3->Controls->Add(this->txtA);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(778, 499);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Quadratic Equation";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(525, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Find roots";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lblRoots
			// 
			this->lblRoots->AutoSize = true;
			this->lblRoots->Location = System::Drawing::Point(268, 146);
			this->lblRoots->Name = L"lblRoots";
			this->lblRoots->Size = System::Drawing::Size(0, 13);
			this->lblRoots->TabIndex = 6;
			// 
			// txtC
			// 
			this->txtC->Location = System::Drawing::Point(425, 75);
			this->txtC->Name = L"txtC";
			this->txtC->Size = System::Drawing::Size(35, 20);
			this->txtC->TabIndex = 5;
			// 
			// txtB
			// 
			this->txtB->Location = System::Drawing::Point(350, 75);
			this->txtB->Name = L"txtB";
			this->txtB->Size = System::Drawing::Size(40, 20);
			this->txtB->TabIndex = 4;
			// 
			// txtA
			// 
			this->txtA->Location = System::Drawing::Point(258, 75);
			this->txtA->Name = L"txtA";
			this->txtA->Size = System::Drawing::Size(45, 20);
			this->txtA->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(466, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"= 0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(396, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"X +";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(309, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X^2 +";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->lblResult);
			this->tabPage4->Controls->Add(this->button2);
			this->tabPage4->Controls->Add(this->lbl3);
			this->tabPage4->Controls->Add(this->lbl2);
			this->tabPage4->Controls->Add(this->lbl1);
			this->tabPage4->Controls->Add(this->picBoxFormula);
			this->tabPage4->Controls->Add(this->txt3);
			this->tabPage4->Controls->Add(this->txt2);
			this->tabPage4->Controls->Add(this->txt1);
			this->tabPage4->Controls->Add(this->pictureBox1);
			this->tabPage4->Controls->Add(this->rdP);
			this->tabPage4->Controls->Add(this->rdA);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Controls->Add(this->cmbShape);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(778, 499);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"2D shapes";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->Location = System::Drawing::Point(469, 309);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 29);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Result :";
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->lblResult->ForeColor = System::Drawing::SystemColors::Highlight;
			this->lblResult->Location = System::Drawing::Point(568, 309);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(0, 31);
			this->lblResult->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(126, 378);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Show result";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Location = System::Drawing::Point(49, 330);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(0, 13);
			this->lbl3->TabIndex = 11;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(49, 287);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(0, 13);
			this->lbl2->TabIndex = 10;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(49, 242);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(0, 13);
			this->lbl1->TabIndex = 9;
			// 
			// picBoxFormula
			// 
			this->picBoxFormula->Location = System::Drawing::Point(36, 110);
			this->picBoxFormula->Name = L"picBoxFormula";
			this->picBoxFormula->Size = System::Drawing::Size(262, 123);
			this->picBoxFormula->TabIndex = 8;
			this->picBoxFormula->TabStop = false;
			// 
			// txt3
			// 
			this->txt3->Location = System::Drawing::Point(152, 327);
			this->txt3->Name = L"txt3";
			this->txt3->Size = System::Drawing::Size(49, 20);
			this->txt3->TabIndex = 7;
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(152, 284);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(49, 20);
			this->txt2->TabIndex = 6;
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(152, 239);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(49, 20);
			this->txt1->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(450, 48);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(260, 185);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// rdP
			// 
			this->rdP->AutoSize = true;
			this->rdP->Location = System::Drawing::Point(229, 71);
			this->rdP->Name = L"rdP";
			this->rdP->Size = System::Drawing::Size(69, 17);
			this->rdP->TabIndex = 3;
			this->rdP->Text = L"Perimeter";
			this->rdP->UseVisualStyleBackColor = true;
			this->rdP->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rdP_CheckedChanged);
			// 
			// rdA
			// 
			this->rdA->AutoSize = true;
			this->rdA->Checked = true;
			this->rdA->Location = System::Drawing::Point(229, 48);
			this->rdA->Name = L"rdA";
			this->rdA->Size = System::Drawing::Size(47, 17);
			this->rdA->TabIndex = 2;
			this->rdA->TabStop = true;
			this->rdA->Text = L"Area";
			this->rdA->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Shape:";
			// 
			// cmbShape
			// 
			this->cmbShape->FormattingEnabled = true;
			this->cmbShape->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Triangle", L"Rectangle", L"Square", L"Parallelogram",
					L"Circle"
			});
			this->cmbShape->Location = System::Drawing::Point(80, 48);
			this->cmbShape->Name = L"cmbShape";
			this->cmbShape->Size = System::Drawing::Size(121, 21);
			this->cmbShape->TabIndex = 0;
			this->cmbShape->SelectionChangeCommitted += gcnew System::EventHandler(this, &MyForm::cmbShape_SelectionChangeCommitted);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->resultBtn3D);
			this->tabPage5->Controls->Add(this->label6);
			this->tabPage5->Controls->Add(this->lbl3DResult);
			this->tabPage5->Controls->Add(this->lbl3D3);
			this->tabPage5->Controls->Add(this->lbl3D2);
			this->tabPage5->Controls->Add(this->lbl3D1);
			this->tabPage5->Controls->Add(this->PBFormula3D);
			this->tabPage5->Controls->Add(this->txtBox3D3);
			this->tabPage5->Controls->Add(this->txtBox3D2);
			this->tabPage5->Controls->Add(this->txtBox3D1);
			this->tabPage5->Controls->Add(this->PB3D);
			this->tabPage5->Controls->Add(this->rd3DA);
			this->tabPage5->Controls->Add(this->rd3DV);
			this->tabPage5->Controls->Add(this->comboBox3D);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(778, 499);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"3D Shapes";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// resultBtn3D
			// 
			this->resultBtn3D->Location = System::Drawing::Point(129, 385);
			this->resultBtn3D->Name = L"resultBtn3D";
			this->resultBtn3D->Size = System::Drawing::Size(75, 23);
			this->resultBtn3D->TabIndex = 28;
			this->resultBtn3D->Text = L"Show result";
			this->resultBtn3D->UseVisualStyleBackColor = true;
			this->resultBtn3D->Click += gcnew System::EventHandler(this, &MyForm::resultBtn3D_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->Location = System::Drawing::Point(472, 311);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 29);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Result :";
			// 
			// lbl3DResult
			// 
			this->lbl3DResult->AutoSize = true;
			this->lbl3DResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->lbl3DResult->ForeColor = System::Drawing::SystemColors::Highlight;
			this->lbl3DResult->Location = System::Drawing::Point(571, 311);
			this->lbl3DResult->Name = L"lbl3DResult";
			this->lbl3DResult->Size = System::Drawing::Size(0, 31);
			this->lbl3DResult->TabIndex = 26;
			// 
			// lbl3D3
			// 
			this->lbl3D3->AutoSize = true;
			this->lbl3D3->Location = System::Drawing::Point(52, 332);
			this->lbl3D3->Name = L"lbl3D3";
			this->lbl3D3->Size = System::Drawing::Size(0, 13);
			this->lbl3D3->TabIndex = 25;
			// 
			// lbl3D2
			// 
			this->lbl3D2->AutoSize = true;
			this->lbl3D2->Location = System::Drawing::Point(52, 289);
			this->lbl3D2->Name = L"lbl3D2";
			this->lbl3D2->Size = System::Drawing::Size(0, 13);
			this->lbl3D2->TabIndex = 24;
			// 
			// lbl3D1
			// 
			this->lbl3D1->AutoSize = true;
			this->lbl3D1->Location = System::Drawing::Point(52, 244);
			this->lbl3D1->Name = L"lbl3D1";
			this->lbl3D1->Size = System::Drawing::Size(0, 13);
			this->lbl3D1->TabIndex = 23;
			// 
			// PBFormula3D
			// 
			this->PBFormula3D->Location = System::Drawing::Point(39, 112);
			this->PBFormula3D->Name = L"PBFormula3D";
			this->PBFormula3D->Size = System::Drawing::Size(262, 123);
			this->PBFormula3D->TabIndex = 22;
			this->PBFormula3D->TabStop = false;
			// 
			// txtBox3D3
			// 
			this->txtBox3D3->Location = System::Drawing::Point(155, 329);
			this->txtBox3D3->Name = L"txtBox3D3";
			this->txtBox3D3->Size = System::Drawing::Size(49, 20);
			this->txtBox3D3->TabIndex = 21;
			// 
			// txtBox3D2
			// 
			this->txtBox3D2->Location = System::Drawing::Point(155, 286);
			this->txtBox3D2->Name = L"txtBox3D2";
			this->txtBox3D2->Size = System::Drawing::Size(49, 20);
			this->txtBox3D2->TabIndex = 20;
			// 
			// txtBox3D1
			// 
			this->txtBox3D1->Location = System::Drawing::Point(155, 241);
			this->txtBox3D1->Name = L"txtBox3D1";
			this->txtBox3D1->Size = System::Drawing::Size(49, 20);
			this->txtBox3D1->TabIndex = 19;
			// 
			// PB3D
			// 
			this->PB3D->Location = System::Drawing::Point(453, 50);
			this->PB3D->Name = L"PB3D";
			this->PB3D->Size = System::Drawing::Size(260, 185);
			this->PB3D->TabIndex = 18;
			this->PB3D->TabStop = false;
			// 
			// rd3DA
			// 
			this->rd3DA->AutoSize = true;
			this->rd3DA->Location = System::Drawing::Point(232, 73);
			this->rd3DA->Name = L"rd3DA";
			this->rd3DA->Size = System::Drawing::Size(87, 17);
			this->rd3DA->TabIndex = 17;
			this->rd3DA->Text = L"Surface Area";
			this->rd3DA->UseVisualStyleBackColor = true;
			// 
			// rd3DV
			// 
			this->rd3DV->AutoSize = true;
			this->rd3DV->Checked = true;
			this->rd3DV->Location = System::Drawing::Point(232, 50);
			this->rd3DV->Name = L"rd3DV";
			this->rd3DV->Size = System::Drawing::Size(60, 17);
			this->rd3DV->TabIndex = 16;
			this->rd3DV->TabStop = true;
			this->rd3DV->Text = L"Volume";
			this->rd3DV->UseVisualStyleBackColor = true;
			this->rd3DV->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rd3DV_CheckedChanged);
			// 
			// comboBox3D
			// 
			this->comboBox3D->FormattingEnabled = true;
			this->comboBox3D->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Pyramid", L"Cube", L"Cylinder", L"Sphere" });
			this->comboBox3D->Location = System::Drawing::Point(83, 50);
			this->comboBox3D->Name = L"comboBox3D";
			this->comboBox3D->Size = System::Drawing::Size(121, 21);
			this->comboBox3D->TabIndex = 15;
			this->comboBox3D->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3D_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(786, 523);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxFormula))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBFormula3D))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB3D))->EndInit();
			this->ResumeLayout(false);

		}

		
		String^ textBoxString;
		bool lastButtonWasMode = false;
		double savedNum = 0;
		char currentMode;
		bool isPrime(int n)
		{
			int i = 5;
			if (n <= 1)
				return false;
			else if (n <= 3)
				return true;
			else if (n % 2 == 0 || n % 3 == 0)
				return false;
			while (i*i <= n) {
				if (n%i == 0 || n % (i + 2) == 0)
					return false;
				i = i + 6;
			}
			return true;
		}
		void clickedNumber(int num) {
			if (lastButtonWasMode) {
				lastButtonWasMode = false;
				textBoxString = "0";
			}
			textBoxString = textBoxString + Convert::ToString(num);
			updateText();
		}
		void updateText() {
			double lableDouble = Convert::ToDouble(textBoxString);
			if (currentMode == 0)
				savedNum = lableDouble;
			txtBox->Text = Convert::ToString(lableDouble);
		}
		void changemode(char mode) {
			if (savedNum == 0) {
				return;
			}
			currentMode = mode;
			lastButtonWasMode = true;
		}
		void equal() {
			double num = Convert::ToDouble(textBoxString);
			/*if ( lastButtonWasMode && savedNum==0 ) {
				return;
			}*/
			if (currentMode == '+') {
				savedNum += num;
			}
			else if (currentMode == '-') {
				savedNum -= num;
			}
			else if (currentMode == 'x') {
				savedNum *= num;
			}
			else if (currentMode == '/') {
				savedNum /= num;
			}

			textBoxString = Convert::ToString(savedNum);
			updateText();
		}
		void loadImage() {
			switch (cmbShape->SelectedIndex) {
			case 0:
				triangle();
				break;
			case 1:
				rectangle();
				break;
			case 2:
				square();
				break;
			case 3:
				parallelogram();
				break;
			case 4:
				circle();
				break;
			}
		}
	
		void loadImage3D() {
			switch (comboBox3D->SelectedIndex) {
			case 0:
				pyramid();
				break;
			case 1:
				cube();
				break;
			case 2:
				cylinder();
				break;
			case 3:
				sphere();
				break;
			}
		}

		void triangle() {
			pictureBox1->Load("..\\Debug\\img\\triangle\\triangle.jpg");
			if (rdA->Checked) {
				picBoxFormula->Load("..\\Debug\\img\\triangle\\A.jpg");
				lbl1->Text = "b :";
				lbl2->Text = "h :";
				lbl2->Visible = true;
				txt2->Visible = true;
				lbl3->Visible = false;
				txt3->Visible = false;
			}
			if (rdP->Checked) {
				picBoxFormula->Load("..\\Debug\\img\\triangle\\P.jpg");
				lbl1->Text = "a :";
				lbl2->Text = "b :";
				lbl2->Visible = true;
				txt2->Visible = true;
				lbl3->Text = "c :";
				lbl3->Visible = true;
				txt3->Visible = true;
			}
		}
		void square() {
			pictureBox1->Load("..\\Debug\\img\\square\\square.jpg");
			if (rdA->Checked) {
				picBoxFormula->Load("..\\Debug\\img\\square\\A.jpg");
				lbl1->Text = "a :";
				lbl2->Visible = false;
				txt2->Visible = false;
				lbl3->Visible = false;
				txt3->Visible = false;
			}
			if (rdP->Checked) {
				picBoxFormula->Load("..\\Debug\\img\\square\\P.jpg");
				lbl1->Text = "a :";
				lbl2->Visible = false;
				txt2->Visible = false;
				lbl3->Visible = false;
				txt3->Visible = false;
			}
		}
		void rectangle() {
			pictureBox1->Load("..\\Debug\\img\\rectangle\\rectangle.jpg");
			if (rdA->Checked) {
				picBoxFormula->Load("..\\Debug\\img\\rectangle\\A.jpg");
				lbl1->Text = "w :";
				lbl2->Text = "l :";
				lbl2->Visible = true;
				txt2->Visible = true;
				lbl3->Visible = false;
				txt3->Visible = false;
			}
			if (rdP->Checked) {
				picBoxFormula->Load("..\\Debug\\img\\rectangle\\P.jpg");
				lbl1->Text = "w :";
				lbl2->Text = "l :";
				lbl2->Visible = true;
				txt2->Visible = true;
				lbl3->Visible = false;
				txt3->Visible = false;
			}
		}
		void parallelogram() {
			pictureBox1->Load("..\\Debug\\img\\parallelogram\\parallelogram.jpg");
			if (rdA->Checked) {
				picBoxFormula->Load("..\\Debug\\img\\parallelogram\\A.jpg");
				lbl1->Text = "b :";
				lbl2->Text = "h :";
				lbl2->Visible = true;
				txt2->Visible = true;
				lbl3->Visible = false;
				txt3->Visible = false;
			}
			if (rdP->Checked) {
				picBoxFormula->Load("..\\Debug\\img\\parallelogram\\P.jpg");
				lbl1->Text = "a :";
				lbl2->Text = "b :";
				lbl2->Visible = true;
				txt2->Visible = true;
				lbl3->Visible = false;
				txt3->Visible = false;
			}
		}
		void circle() {
			pictureBox1->Load("..\\Debug\\img\\circle\\circle.jpg");
			rdP->Text = "Circumference";
			if (rdA->Checked) {
				picBoxFormula->Load("..\\Debug\\img\\circle\\A.jpg");
				lbl1->Text = "r :";
				lbl2->Visible = false;
				txt2->Visible = false;
				lbl3->Visible = false;
				txt3->Visible = false;
			}
			if (rdP->Checked) {
				picBoxFormula->Load("..\\Debug\\img\\circle\\Circumference.jpg");
				lbl1->Text = "r :";
				lbl2->Visible = false;
				txt2->Visible = false;
				lbl3->Visible = false;
				txt3->Visible = false;
			}
		}
		void pyramid() {
			PB3D->Load("..\\Debug\\img\\pyramid\\pyramid.jpg");
			if (rd3DV->Checked) {
				PBFormula3D->Load("..\\Debug\\img\\pyramid\\V.jpg");
				lbl3D1->Text = "l :";
				lbl3D1->Visible = true;
				txtBox3D1->Visible = true;

				lbl3D2->Text = "w :";
				lbl3D2->Visible = true;
				txtBox3D2->Visible = true;

				lbl3D3->Text = "h :";
				lbl3D3->Visible = true;
				txtBox3D3->Visible = true;
			}
			if (rd3DA->Checked) {
				PBFormula3D->Load("..\\Debug\\img\\pyramid\\A.jpg");
				lbl3D1->Text = "l :";
				lbl3D1->Visible = true;
				txtBox3D1->Visible = true;

				lbl3D2->Text = "w :";
				lbl3D2->Visible = true;
				txtBox3D2->Visible = true;

				lbl3D3->Text = "h :";
				lbl3D3->Visible = true;
				txtBox3D3->Visible = true;
			}
		}
		void cube() {
			PB3D->Load("..\\Debug\\img\\cube\\cube.jpg");
			if (rd3DV->Checked) {
				PBFormula3D->Load("..\\Debug\\img\\cube\\V.jpg");
				lbl3D1->Text = "a :";
				lbl3D1->Visible = true;
				txtBox3D1->Visible = true;

				lbl3D2->Visible = false;
				txtBox3D2->Visible = false;

				lbl3D3->Visible = false;
				txtBox3D3->Visible = false;
			}
			if (rd3DA->Checked) {
				PBFormula3D->Load("..\\Debug\\img\\cube\\A.jpg");
				lbl3D1->Text = "a :";
				lbl3D1->Visible = true;
				txtBox3D1->Visible = true;

				lbl3D2->Visible = false;
				txtBox3D2->Visible = false;

				lbl3D3->Visible = false;
				txtBox3D3->Visible = false;
			}
		}
		void cylinder() {
			PB3D->Load("..\\Debug\\img\\cylinder\\cylinder.jpg");
			if (rd3DV->Checked) {
				PBFormula3D->Load("..\\Debug\\img\\cylinder\\V.jpg");
				lbl3D1->Text = "r :";
				lbl3D1->Visible = true;
				txtBox3D1->Visible = true;

				lbl3D2->Text = "h :";
				lbl3D2->Visible = true;
				txtBox3D2->Visible = true;

				lbl3D3->Visible = false;
				txtBox3D3->Visible = true;
			}
			if (rd3DA->Checked) {
				PBFormula3D->Load("..\\Debug\\img\\cylinder\\A.jpg");
				lbl3D1->Text = "r :";
				lbl3D1->Visible = true;
				txtBox3D1->Visible = true;

				lbl3D2->Text = "h :";
				lbl3D2->Visible = true;
				txtBox3D2->Visible = true;

				lbl3D3->Visible = false;
				txtBox3D3->Visible = false;
			}
		}
		void sphere() {
			PB3D->Load("..\\Debug\\img\\sphere\\sphere.jpg");
			if (rd3DV->Checked) {
				PBFormula3D->Load("..\\Debug\\img\\sphere\\V.jpg");
				lbl3D1->Text = "r :";
				lbl3D1->Visible = true;
				txtBox3D1->Visible = true;

				lbl3D2->Text = "h :";
				lbl3D2->Visible = true;
				txtBox3D2->Visible = true;

				lbl3D3->Visible = false;
				txtBox3D3->Visible = false;
			}
			if (rd3DA->Checked) {
				PBFormula3D->Load("..\\Debug\\img\\sphere\\A.jpg");
				lbl3D1->Text = "r :";
				lbl3D1->Visible = true;
				txtBox3D1->Visible = true;

				lbl3D2->Text = "h :";
				lbl3D2->Visible = true;
				txtBox3D2->Visible = true;

				lbl3D3->Visible = false;
				txtBox3D3->Visible = false;
			}
		}
#pragma endregion

	private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		clickedNumber(1);
	}
	private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
		clickedNumber(2);
	}
	private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
		clickedNumber(3);
	}
	private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
		clickedNumber(4);
	}
	private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
		clickedNumber(5);
	}
	private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
		clickedNumber(6);
	}
	private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
		clickedNumber(7);
	}
	private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
		clickedNumber(8);
	}
	private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
		clickedNumber(9);
	}
	private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
		clickedNumber(0);
	}
	private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxString = textBoxString + ".";
		updateText();
	}
	private: System::Void btnAC_Click(System::Object^ sender, System::EventArgs^ e) {
		savedNum = 0;
		textBoxString = "0";
		txtBox->Text = "0";
		currentMode = 0;
		lastButtonWasMode = false;
	}

	private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {
		double num = Convert::ToDouble(textBoxString);
		if (currentMode == 0 || lastButtonWasMode) {
			return;
		}
		if (currentMode == '+') {
			savedNum += num;
		}
		else if (currentMode == '-') {
			savedNum -= num;
		}
		else if (currentMode == 'x') {
			savedNum *= num;
		}
		else if (currentMode == '/') {
			savedNum /= num;
		}
		currentMode = 0;
		textBoxString = Convert::ToString(savedNum);
		updateText();
		lastButtonWasMode = true;
	}
	private: System::Void btnPrime_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isPrime(Convert::ToInt64(txtPrime->Text))) {
			lblPrime->ForeColor = System::Drawing::Color::Green;
			lblPrime->Text = "Prime!";
		}
		else {
			lblPrime->ForeColor = System::Drawing::Color::Red;
			lblPrime->Text = "NOT Prime!";
		}
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		equal();
		changemode('+');
	}
	private: System::Void btnSubtract_Click(System::Object^ sender, System::EventArgs^ e) {
		equal();
		changemode('-');
	}
	private: System::Void btnMultiple_Click(System::Object^ sender, System::EventArgs^ e) {
		equal();
		changemode('x');
	}
	private: System::Void btnDivision_Click(System::Object^ sender, System::EventArgs^ e) {
		equal();
		changemode('/');
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double A = Convert::ToDouble(txtA->Text);
		double B = Convert::ToDouble(txtB->Text);
		double C = Convert::ToDouble(txtC->Text);
		double delta = (B*B) - (4 * A*C);
		if (delta < 0) {
			lblRoots->Text = "the equation does not have any root";
		}
		else if (delta == 0) {
			double X = -B / (2 * A);
			lblRoots->Text = "X1 = X2 = " + X;
		}
		else {
			double rad = sqrt(delta);
			double X1 = (-B - sqrt(delta)) / 2 * A;
			double X2 = (-B + sqrt(delta)) / 2 * A;
			lblRoots->Text = "X1 = " + X1 + "\nX2= " + X2;
		}
	}
	private: System::Void cmbShape_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e) {
		loadImage();
	}
	private: System::Void rdP_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		loadImage();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (cmbShape->SelectedIndex) {
		case 0:
			if (rdA->Checked) {
				double A = Convert::ToDouble(txt1->Text) * Convert::ToDouble(txt2->Text) / 2;
				A = Math::Round(A, 2);
				lblResult->Text = Convert::ToString(A);
			}
			if (rdP->Checked) {
				double P = Convert::ToDouble(txt1->Text) + Convert::ToDouble(txt2->Text) + Convert::ToDouble((txt3->Text));
				P = Math::Round(P, 2);
				lblResult->Text = Convert::ToString(P);
			}
			break;
		case 1:
			if (rdA->Checked) {
				double A = Convert::ToDouble(txt1->Text) * Convert::ToDouble(txt2->Text);
				A = Math::Round(A, 2);
				lblResult->Text = Convert::ToString(A);
			}
			if (rdP->Checked) {
				double P = (Convert::ToDouble(txt1->Text) + Convert::ToDouble(txt2->Text)) * 2;
				P = Math::Round(P, 2);
				lblResult->Text = Convert::ToString(P);
			}
			break;
		case 2:
			if (rdA->Checked) {
				double A = Convert::ToDouble(txt1->Text) * Convert::ToDouble(txt1->Text);
				A = Math::Round(A, 2);
				lblResult->Text = Convert::ToString(A);
			}
			if (rdP->Checked) {
				double P = 4 * Convert::ToDouble(txt1->Text);
				P = Math::Round(P, 2);
				lblResult->Text = Convert::ToString(P);
			}
			break;
		case 3:
			if (rdA->Checked) {
				double A = Convert::ToDouble(txt1->Text) * Convert::ToDouble(txt2->Text);
				A = Math::Round(A, 2);
				lblResult->Text = Convert::ToString(A);
			}
			if (rdP->Checked) {
				double P = (Convert::ToDouble(txt1->Text) + Convert::ToDouble(txt2->Text)) * 2;
				P = Math::Round(P, 2);
				lblResult->Text = Convert::ToString(P);
			}
			break;
		case 4:
			if (rdA->Checked) {
				double A = Convert::ToDouble(txt1->Text)*Convert::ToDouble(txt1->Text)* Math::PI;
				A = Math::Round(A, 2);
				lblResult->Text = Convert::ToString(A);
			}
			if (rdP->Checked) {
				double P = 2 * Convert::ToDouble(txt1->Text)* Math::PI;
				P = Math::Round(P, 2);
				lblResult->Text = Convert::ToString(P);
			}
			break;
		}
	}
	private: System::Void resultBtn3D_Click(System::Object^  sender, System::EventArgs^  e) {
		switch (comboBox3D->SelectedIndex) {
		case 0://pyramid
			if (rd3DV->Checked) {
				double V = Convert::ToDouble(txtBox3D1->Text) * Convert::ToDouble(txtBox3D2->Text) * Convert::ToDouble(txtBox3D3->Text) /3;
				V = Math::Round(V, 2);
				lbl3DResult->Text = Convert::ToString(V);
			}
			if (rd3DA->Checked) {
				double l = Convert::ToDouble(txtBox3D1->Text);
				double w = Convert::ToDouble(txtBox3D2->Text);
				double h = Convert::ToDouble(txtBox3D3->Text);
				double A = l*w + (l*sqrt((w*w / 4) + h*h)) + (w*sqrt((l*l / 4) + h*h));
				A = Math::Round(A, 2);
				lbl3DResult->Text = Convert::ToString(A);
			}
			break;
		case 1://cube
			if (rd3DV->Checked) {
				double V = Convert::ToDouble(txtBox3D1->Text)* Convert::ToDouble(txtBox3D1->Text)* Convert::ToDouble(txtBox3D1->Text);
				V = Math::Round(V, 2);
				lbl3DResult->Text = Convert::ToString(V);
			}
			if (rd3DA->Checked) {
				double A = 6* Convert::ToDouble(txtBox3D1->Text)* Convert::ToDouble(txtBox3D1->Text);
				A = Math::Round(A, 2);
				lbl3DResult->Text = Convert::ToString(A);
			}
			break;
		case 2://cylinder
			if (rd3DV->Checked) {
				double V = Convert::ToDouble(txtBox3D1->Text)*Convert::ToDouble(txtBox3D1->Text) * Convert::ToDouble(txtBox3D2->Text)* Math::PI;
				V = Math::Round(V, 2);
				lbl3DResult->Text = Convert::ToString(V);
			}
			if (rd3DA->Checked) {
				double r = Convert::ToDouble(txtBox3D1->Text);
				double h = Convert::ToDouble(txtBox3D2->Text);
				double A = 2 * Math::PI *r* (h + r);
				A = Math::Round(A, 2);
				lbl3DResult->Text = Convert::ToString(A);
			}
			break;
		case 3://sphere
			if (rd3DV->Checked) {
				double r = Convert::ToDouble(txtBox3D1->Text);
				double h = Convert::ToDouble(txtBox3D2->Text);
				double V = 4 * Math::PI *r* r*r /3;
				V = Math::Round(V, 2);
				lbl3DResult->Text = Convert::ToString(V);
			}
			if (rd3DA->Checked) {
				double r = Convert::ToDouble(txtBox3D1->Text);
				double h = Convert::ToDouble(txtBox3D2->Text);
				double A = 4 * Math::PI *r* r;
				A = Math::Round(A, 2);
				lbl3DResult->Text = Convert::ToString(A);
			}
			break;
		
		}
	}
private: System::Void comboBox3D_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	loadImage3D();
}
private: System::Void rd3DV_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	loadImage3D();
}
};
}
