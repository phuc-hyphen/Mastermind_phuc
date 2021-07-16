#pragma once

namespace MastermindLEMarie {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Larègle
	/// </summary>
	public ref class Larègle : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		Larègle(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		Larègle(Form ^f1)
		{
			obj=f1;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Larègle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  back;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::Button^  avance;
	private: System::Windows::Forms::ImageList^  imageList2;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::RichTextBox^  richTextBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox6;
	private: System::Windows::Forms::Button^  Page1;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::RichTextBox^  richTextBox10;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Larègle::typeid));
			this->back = (gcnew System::Windows::Forms::Button());
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox10 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox11 = (gcnew System::Windows::Forms::RichTextBox());
			this->avance = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Page1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// back
			// 
			this->back->ImageIndex = 5;
			this->back->ImageList = this->imageList2;
			this->back->Location = System::Drawing::Point(570, 356);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(60, 45);
			this->back->TabIndex = 0;
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &Larègle::back_Click);
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"ui-space-shooter-1 (4).png");
			this->imageList2->Images->SetKeyName(1, L"ui-space-shooter-1 (8).png");
			this->imageList2->Images->SetKeyName(2, L"ui-space-shooter-1 (9).png");
			this->imageList2->Images->SetKeyName(3, L"ui-space-shooter-1 (11).png");
			this->imageList2->Images->SetKeyName(4, L"ui-space-shooter-1.png");
			this->imageList2->Images->SetKeyName(5, L"unnamed (2).png");
			this->imageList2->Images->SetKeyName(6, L"téléchargement (1).png");
			this->imageList2->Images->SetKeyName(7, L"téléchargement (2).png");
			this->imageList2->Images->SetKeyName(8, L"téléchargement (3).png");
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gray;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->richTextBox4);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->richTextBox2);
			this->panel1->Location = System::Drawing::Point(12, 115);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(535, 310);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Gray;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->richTextBox7);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->richTextBox5);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->richTextBox3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->richTextBox6);
			this->panel2->Location = System::Drawing::Point(15, 115);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(535, 310);
			this->panel2->TabIndex = 7;
			// 
			// richTextBox7
			// 
			this->richTextBox7->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->richTextBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox7->Location = System::Drawing::Point(96, 233);
			this->richTextBox7->Name = L"richTextBox7";
			this->richTextBox7->ReadOnly = true;
			this->richTextBox7->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox7->Size = System::Drawing::Size(405, 48);
			this->richTextBox7->TabIndex = 10;
			this->richTextBox7->Text = L"Point vide : si votre pion n\'est pas dans la combinairson ";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox4->Location = System::Drawing::Point(52, 233);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(38, 31);
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// richTextBox5
			// 
			this->richTextBox5->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->richTextBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox5->Location = System::Drawing::Point(96, 179);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->ReadOnly = true;
			this->richTextBox5->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox5->Size = System::Drawing::Size(405, 48);
			this->richTextBox5->TabIndex = 8;
			this->richTextBox5->Text = L"Point blanc : si votre pion est dans la combinairson mais mal placé.";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Location = System::Drawing::Point(52, 179);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(38, 31);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(96, 125);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox3->Size = System::Drawing::Size(405, 48);
			this->richTextBox3->TabIndex = 6;
			this->richTextBox3->Text = L"Point noir : si votre pion est dans la combinairson et est bien placé";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->Location = System::Drawing::Point(52, 125);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(38, 31);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(194, 0);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(190, 39);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"La règle du jeu ";
			// 
			// richTextBox6
			// 
			this->richTextBox6->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->richTextBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox6->Location = System::Drawing::Point(19, 52);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->ReadOnly = true;
			this->richTextBox6->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox6->Size = System::Drawing::Size(482, 67);
			this->richTextBox6->TabIndex = 2;
			this->richTextBox6->Text = L"Après appuyé sur \"Compare\", votre combinaison sera comparée à celle du résultat e" 
				L"t il affichera sur la ligne à côté les indices et vous ne pouvez plus les change" 
				L"r :  ";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(19, 197);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox1->Size = System::Drawing::Size(482, 70);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"Vous allez choisir des pions à côté pour composer une combinairon de couleur en l" 
				L"es insérant dans des encoches des manches ";
			// 
			// richTextBox4
			// 
			this->richTextBox4->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->richTextBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox4->Location = System::Drawing::Point(19, 125);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->ReadOnly = true;
			this->richTextBox4->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox4->Size = System::Drawing::Size(482, 66);
			this->richTextBox4->TabIndex = 5;
			this->richTextBox4->Text = L"Le joueur (vous)  qui doit trouver la combinaison secrète gagne une manche dès lo" 
				L"rs qu’il y parvient en maximum 12 coups.";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(194, 0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(199, 39);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"La règle du jeu ";
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(19, 66);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox2->Size = System::Drawing::Size(482, 53);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"Au début, il y a une combinaison de couleur qui a été cachée. ";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gray;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->pictureBox9);
			this->panel3->Controls->Add(this->pictureBox8);
			this->panel3->Controls->Add(this->textBox7);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Controls->Add(this->pictureBox5);
			this->panel3->Controls->Add(this->richTextBox10);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->richTextBox11);
			this->panel3->Location = System::Drawing::Point(12, 118);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(535, 310);
			this->panel3->TabIndex = 11;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox9->Location = System::Drawing::Point(340, 182);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(136, 97);
			this->pictureBox9->TabIndex = 19;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->Location = System::Drawing::Point(352, 48);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(136, 97);
			this->pictureBox8->TabIndex = 18;
			this->pictureBox8->TabStop = false;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(83, 149);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(415, 23);
			this->textBox7->TabIndex = 17;
			this->textBox7->Text = L"Vous n\'avez pas trouvé la solution après 12 essais ";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(83, 197);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(248, 23);
			this->textBox6->TabIndex = 16;
			this->textBox6->Text = L"Vous avez trouvé la solution";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(86, 245);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(248, 23);
			this->textBox5->TabIndex = 15;
			this->textBox5->Text = L"Le temps limité est dépassé.";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(52, 197);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(9, 14);
			this->pictureBox7->TabIndex = 13;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(52, 241);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(9, 14);
			this->pictureBox6->TabIndex = 12;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(52, 149);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(9, 14);
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			// 
			// richTextBox10
			// 
			this->richTextBox10->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->richTextBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox10->Location = System::Drawing::Point(19, 105);
			this->richTextBox10->Name = L"richTextBox10";
			this->richTextBox10->ReadOnly = true;
			this->richTextBox10->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox10->Size = System::Drawing::Size(252, 28);
			this->richTextBox10->TabIndex = 6;
			this->richTextBox10->Text = L"Le jeu sera terminé une fois si :";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(194, 0);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(190, 39);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"La règle du jeu ";
			// 
			// richTextBox11
			// 
			this->richTextBox11->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->richTextBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox11->Location = System::Drawing::Point(19, 66);
			this->richTextBox11->Name = L"richTextBox11";
			this->richTextBox11->ReadOnly = true;
			this->richTextBox11->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox11->Size = System::Drawing::Size(264, 24);
			this->richTextBox11->TabIndex = 2;
			this->richTextBox11->Text = L"Vous avez 12 lignes d\'essayer. ";
			// 
			// avance
			// 
			this->avance->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->avance->ImageKey = L"téléchargement (2).png";
			this->avance->ImageList = this->imageList2;
			this->avance->Location = System::Drawing::Point(567, 232);
			this->avance->Name = L"avance";
			this->avance->Size = System::Drawing::Size(47, 46);
			this->avance->TabIndex = 3;
			this->avance->UseVisualStyleBackColor = true;
			this->avance->Click += gcnew System::EventHandler(this, &Larègle::avance_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->ImageKey = L"téléchargement (3).png";
			this->button1->ImageList = this->imageList2;
			this->button1->Location = System::Drawing::Point(567, 297);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(47, 46);
			this->button1->TabIndex = 4;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Larègle::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(606, 97);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// Page1
			// 
			this->Page1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Page1->ImageKey = L"téléchargement (1).png";
			this->Page1->ImageList = this->imageList2;
			this->Page1->Location = System::Drawing::Point(567, 170);
			this->Page1->Name = L"Page1";
			this->Page1->Size = System::Drawing::Size(47, 46);
			this->Page1->TabIndex = 5;
			this->Page1->UseVisualStyleBackColor = true;
			this->Page1->Click += gcnew System::EventHandler(this, &Larègle::Page1_Click);
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox3->Location = System::Drawing::Point(567, 128);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(60, 23);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"Page";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Larègle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(642, 429);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->Page1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->avance);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->back);
			this->Name = L"Larègle";
			this->Text = L"Larègle";
			this->Load += gcnew System::EventHandler(this, &Larègle::Larègle_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Larègle_Load(System::Object^  sender, System::EventArgs^  e) {
				 panel1-> Visible = true;
				 panel2-> Visible = false; 
				 panel3-> Visible = false;
			 }
	private: System::Void back_Click(System::Object^  sender, System::EventArgs^  e) {
				 this-> Hide();
				 obj -> Show();
			 }
	private: System::Void Page1_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1-> Visible = true;
				 panel2-> Visible = false; 
				 panel3-> Visible = false;
		 }
	private: System::Void avance_Click(System::Object^  sender, System::EventArgs^  e) {// le bouton pour continuer à lire//PAGE 2
				 panel2-> Visible = true; 
				 panel3-> Visible = false;
		 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {// le bouton pour relire// PAGE 3
			panel3-> Visible = true; 
			 }


};
}
