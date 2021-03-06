#pragma once

namespace WindowsFormApplication1 {

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  EtykietaPoleKoncowe;
	private: System::Windows::Forms::Label^  Etykieta_Dane;


	private: Form^ tytul;
	private:		 Timer^ timer1;
	private: System::Windows::Forms::Label^  label_div_question;
	private: System::Windows::Forms::GroupBox^  groupDywizja;
	private: System::Windows::Forms::RadioButton^  radioSilver;
	private: System::Windows::Forms::RadioButton^  radioGold;
	private: System::Windows::Forms::RadioButton^  radioPlat;
	private: System::Windows::Forms::GroupBox^  groupOcena;
	private: System::Windows::Forms::RadioButton^  radioDecent;
	private: System::Windows::Forms::RadioButton^  radioFeed;
	private: System::Windows::Forms::RadioButton^  radioCarry;
	private: System::Windows::Forms::Label^  labelOcena;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->EtykietaPoleKoncowe = (gcnew System::Windows::Forms::Label());
			this->Etykieta_Dane = (gcnew System::Windows::Forms::Label());
			this->label_div_question = (gcnew System::Windows::Forms::Label());
			this->groupDywizja = (gcnew System::Windows::Forms::GroupBox());
			this->radioSilver = (gcnew System::Windows::Forms::RadioButton());
			this->radioGold = (gcnew System::Windows::Forms::RadioButton());
			this->radioPlat = (gcnew System::Windows::Forms::RadioButton());
			this->groupOcena = (gcnew System::Windows::Forms::GroupBox());
			this->radioDecent = (gcnew System::Windows::Forms::RadioButton());
			this->radioFeed = (gcnew System::Windows::Forms::RadioButton());
			this->radioCarry = (gcnew System::Windows::Forms::RadioButton());
			this->labelOcena = (gcnew System::Windows::Forms::Label());
			this->groupDywizja->SuspendLayout();
			this->groupOcena->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Otw�rz okno";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// EtykietaPoleKoncowe
			// 
			this->EtykietaPoleKoncowe->AutoSize = true;
			this->EtykietaPoleKoncowe->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->EtykietaPoleKoncowe->Location = System::Drawing::Point(294, 307);
			this->EtykietaPoleKoncowe->MinimumSize = System::Drawing::Size(300, 70);
			this->EtykietaPoleKoncowe->Name = L"EtykietaPoleKoncowe";
			this->EtykietaPoleKoncowe->Size = System::Drawing::Size(300, 70);
			this->EtykietaPoleKoncowe->TabIndex = 1;
			// 
			// Etykieta_Dane
			// 
			this->Etykieta_Dane->AutoSize = true;
			this->Etykieta_Dane->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Etykieta_Dane->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->Etykieta_Dane->Location = System::Drawing::Point(294, 66);
			this->Etykieta_Dane->MinimumSize = System::Drawing::Size(300, 200);
			this->Etykieta_Dane->Name = L"Etykieta_Dane";
			this->Etykieta_Dane->Size = System::Drawing::Size(300, 200);
			this->Etykieta_Dane->TabIndex = 2;
			// 
			// label_div_question
			// 
			this->label_div_question->AutoSize = true;
			this->label_div_question->Location = System::Drawing::Point(12, 37);
			this->label_div_question->Name = L"label_div_question";
			this->label_div_question->Size = System::Drawing::Size(116, 13);
			this->label_div_question->TabIndex = 3;
			this->label_div_question->Text = L"W kt�rej dywizji jeste�\?";
			// 
			// groupDywizja
			// 
			this->groupDywizja->Controls->Add(this->radioSilver);
			this->groupDywizja->Controls->Add(this->radioGold);
			this->groupDywizja->Controls->Add(this->radioPlat);
			this->groupDywizja->Location = System::Drawing::Point(22, 66);
			this->groupDywizja->Name = L"groupDywizja";
			this->groupDywizja->Size = System::Drawing::Size(125, 103);
			this->groupDywizja->TabIndex = 4;
			this->groupDywizja->TabStop = false;
			this->groupDywizja->Text = L"Dywizja";
			// 
			// radioSilver
			// 
			this->radioSilver->AutoSize = true;
			this->radioSilver->Location = System::Drawing::Point(7, 68);
			this->radioSilver->Name = L"radioSilver";
			this->radioSilver->Size = System::Drawing::Size(56, 17);
			this->radioSilver->TabIndex = 2;
			this->radioSilver->TabStop = true;
			this->radioSilver->Text = L"Srebro";
			this->radioSilver->UseVisualStyleBackColor = true;
			// 
			// radioGold
			// 
			this->radioGold->AutoSize = true;
			this->radioGold->Location = System::Drawing::Point(7, 44);
			this->radioGold->Name = L"radioGold";
			this->radioGold->Size = System::Drawing::Size(47, 17);
			this->radioGold->TabIndex = 1;
			this->radioGold->TabStop = true;
			this->radioGold->Text = L"Gold";
			this->radioGold->UseVisualStyleBackColor = true;
			// 
			// radioPlat
			// 
			this->radioPlat->AutoSize = true;
			this->radioPlat->Location = System::Drawing::Point(7, 20);
			this->radioPlat->Name = L"radioPlat";
			this->radioPlat->Size = System::Drawing::Size(60, 17);
			this->radioPlat->TabIndex = 0;
			this->radioPlat->TabStop = true;
			this->radioPlat->Text = L"Platyna";
			this->radioPlat->UseVisualStyleBackColor = true;
			// 
			// groupOcena
			// 
			this->groupOcena->Controls->Add(this->radioDecent);
			this->groupOcena->Controls->Add(this->radioFeed);
			this->groupOcena->Controls->Add(this->radioCarry);
			this->groupOcena->Location = System::Drawing::Point(22, 216);
			this->groupOcena->Name = L"groupOcena";
			this->groupOcena->Size = System::Drawing::Size(125, 95);
			this->groupOcena->TabIndex = 5;
			this->groupOcena->TabStop = false;
			this->groupOcena->Text = L"Ocena";
			// 
			// radioDecent
			// 
			this->radioDecent->AutoSize = true;
			this->radioDecent->Location = System::Drawing::Point(7, 44);
			this->radioDecent->Name = L"radioDecent";
			this->radioDecent->Size = System::Drawing::Size(110, 17);
			this->radioDecent->TabIndex = 2;
			this->radioDecent->TabStop = true;
			this->radioDecent->Text = L"Posz�o mi zno�nie";
			this->radioDecent->UseVisualStyleBackColor = true;
			// 
			// radioFeed
			// 
			this->radioFeed->AutoSize = true;
			this->radioFeed->Location = System::Drawing::Point(7, 67);
			this->radioFeed->Name = L"radioFeed";
			this->radioFeed->Size = System::Drawing::Size(87, 17);
			this->radioFeed->TabIndex = 1;
			this->radioFeed->TabStop = true;
			this->radioFeed->Text = L"Feedowa�em";
			this->radioFeed->UseVisualStyleBackColor = true;
			// 
			// radioCarry
			// 
			this->radioCarry->AutoSize = true;
			this->radioCarry->Location = System::Drawing::Point(7, 20);
			this->radioCarry->Name = L"radioCarry";
			this->radioCarry->Size = System::Drawing::Size(82, 17);
			this->radioCarry->TabIndex = 0;
			this->radioCarry->TabStop = true;
			this->radioCarry->Text = L"Carrowa�em";
			this->radioCarry->UseVisualStyleBackColor = true;
			// 
			// labelOcena
			// 
			this->labelOcena->AutoSize = true;
			this->labelOcena->Location = System::Drawing::Point(22, 185);
			this->labelOcena->Name = L"labelOcena";
			this->labelOcena->Size = System::Drawing::Size(121, 13);
			this->labelOcena->TabIndex = 6;
			this->labelOcena->Text = L"Jak oceniasz ten mecz\?";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(642, 400);
			this->Controls->Add(this->labelOcena);
			this->Controls->Add(this->groupOcena);
			this->Controls->Add(this->groupDywizja);
			this->Controls->Add(this->label_div_question);
			this->Controls->Add(this->Etykieta_Dane);
			this->Controls->Add(this->EtykietaPoleKoncowe);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Check Yours Skills";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupDywizja->ResumeLayout(false);
			this->groupDywizja->PerformLayout();
			this->groupOcena->ResumeLayout(false);
			this->groupOcena->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form^ okno = gcnew Form();
				 okno->Text = "Formularz";
				 okno->Width = 500;
				 Rectangle ekran = System::Windows::Forms::Screen::GetBounds(okno);
				 okno->Top = (ekran.Height / 2) - (okno->Height / 2);
				 //cs
				 Label^ Etykieta_cs = gcnew Label();
				 Etykieta_cs->Location = Point(10, 10);
				 Etykieta_cs->Width = 200;
				 Etykieta_cs->Text = "Ilos� zabitych minionk�w";
				 okno->Controls->Add(Etykieta_cs);

