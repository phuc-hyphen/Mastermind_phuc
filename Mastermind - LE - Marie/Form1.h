#pragma once
#include "Informations.h"
#include "Paramètre.h"
#include "Larègle.h"
#include "Nouvellepartie.h"
namespace MastermindLEMarie {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Description résumée de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 

	protected: 


	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Button^  parametre;
	private: System::Windows::Forms::Button^  laregle;
	private: System::Windows::Forms::Button^  nouvellepartie;
	private: System::Windows::Forms::OpenFileDialog^  odgMusic;



	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->parametre = (gcnew System::Windows::Forms::Button());
			this->laregle = (gcnew System::Windows::Forms::Button());
			this->nouvellepartie = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ImageKey = L"cool-fantasy-blue-buttons-set-vector-11472415 (5).png";
			this->button1->ImageList = this->imageList1;
			this->button1->Location = System::Drawing::Point(271, 402);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 61);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Informations";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"cool-fantasy-blue-buttons-set-vector-11472415 (1).png");
			this->imageList1->Images->SetKeyName(1, L"cool-fantasy-blue-buttons-set-vector-11472415 (2).png");
			this->imageList1->Images->SetKeyName(2, L"cool-fantasy-blue-buttons-set-vector-11472415 (3).png");
			this->imageList1->Images->SetKeyName(3, L"cool-fantasy-blue-buttons-set-vector-11472415 (4).png");
			this->imageList1->Images->SetKeyName(4, L"cool-fantasy-blue-buttons-set-vector-11472415 (5).png");
			this->imageList1->Images->SetKeyName(5, L"cool-fantasy-blue-buttons-set-vector-11472415.png");
			this->imageList1->Images->SetKeyName(6, L"ui-space-shooter-1 (1).png");
			// 
			// parametre
			// 
			this->parametre->AccessibleDescription = L"";
			this->parametre->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->parametre->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->parametre->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->parametre->FlatAppearance->BorderSize = 0;
			this->parametre->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->parametre->ForeColor = System::Drawing::SystemColors::ControlText;
			this->parametre->ImageKey = L"cool-fantasy-blue-buttons-set-vector-11472415 (5).png";
			this->parametre->ImageList = this->imageList1;
			this->parametre->Location = System::Drawing::Point(271, 337);
			this->parametre->Name = L"parametre";
			this->parametre->Size = System::Drawing::Size(209, 59);
			this->parametre->TabIndex = 1;
			this->parametre->Text = L"Parametre ";
			this->parametre->UseVisualStyleBackColor = false;
			this->parametre->Click += gcnew System::EventHandler(this, &Form1::parametre_Click);
			// 
			// laregle
			// 
			this->laregle->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->laregle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->laregle->ImageKey = L"cool-fantasy-blue-buttons-set-vector-11472415 (5).png";
			this->laregle->ImageList = this->imageList1;
			this->laregle->Location = System::Drawing::Point(271, 270);
			this->laregle->Name = L"laregle";
			this->laregle->Size = System::Drawing::Size(209, 61);
			this->laregle->TabIndex = 2;
			this->laregle->Text = L"La règle";
			this->laregle->UseVisualStyleBackColor = false;
			this->laregle->Click += gcnew System::EventHandler(this, &Form1::laregle_Click);
			// 
			// nouvellepartie
			// 
			this->nouvellepartie->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->nouvellepartie->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nouvellepartie->ImageKey = L"cool-fantasy-blue-buttons-set-vector-11472415.png";
			this->nouvellepartie->ImageList = this->imageList1;
			this->nouvellepartie->Location = System::Drawing::Point(271, 203);
			this->nouvellepartie->Name = L"nouvellepartie";
			this->nouvellepartie->Size = System::Drawing::Size(209, 61);
			this->nouvellepartie->TabIndex = 3;
			this->nouvellepartie->Text = L"Nouvelle Partie";
			this->nouvellepartie->UseVisualStyleBackColor = false;
			this->nouvellepartie->Click += gcnew System::EventHandler(this, &Form1::nouvellepartie_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(772, 481);
			this->Controls->Add(this->nouvellepartie);
			this->Controls->Add(this->laregle);
			this->Controls->Add(this->parametre);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		int limite;
	public: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 //int a;  les variables locaux
				// lecture musique POUR UN FICHIER exclusivement au format WAV (PCM)
					// Crée un object de type SoundPlayer
					System::Media::SoundPlayer^ Player = gcnew System::Media::SoundPlayer();
					// Indique le chemin d'acces au fichier a lire
					Player->SoundLocation = "Reach The Top.wav";
					Player->Load();
					// Lance la lecture de la musique 
					Player->Play();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {// Information
				 Informations ^f3 =gcnew Informations(this);//créer une référence = this 
				 f3->Show();
			 }//
	public: System::Void parametre_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 Paramètre ^f2 = gcnew Paramètre(this);//créer une référence = this 
				 f2->Show();
			 }
	private: System::Void laregle_Click(System::Object^  sender, System::EventArgs^  e) {
				 Larègle ^f1= gcnew Larègle(this);//créer une référence = this 
				 f1->Show();
		 }
	private: System::Void nouvellepartie_Click(System::Object^  sender, System::EventArgs^  e) {
				 Nouvellepartie ^f5= gcnew Nouvellepartie();
				 f5->Show();
		 }


};
}

