#pragma once
#include <ctime>
#include <Windows.h>
#include <gdiplus.h>
#include <conio.h>
#pragma comment(lib, "gdiplus.lib")

namespace kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	bool cyfra= true;
	/// <summary>
	/// Podsumowanie informacji o Plansza
	/// </summary>
	public ref class Plansza : public System::Windows::Forms::Form
	{


		
		
	public:
		Plansza(void)
		{
			InitializeComponent();
			//
			// Zapisz pocz¹tkowy rozmiar formularza
			
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Plansza()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ przypnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ okienkoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wybórSkórkiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zielonaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ czerwonaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ trybZegaraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cyfrowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ analogowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ analogowyPictureBox;
	private: System::Windows::Forms::TextBox^ oknowynik;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::ToolStripMenuItem^ autorzyProjektuToolStripMenuItem;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przypnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->okienkoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wybórSkórkiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zielonaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->czerwonaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autorzyProjektuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trybZegaraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cyfrowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->analogowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->analogowyPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->oknowynik = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->analogowyPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->plikToolStripMenuItem,
					this->widokToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(479, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->przypnijToolStripMenuItem,
					this->okienkoToolStripMenuItem, this->zamknijToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(55, 29);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// przypnijToolStripMenuItem
			// 
			this->przypnijToolStripMenuItem->Name = L"przypnijToolStripMenuItem";
			this->przypnijToolStripMenuItem->Size = System::Drawing::Size(177, 34);
			this->przypnijToolStripMenuItem->Text = L"Przypnij";
			this->przypnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::przypnijToolStripMenuItem_Click);
			// 
			// okienkoToolStripMenuItem
			// 
			this->okienkoToolStripMenuItem->Name = L"okienkoToolStripMenuItem";
			this->okienkoToolStripMenuItem->Size = System::Drawing::Size(177, 34);
			this->okienkoToolStripMenuItem->Text = L"Odepnij";
			this->okienkoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::okienkoToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(177, 34);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::zamknijToolStripMenuItem_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->wybórSkórkiToolStripMenuItem,
					this->trybZegaraToolStripMenuItem
			});
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(80, 29);
			this->widokToolStripMenuItem->Text = L"Widok";
			this->widokToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::widokToolStripMenuItem_Click);
			// 
			// wybórSkórkiToolStripMenuItem
			// 
			this->wybórSkórkiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->zielonaToolStripMenuItem,
					this->czerwonaToolStripMenuItem, this->toolStripMenuItem1, this->toolStripMenuItem2, this->autorzyProjektuToolStripMenuItem
			});
			this->wybórSkórkiToolStripMenuItem->Name = L"wybórSkórkiToolStripMenuItem";
			this->wybórSkórkiToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->wybórSkórkiToolStripMenuItem->Text = L"Wybór skórki";
			// 
			// zielonaToolStripMenuItem
			// 
			this->zielonaToolStripMenuItem->Name = L"zielonaToolStripMenuItem";
			this->zielonaToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->zielonaToolStripMenuItem->Text = L"Zielona";
			this->zielonaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::zielonaToolStripMenuItem_Click);
			// 
			// czerwonaToolStripMenuItem
			// 
			this->czerwonaToolStripMenuItem->Name = L"czerwonaToolStripMenuItem";
			this->czerwonaToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->czerwonaToolStripMenuItem->Text = L"Czerwona";
			this->czerwonaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::czerwonaToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(270, 34);
			this->toolStripMenuItem1->Text = L"Niebieska";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Plansza::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(270, 34);
			this->toolStripMenuItem2->Text = L"Brzoskwiniowa";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Plansza::toolStripMenuItem2_Click);
			// 
			// autorzyProjektuToolStripMenuItem
			// 
			this->autorzyProjektuToolStripMenuItem->Name = L"autorzyProjektuToolStripMenuItem";
			this->autorzyProjektuToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->autorzyProjektuToolStripMenuItem->Text = L"Autorzy projektu";
			this->autorzyProjektuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::autorzyProjektuToolStripMenuItem_Click);
			// 
			// trybZegaraToolStripMenuItem
			// 
			this->trybZegaraToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->cyfrowyToolStripMenuItem,
					this->analogowyToolStripMenuItem
			});
			this->trybZegaraToolStripMenuItem->Name = L"trybZegaraToolStripMenuItem";
			this->trybZegaraToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->trybZegaraToolStripMenuItem->Text = L"Tryb zegara";
			// 
			// cyfrowyToolStripMenuItem
			// 
			this->cyfrowyToolStripMenuItem->Name = L"cyfrowyToolStripMenuItem";
			this->cyfrowyToolStripMenuItem->Size = System::Drawing::Size(204, 34);
			this->cyfrowyToolStripMenuItem->Text = L"Cyfrowy";
			this->cyfrowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::cyfrowyToolStripMenuItem_Click);
			// 
			// analogowyToolStripMenuItem
			// 
			this->analogowyToolStripMenuItem->Name = L"analogowyToolStripMenuItem";
			this->analogowyToolStripMenuItem->Size = System::Drawing::Size(204, 34);
			this->analogowyToolStripMenuItem->Text = L"Analogowy";
			this->analogowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Plansza::analogowyToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(285, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 46);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &Plansza::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Plansza::timer1_Tick);
			// 
			// analogowyPictureBox
			// 
			this->analogowyPictureBox->BackColor = System::Drawing::Color::Transparent;
			this->analogowyPictureBox->Location = System::Drawing::Point(264, 44);
			this->analogowyPictureBox->Name = L"analogowyPictureBox";
			this->analogowyPictureBox->Size = System::Drawing::Size(215, 193);
			this->analogowyPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->analogowyPictureBox->TabIndex = 2;
			this->analogowyPictureBox->TabStop = false;
			this->analogowyPictureBox->Click += gcnew System::EventHandler(this, &Plansza::analogowyPictureBox_Click);
			// 
			// oknowynik
			// 
			this->oknowynik->BackColor = System::Drawing::Color::DarkGray;
			this->oknowynik->Font = (gcnew System::Drawing::Font(L"MS Gothic", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->oknowynik->Location = System::Drawing::Point(0, 168);
			this->oknowynik->MaxLength = 100;
			this->oknowynik->Name = L"oknowynik";
			this->oknowynik->Size = System::Drawing::Size(262, 67);
			this->oknowynik->TabIndex = 3;
			this->oknowynik->Text = L"0";
			this->oknowynik->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->oknowynik->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Plansza::enter);
			this->oknowynik->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Plansza::klawiatura);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(8, 461);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 70);
			this->button1->TabIndex = 4;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Plansza::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(79, 461);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 70);
			this->button2->TabIndex = 5;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Plansza::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(150, 461);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 70);
			this->button3->TabIndex = 6;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Plansza::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(150, 390);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 70);
			this->button4->TabIndex = 9;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Plansza::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(79, 390);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(70, 70);
			this->button5->TabIndex = 8;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Plansza::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(8, 390);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 70);
			this->button6->TabIndex = 7;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Plansza::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(150, 319);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(70, 70);
			this->button7->TabIndex = 12;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Plansza::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(79, 319);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 70);
			this->button8->TabIndex = 11;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Plansza::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(8, 319);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(70, 70);
			this->button9->TabIndex = 10;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Plansza::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(8, 533);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(141, 70);
			this->button10->TabIndex = 13;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Plansza::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(150, 533);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(70, 70);
			this->button11->TabIndex = 14;
			this->button11->Text = L",";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Plansza::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(222, 461);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(70, 143);
			this->button12->TabIndex = 15;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Plansza::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(294, 461);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(70, 143);
			this->button13->TabIndex = 16;
			this->button13->Text = L"=";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Plansza::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(294, 390);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(70, 70);
			this->button14->TabIndex = 18;
			this->button14->Text = L"%";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Plansza::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->Location = System::Drawing::Point(222, 390);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(70, 70);
			this->button15->TabIndex = 17;
			this->button15->Text = L"x";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Plansza::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->Location = System::Drawing::Point(294, 319);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(70, 70);
			this->button16->TabIndex = 20;
			this->button16->Text = L"x^2";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Plansza::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->Location = System::Drawing::Point(222, 319);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(70, 70);
			this->button17->TabIndex = 19;
			this->button17->Text = L"-";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Plansza::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->Location = System::Drawing::Point(294, 247);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(70, 70);
			this->button18->TabIndex = 23;
			this->button18->Text = L"sqrt";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Plansza::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->Location = System::Drawing::Point(222, 247);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(70, 70);
			this->button19->TabIndex = 22;
			this->button19->Text = L"/";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Plansza::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->Location = System::Drawing::Point(150, 247);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(70, 70);
			this->button20->TabIndex = 21;
			this->button20->Text = L"CE";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Plansza::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->Location = System::Drawing::Point(8, 247);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(141, 70);
			this->button21->TabIndex = 24;
			this->button21->Text = L"C";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Plansza::button21_Click);
			// 
			// Plansza
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(479, 619);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->oknowynik);
			this->Controls->Add(this->analogowyPictureBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Plansza";
			this->Text = L"Kalkulator";
			this->Load += gcnew System::EventHandler(this, &Plansza::Plansza_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->analogowyPictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		double pierwsza, druga, wynik;
		char dzialanie;
		bool status = false;
		bool czyjestop = false;





		private: Void Wypisz(String^ liczba) {
			if (oknowynik->Text == "0"|| status) {
				oknowynik->Text = liczba;
			}
			else {
				oknowynik->Text += liczba;
			}
			status = false;
		}



	private: System::Void Plansza_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
	}

	private: System::Void zielonaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = System::Drawing::Color::ForestGreen;
		this->BackgroundImage = nullptr;
		this->ClientSize = System::Drawing::Size(320, 400);
	
		
	}