				 TextBox^ Pole_cs = gcnew TextBox();
				 Pole_cs->Location = Point(10, 30);
				 Pole_cs->Width = 200;
				 okno->Controls->Add(Pole_cs);
				 
				 //Statystyki
				 Label^ Etykieta_staty = gcnew Label();
				 Etykieta_staty->Location = Point(10, 50);
				 Etykieta_staty->Width = 200;
				 Etykieta_staty->Text = "Statystyki podczas rozgrywki";
				 okno->Controls->Add(Etykieta_staty);

				 MaskedTextBox^ Pole_staty = gcnew MaskedTextBox();
				 Pole_staty->Location = Point(10, 70);
				 Pole_staty->Width = 200;
				 Pole_staty->Mask = "00/00/00";
				 okno->Controls->Add(Pole_staty);

				 MaskedTextBox^ Otrzymany_dmg = gcnew MaskedTextBox();
				 Otrzymany_dmg->Location = Point(250, 30);
				 Otrzymany_dmg->Width = 200;
				 Otrzymany_dmg->Mask = "00000000";
				 okno->Controls->Add(Otrzymany_dmg);

				 MaskedTextBox^ Zadany_dmg = gcnew MaskedTextBox();
				 Zadany_dmg->Location = Point(250, 70);
				 Zadany_dmg->Width = 200;
				 Zadany_dmg->Mask = "00000000";
				 okno->Controls->Add(Zadany_dmg);
//        Drugi rz�d
				 Label^ Etykieta_zadany = gcnew Label();
				 Etykieta_zadany->Location = Point(250, 10);
				 Etykieta_zadany->Width = 200;
				 Etykieta_zadany->Text = "Zadane obra�enia";
				 okno->Controls->Add(Etykieta_zadany);

