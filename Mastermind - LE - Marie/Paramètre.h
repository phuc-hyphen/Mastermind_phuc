#pragma once
#include <stdio.h>
#include "Nouvellepartie.h"
namespace MastermindLEMarie {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Paramètre
	/// </summary>
	public ref class Paramètre : public System::Windows::Forms::Form
	{
	public:

		Form ^obj;//créer un form basique

		Paramètre(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		Paramètre(Form ^f2)
		{
			obj=f2;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Paramètre()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  back;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  Music_off;
	private: System::Windows::Forms::Button^  Music_on;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  timebox;

	private: System::Windows::Forms::Button^  Plus;
	private: System::Windows::Forms::Button^  Moins;
	private: System::Windows::Forms::Button^  OK;





	protected: 

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Paramètre::typeid));
			this->back = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Music_off = (gcnew System::Windows::Forms::Button());
			this->Music_on = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->timebox = (gcnew System::Windows::Forms::TextBox());
			this->Plus = (gcnew System::Windows::Forms::Button());
			this->Moins = (gcnew System::Windows::Forms::Button());
			this->OK = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// back
			// 
			this->back->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"back.BackgroundImage")));
			this->back->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->back->Location = System::Drawing::Point(517, 374);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(56, 52);
			this->back->TabIndex = 0;
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &Paramètre::back_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(211, 186);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Paramètre";
			// 
			// Music_off
			// 
			this->Music_off->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Music_off.BackgroundImage")));
			this->Music_off->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Music_off->Location = System::Drawing::Point(300, 261);
			this->Music_off->Name = L"Music_off";
			this->Music_off->Size = System::Drawing::Size(50, 50);
			this->Music_off->TabIndex = 12;
			this->Music_off->UseVisualStyleBackColor = true;
			this->Music_off->Click += gcnew System::EventHandler(this, &Paramètre::Music_off_Click);
			// 
			// Music_on
			// 
			this->Music_on->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Music_on.BackgroundImage")));
			this->Music_on->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Music_on->Location = System::Drawing::Point(217, 261);
			this->Music_on->Name = L"Music_on";
			this->Music_on->Size = System::Drawing::Size(50, 50);
			this->Music_on->TabIndex = 11;
			this->Music_on->UseVisualStyleBackColor = true;
			this->Music_on->Click += gcnew System::EventHandler(this, &Paramètre::Music_on_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Info;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(21, 261);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(129, 34);
			this->textBox1->TabIndex = 14;
			this->textBox1->Text = L"MUSIQUE";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Info;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(15, 326);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(129, 34);
			this->textBox2->TabIndex = 15;
			this->textBox2->Text = L"NIVEAU";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(158, 330);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(169, 30);
			this->textBox3->TabIndex = 16;
			this->textBox3->Text = L"Limite de temps(m)";
			// 
			// timebox
			// 
			this->timebox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->timebox->Location = System::Drawing::Point(333, 330);
			this->timebox->Name = L"timebox";
			this->timebox->Size = System::Drawing::Size(33, 30);
			this->timebox->TabIndex = 17;
			// 
			// Plus
			// 
			this->Plus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Plus.BackgroundImage")));
			this->Plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Plus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Plus->Location = System::Drawing::Point(388, 330);
			this->Plus->Name = L"Plus";
			this->Plus->Size = System::Drawing::Size(35, 35);
			this->Plus->TabIndex = 18;
			this->Plus->UseVisualStyleBackColor = true;
			this->Plus->Click += gcnew System::EventHandler(this, &Paramètre::Plus_Click);
			// 
			// Moins
			// 
			this->Moins->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Moins.BackgroundImage")));
			this->Moins->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Moins->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Moins->Location = System::Drawing::Point(429, 330);
			this->Moins->Name = L"Moins";
			this->Moins->Size = System::Drawing::Size(35, 35);
			this->Moins->TabIndex = 19;
			this->Moins->UseVisualStyleBackColor = true;
			this->Moins->Click += gcnew System::EventHandler(this, &Paramètre::Moins_Click);
			// 
			// OK
			// 
			this->OK->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->OK->Location = System::Drawing::Point(488, 319);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(62, 46);
			this->OK->TabIndex = 20;
			this->OK->Text = L"OK";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &Paramètre::OK_Click);
			// 
			// Paramètre
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(585, 438);
			this->Controls->Add(this->OK);
			this->Controls->Add(this->Moins);
			this->Controls->Add(this->Plus);
			this->Controls->Add(this->timebox);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Music_off);
			this->Controls->Add(this->Music_on);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->back);
			this->Name = L"Paramètre";
			this->Text = L"Paramètre";
			this->Load += gcnew System::EventHandler(this, &Paramètre::Paramètre_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int limite,max,min,variable;
	
	public: System::Void Paramètre_Load(System::Object^  sender, System::EventArgs^  e) {
				 max=12;
				 min=1;
				 limite = max;
				 timebox->Text=limite.ToString();
			 }

	private: System::Void back_Click(System::Object^  sender, System::EventArgs^  e) {
				 this -> Hide();
				 obj->Show();
			 }
	private: System::Void Music_on_Click(System::Object^  sender, System::EventArgs^  e) {
			 		
					// Crée un object de type SoundPlayer
					System::Media::SoundPlayer^ Player = gcnew System::Media::SoundPlayer();
					// Indique le chemin d'acces au fichier a lire
					Player->SoundLocation = "Reach The Top.wav";
					Player->Load();
					// Lance la lecture de la musique 
					Player->Play();
		 }
	private: System::Void Music_off_Click(System::Object^  sender, System::EventArgs^  e) {	
					// Crée un object de type SoundPlayer
					System::Media::SoundPlayer^ Player = gcnew System::Media::SoundPlayer();
					// Indique le chemin d'acces au fichier a lire
					Player->SoundLocation = "Reach The Top.wav";
					Player->Load();
					// Lance la lecture de la musique 
					Player->Stop();
		 }
	
	private: System::Void Plus_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(limite<max)
				 {
					 limite++;
					 timebox->Text=limite.ToString();
				 }
			 }
	private: System::Void Moins_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(limite>min)
				 {
					 limite--;
					 timebox->Text=limite.ToString();
				 }
		 }
	private: System::Void OK_Click(System::Object^  sender, System::EventArgs^  e) {
				 variable = limite;
				 Nouvellepartie ^f=gcnew Nouvellepartie ( variable);// envoyer le variable
		 }
};
}