private: System::Void czerwonaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = System::Drawing::Color::IndianRed;
	this->BackgroundImage = nullptr;
	this->ClientSize = System::Drawing::Size(320,400);
	
}

private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = System::Drawing::Color::RoyalBlue;
	this->BackgroundImage = nullptr;
	this->ClientSize = System::Drawing::Size(320, 400);

}

private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = System::Drawing::Color::PeachPuff;
	this->BackgroundImage = nullptr;
	this->ClientSize = System::Drawing::Size(320, 400);

}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
	   
private: System::Void rysujZegar2D() {
	// Utwórz obiekt Bitmap, który bêdzie t³em tarczy zegara
	Bitmap^ tarcza = gcnew Bitmap(analogowyPictureBox->Width, analogowyPictureBox->Height);

	// Utwórz obiekt Graphics do rysowania na tarczy zegara
	Graphics^ g = Graphics::FromImage(tarcza);

	// Wyczyœæ tarczê zegara (mo¿esz ustawiæ dowolny kolor t³a)
	g->Clear(Color::White);




	// Pobierz aktualny czas
	DateTime currentTime = DateTime::Now;
	int hour = currentTime.Hour;
	int minute = currentTime.Minute;
	int second = currentTime.Second;

	// Rozmiar i pozycja œrodka tarczy zegara
	int centerX = tarcza->Width / 2;
	int centerY = tarcza->Height / 2;

	// Oblicz k¹ty wskazówek
	float secondAngle = second * 6.0f; // 360° / 60 sekund = 6° na sekundê
	float minuteAngle = (minute * 6.0f) + (secondAngle / 60.0f); // 360° / 60 minut = 6° na minutê
	float hourAngle = (hour * 30.0f) + (minuteAngle / 12.0f); // 360° / 12 godzin = 30° na godzinê


	

	// Narysuj tarczê zegara (np. ko³o)
	Pen^ tarczaPen = gcnew Pen(Color::Black, 2.0f);
	g->DrawEllipse(tarczaPen, 10, 10, tarcza->Width - 20, tarcza->Height - 20);

	// Dodaj cyfry godzin na tarczy zegara
		System::Drawing::Font ^ font = gcnew System::Drawing::Font("Arial", 12);
	SolidBrush^ brush = gcnew SolidBrush(Color::Black);

	for (int godzina = 1; godzina <= 12; godzina++) {
		float kat = (godzina - 3) * 30.0f; // Obróæ cyfry na tarczy
		float radians = kat * (float)Math::PI / 180;

		// Oblicz pozycjê cyfry
		int x = (int)(centerX - 7.5  + 0.7 * centerX * Math::Cos(radians));
		int y = (int)(centerY -6 + 0.7 * centerY * Math::Sin(radians));

		// Narysuj cyfrê godziny
		g->DrawString(godzina.ToString(), font, brush, x, y);
	}

	// Narysuj wskazówki na tarczy zegara
	Pen^ wskazowkaSekund = gcnew Pen(Color::Red, 2.0f);
	Pen^ wskazowkaMinut = gcnew Pen(Color::Blue, 3.0f);
	Pen^ wskazowkaGodzin = gcnew Pen(Color::Green, 4.0f);

	DrawHand(g, centerX, centerY, 48, secondAngle, wskazowkaSekund);
	DrawHand(g, centerX, centerY, 43, minuteAngle, wskazowkaMinut);
	DrawHand(g, centerX, centerY, 25, hourAngle, wskazowkaGodzin);

	
	// Wyœwietl tarczê zegara na kontrolce PictureBox
	analogowyPictureBox->Image = tarcza;
}

