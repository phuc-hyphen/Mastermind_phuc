#pragma once

namespace MastermindLEMarie {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Next
	/// </summary>
	public ref class Next : public System::Windows::Forms::Form
	{
	public:

		Form ^obj;//créer un form basique

		information(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		};
		information(Form ^f) // la fonction avec le form1 comme l'entrée
		{
			obj = f; // changer variable 
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Next()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  retourne;
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
			this->retourne = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// retourne
			// 
			this->retourne->Location = System::Drawing::Point(702, 441);
			this->retourne->Name = L"retourne";
			this->retourne->Size = System::Drawing::Size(121, 57);
			this->retourne->TabIndex = 0;
			this->retourne->Text = L"retourne";
			this->retourne->UseVisualStyleBackColor = true;
			this->retourne->Click += gcnew System::EventHandler(this, &Next::retourne_Click);
			// 
			// Next
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(829, 506);
			this->Controls->Add(this->retourne);
			this->Name = L"information";
			this->Text = L"informations";
			this->Load += gcnew System::EventHandler(this, &Next::Next_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Next_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

	private: System::Void retourne_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				obj->ShowDialog();
			 }
	};
}