				 Label^ Etykieta_otrzymany = gcnew Label();
				 Etykieta_otrzymany->Location = Point(250, 50);
				 Etykieta_otrzymany->Width = 200;
				 Etykieta_otrzymany->Text = "Otrzymane obra�enia";
				 okno->Controls->Add(Etykieta_otrzymany);

				 MaskedTextBox^ Czas_gry = gcnew MaskedTextBox();
				 Czas_gry->Location = Point(250, 120);
				 Czas_gry->Width = 200;
				 Czas_gry->Mask = "000";
				 okno->Controls->Add(Czas_gry);
				 //        Drugi rz�d
				 Label^ Etykieta_czas_gry = gcnew Label();
				 Etykieta_czas_gry->Location = Point(250, 100);
				 Etykieta_czas_gry->Width = 200;
				 Etykieta_czas_gry->Text = "Czas gry";
				 okno->Controls->Add(Etykieta_czas_gry);

				 CheckBox^ Do_okienka = gcnew CheckBox();
				 Do_okienka->Location = Point(10, 90);
				 Do_okienka->Text = "Dosta�e� Pierwsz� Krew?";
				 Do_okienka->Width = 200;
				 okno->Controls->Add(Do_okienka);

				 GroupBox^ Grupa_rola = gcnew GroupBox();
				 Grupa_rola->Location = Point(10, 120);
				 Grupa_rola->Width = 100;
				 Grupa_rola->Height = 100;
				 Grupa_rola->Text = "Rola";
				 okno->Controls->Add(Grupa_rola);