private: System::Void DrawHand(Graphics^ g, int x, int y, int length, float angle, Pen^ pen) {
	float radians = (angle - 90) * (float)Math::PI / 180;
	float x2 = x + length * (float)Math::Cos(radians);
	float y2 = y + length * (float)Math::Sin(radians);

	Point start(x, y);
	Point end(static_cast<int>(x2), static_cast<int>(y2));

	g->DrawLine(pen, start, end);
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (cyfra == true) {
		label1->Text = System::DateTime::Now.ToString("HH:mm:ss");
	}
	else {
		rysujZegar2D();

	}

	
}
private: System::Void cyfrowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	cyfra = true;
	label1->Visible = true;
	analogowyPictureBox->Visible = false;
}
private: System::Void analogowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	cyfra = false;
	label1->Visible = false;
	analogowyPictureBox->Visible = true;
}
private: System::Void analogowyPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void przypnijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Plansza::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	TopMost = true;


}
private: System::Void okienkoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Plansza::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;


}
	private: System::Void zamknijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Czy wy³¹czyæ kalkulator?", "Kalkulator", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("1");
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("0");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("2");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("3");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("4");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("5");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("6");
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("7");
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("8");
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("9");
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz(",");
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(oknowynik->Text);
	dzialanie = '+';
	status = true;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(oknowynik->Text);
	dzialanie = '*';
	status = true;
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(oknowynik->Text);
	dzialanie = '-';
	status = true;
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(oknowynik->Text);
	dzialanie = '/';
	status = true;
}

	private: System::Void ObliczWynik() {
		druga = Convert::ToDouble(oknowynik->Text);




		switch (dzialanie) {

		case '+':
			//
			//
			wynik = pierwsza + druga;
			this->oknowynik->Text = Convert::ToString(wynik);
			//
			//
			break;

		case '-':

			wynik = pierwsza - druga;
			this->oknowynik->Text = Convert::ToString(wynik);

			break;

		case '*':

			wynik = pierwsza * druga;
			this->oknowynik->Text = Convert::ToString(wynik);

			break;

		case '/':

			if (druga != 0) {
				wynik = pierwsza / druga;
			}
			else {
				if (MessageBox::Show("Nie mo¿na dzieliæ przez zero!", "Kto cie uczy³ matematyki?", MessageBoxButtons::RetryCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Cancel) {
					Application::Exit();
				}
			}
			this->oknowynik->Text = Convert::ToString(wynik);

			break;


		case '%':
			wynik = pierwsza * (druga / 100);
			this->oknowynik->Text = Convert::ToString(wynik);
			break;

		default:
			break;

		}
		pierwsza = wynik;
		status = true;

	}

private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	ObliczWynik();
	

}

