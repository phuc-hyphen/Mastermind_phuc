#pragma once

namespace MastermindLEMarie {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Informations
	/// </summary>
	public ref class Informations : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;//créer un form basique

		Informations(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		Informations(Form ^f3)// appel la fonction avec un variable réferénce
		{
			obj=f3;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Informations()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  retourne;







	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Informations::typeid));
			this->retourne = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// retourne
			// 
			this->retourne->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->retourne->Location = System::Drawing::Point(466, 387);
			this->retourne->Name = L"retourne";
			this->retourne->Size = System::Drawing::Size(150, 60);
			this->retourne->TabIndex = 0;
			this->retourne->Text = L"Retourne";
			this->retourne->UseVisualStyleBackColor = true;
			this->retourne->Click += gcnew System::EventHandler(this, &Informations::retourne_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::No;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-7, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(654, 156);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 223);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 23);
			this->label1->TabIndex = 9;
			this->label1->Text = L"DEVELOPPEURS :  ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Brown;
			this->label2->Location = System::Drawing::Point(198, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(229, 23);
			this->label2->TabIndex = 10;
			this->label2->Text = L"PROJET MASTERMIND";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(209, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 23);
			this->label3->TabIndex = 11;
			this->label3->Text = L"BINOME - A13";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(303, 260);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 23);
			this->label4->TabIndex = 12;
			this->label4->Text = L"LE Huu Phuc";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(303, 297);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 23);
			this->label5->TabIndex = 13;
			this->label5->Text = L"MARIE Thomas";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 341);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(145, 23);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Date de debut : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(180, 341);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 23);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Le 10/ 11 /2020";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(3, 372);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 23);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Date de fin : ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(180, 372);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(140, 23);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Le 20/ 12 /2020";
			// 
			// Informations
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(647, 468);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->retourne);
			this->Name = L"Informations";
			this->Text = L"Informations";
			this->Load += gcnew System::EventHandler(this, &Informations::Informations_Load);
			this->Click += gcnew System::EventHandler(this, &Informations::Informations_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Informations_Click(System::Object^  sender, System::EventArgs^  e) {
			 }

	private: System::Void retourne_Click(System::Object^  sender, System::EventArgs^  e) {//fonction de bouton retourne
				 this -> Hide();
				 obj->Show();
			 }
	private: System::Void Informations_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