				 RadioButton^ Radio_mid = gcnew RadioButton();
				 Radio_mid->Location = Point(20, 20);
				 Radio_mid->Text = "Mid";
				 Radio_mid->Width = 50;
				 //okno->Controls->Add(Radio_mid);
				 Grupa_rola->Controls->Add(Radio_mid);

				 RadioButton^ Radio_top = gcnew RadioButton();
				 Radio_top->Location = Point(20, 40);
				 Radio_top->Text = "Top";
				 Radio_top->Width = 50;
				 //okno->Controls->Add(Radio_top);
				 Grupa_rola->Controls->Add(Radio_top);

				 RadioButton^ Radio_adc = gcnew RadioButton();
				 Radio_adc->Location = Point(20, 60);
				 Radio_adc->Text = "Adc";
				 Radio_adc->Width = 200;
				 okno->Controls->Add(Radio_adc);
				 Grupa_rola->Controls->Add(Radio_adc);

				 Button^ Przycisk_okienkowy = gcnew Button();
				 Przycisk_okienkowy->Location = Point(250, 200);
				 Przycisk_okienkowy->Text = "Zapisz";
				 Przycisk_okienkowy->Width = 200;
				 okno->Controls->Add(Przycisk_okienkowy);
				 Przycisk_okienkowy->DialogResult = System::Windows::Forms::DialogResult::OK;
				 okno->ShowDialog();

				 //te 2 polecenia dzia�aja tylko z poziomu okna dialogowego
				 Etykieta_Dane->Text = Etykieta_cs->Text + " "+Pole_cs->Text+
					"\n"+ Etykieta_otrzymany->Text +"  " +Zadany_dmg->Text 
					 +"\n"+ Etykieta_zadany->Text+" "+ Otrzymany_dmg->Text
					 +"\n" + Etykieta_czas_gry->Text + " " + Czas_gry->Text
					 + "\n" + Etykieta_staty->Text + " " + Pole_staty->Text;
				 //matematyka 

				 System::Double cs_per_minute = Double::Parse(Pole_cs->Text) / Double::Parse(Czas_gry->Text);
				 //System::Double statystyki[3] = { Double::Parse(Pole_staty->Text), 2, 3 };
				 if (cs_per_minute>12)
				 {
					 EtykietaPoleKoncowe->Text ="cs na minut� "+ cs_per_minute.ToString("0,##")+ " super wynik, nie�le ci posz�o";
				 }
				 else{
					 EtykietaPoleKoncowe->Text = "cs na minut� " + cs_per_minute.ToString("0,##") + " musisz po�wiczy� lasthit";
				 }
				 //EtykietaPoleKoncowe->Text = cs_per_minute.ToString();
				 //Etykieta_Dane->Text = Otrzymany_dmg->Text;
				 //Etykieta_checkbox->Text = Do_okienka->Checked.ToString();
				 //okno->ShowDialog();   // trzeba wykona� akcj� �eby wr�ci� do okna g��wnego 
	}
			 System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e){
				 tytul = gcnew Form;
				 tytul->Height = 100;

				 Label^ napis = gcnew Label;
				 napis->Text = "Witam w aplikacji oceniaj�cej twoj� gr� w League of Legends";
				 napis->Height = 100;
				 napis->Width = 200;
				 tytul->Location = Point(500, 500);
				 tytul->Controls->Add(napis);

				 tytul->TopMost = true;
				 tytul->Show();
				 timer1 = gcnew Timer;
				 //timer1->Tick(100);
				 timer1->Start();
			 }
			 /*
			 System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e){
				 timer1->Stop();
				 tytul->Close();

			 }*/
	};
}