private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oknowynik->Text = "0";
	pierwsza,druga = 0;
	status = false;
	

}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oknowynik->Text = "0";
}
	
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(oknowynik->Text);
	wynik = Math::Sqrt(pierwsza);
	this->oknowynik->Text = Convert::ToString(wynik);
	status = true;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(oknowynik->Text);
	wynik = Math::Pow(pierwsza,2);
	this->oknowynik->Text = Convert::ToString(wynik);
	status = true;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(oknowynik->Text);
	status = true;
	dzialanie = '%';
	this->oknowynik->Text = Convert::ToString(wynik);
}
private: System::Void widokToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   
private: System::Void autorzyProjektuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	Image^ obraz = Image::FromFile("autorzyprojektu.jpg");

	this->Size = obraz->Size;

	this->BackgroundImage = obraz;

	this->BackgroundImageLayout = ImageLayout::Stretch;


}
private: System::Void oknowynik_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}





private: System::Void enter(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) {
		ObliczWynik();

	
	}
	else if (e->KeyCode == Keys::Back) {
		this->oknowynik->Text = " ";
	
	}



	
}

	   //obsluga klawiatury

private: System::Void klawiatura(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (Char::IsDigit(e->KeyChar)) {
		if (czyjestop == false) {
			Wypisz(e->KeyChar.ToString());
			pierwsza = Convert::ToDouble(oknowynik->Text);
		}
		else{
					Wypisz(e->KeyChar.ToString());
		}
	}
		else if (e->KeyChar == '+' || e->KeyChar == '-' || e->KeyChar == '*' || e->KeyChar == '/' || e->KeyChar == '%') {
		// Jeœli wprowadzony znak to operator (+ lub -), zapisz go i wyczyœæ kontrolkê
		dzialanie = e->KeyChar;
		Wypisz(e->KeyChar.ToString());
		oknowynik->Text = " ";
		czyjestop = true;
	}
	e->Handled = true;
}


};
}



























