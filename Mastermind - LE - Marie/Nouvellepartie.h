#pragma once
#include<stdio.h>
#include"Gameover.h"
#include"GameWin.h"
namespace MastermindLEMarie {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Nouvellepartie
	/// </summary>
	private ref class Nouvellepartie : public System::Windows::Forms::Form
	{
	public: 
		static int limite;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	public: 
	public:
		Form ^obj;//créer un form basique

		Nouvellepartie(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		Nouvellepartie(int variable)
		{
			InitializeComponent();
			if(variable!=limite)
			{limite=variable;}
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Nouvellepartie()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::TextBox^  txtHeure;
	private: System::Windows::Forms::Timer^  timeHeure;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  Back;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  Solution;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel12;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::Panel^  panel13;
	private: System::Windows::Forms::Panel^  panel14;
	private: System::Windows::Forms::Panel^  encoche1_4;
	private: System::Windows::Forms::Panel^  encoche1_3;
	private: System::Windows::Forms::Panel^  encoche1_2;
	private: System::Windows::Forms::Panel^  encoche1_1;
	private: System::Windows::Forms::TextBox^  textBo5;

	private: System::Windows::Forms::Panel^  panel31;
	private: System::Windows::Forms::Panel^  panel35;
	private: System::Windows::Forms::Panel^  panel34;
	private: System::Windows::Forms::Panel^  panel33;
	private: System::Windows::Forms::Panel^  panel32;
	public: System::Windows::Forms::Button^  compareligne1;
	private: 

	private: 

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Panel^  encoche2_4;
	private: System::Windows::Forms::Panel^  encoche2_3;
	private: System::Windows::Forms::Panel^  encoche2_2;
	private: System::Windows::Forms::Panel^  encoche2_1;
	private: System::Windows::Forms::Button^  compareligne2;

	private: System::Windows::Forms::Panel^  panel23;
	private: System::Windows::Forms::Panel^  panel24;
	private: System::Windows::Forms::Panel^  panel25;
	private: System::Windows::Forms::Panel^  panel26;
	private: System::Windows::Forms::Panel^  panel27;
	
	private: System::Windows::Forms::PictureBox^  encoche3_1;
	private: System::Windows::Forms::PictureBox^  encoche3_2;
	private: System::Windows::Forms::PictureBox^  encoche3_3;
	private: System::Windows::Forms::PictureBox^  encoche3_4;
	private: System::Windows::Forms::Button^  compareligne3;

	private: System::Windows::Forms::Panel^  panel_0;

	private: System::Windows::Forms::Button^  compareligne4;
	private: System::Windows::Forms::Panel^  panel28;
	private: System::Windows::Forms::Panel^  resul3_4;
	private: System::Windows::Forms::Panel^  resul3_3;
	private: System::Windows::Forms::Panel^  resul3_2;
	private: System::Windows::Forms::Panel^  resul3_1;
	private: System::Windows::Forms::Panel^  panel29;
	private: System::Windows::Forms::Panel^  resul4_4;
	private: System::Windows::Forms::Panel^  resul4_3;
	private: System::Windows::Forms::Panel^  resul4_2;
	private: System::Windows::Forms::Panel^  resul4_1;
	private: System::Windows::Forms::PictureBox^  encoche5_2;
	private: System::Windows::Forms::PictureBox^  encoche5_3;
	private: System::Windows::Forms::PictureBox^  encoche5_4;
	private: System::Windows::Forms::PictureBox^  encoche5_1;
	private: System::Windows::Forms::PictureBox^  encoche4_2;
	private: System::Windows::Forms::PictureBox^  encoche4_3;
	private: System::Windows::Forms::PictureBox^  encoche4_4;
	private: System::Windows::Forms::PictureBox^  encoche4_1;
	private: System::Windows::Forms::PictureBox^  encoche6_2;
	private: System::Windows::Forms::PictureBox^  encoche6_3;
	private: System::Windows::Forms::PictureBox^  encoche6_4;
	private: System::Windows::Forms::PictureBox^  encoche6_1;
	private: System::Windows::Forms::Panel^  panel30;
	private: System::Windows::Forms::Panel^  resul5_4;
	private: System::Windows::Forms::Panel^  resul5_3;
	private: System::Windows::Forms::Panel^  resul5_2;
	private: System::Windows::Forms::Panel^  resul5_1;
	private: System::Windows::Forms::Button^  compareligne5;
	private: System::Windows::Forms::Panel^  panel36;
	private: System::Windows::Forms::Panel^  resul6_4;
	private: System::Windows::Forms::Panel^  resul6_3;
	private: System::Windows::Forms::Panel^  resul6_2;
	private: System::Windows::Forms::Panel^  resul6_1;
	private: System::Windows::Forms::Button^  compareligne6;
	private: System::Windows::Forms::PictureBox^  encoche7_2;
	private: System::Windows::Forms::PictureBox^  encoche7_3;
	private: System::Windows::Forms::PictureBox^  encoche7_4;
	private: System::Windows::Forms::PictureBox^  encoche7_1;
	private: System::Windows::Forms::Button^  compareligne7;
	private: System::Windows::Forms::Panel^  panel15;
	private: System::Windows::Forms::Panel^  resul7_4;
	private: System::Windows::Forms::Panel^  resul7_3;
	private: System::Windows::Forms::Panel^  resul7_2;
	private: System::Windows::Forms::Panel^  resul7_1;
	private: System::Windows::Forms::PictureBox^  encoche8_2;
	private: System::Windows::Forms::PictureBox^  encoche8_3;
	private: System::Windows::Forms::PictureBox^  encoche8_4;
	private: System::Windows::Forms::PictureBox^  encoche8_1;
	private: System::Windows::Forms::Panel^  panel16;
	private: System::Windows::Forms::Panel^  resul8_4;
	private: System::Windows::Forms::Panel^  resul8_3;
	private: System::Windows::Forms::Panel^  resul8_2;
	private: System::Windows::Forms::Panel^  resul8_1;
	private: System::Windows::Forms::Button^  compareligne8;
	private: System::Windows::Forms::PictureBox^  encoche9_2;
	private: System::Windows::Forms::PictureBox^  encoche9_3;
	private: System::Windows::Forms::PictureBox^  encoche9_4;
	private: System::Windows::Forms::PictureBox^  encoche9_1;
	private: System::Windows::Forms::Panel^  panel17;
	private: System::Windows::Forms::Panel^  resul9_4;
	private: System::Windows::Forms::Panel^  resul9_3;
	private: System::Windows::Forms::Panel^  resul9_2;
	private: System::Windows::Forms::Panel^  resul9_1;
	private: System::Windows::Forms::Button^  compareligne9;
	private: System::Windows::Forms::PictureBox^  encoche10_2;
	private: System::Windows::Forms::PictureBox^  encoche10_3;
	private: System::Windows::Forms::PictureBox^  encoche10_4;
	private: System::Windows::Forms::PictureBox^  encoche10_1;
	private: System::Windows::Forms::Panel^  panel18;
	private: System::Windows::Forms::Panel^  resul10_4;
	private: System::Windows::Forms::Panel^  resul10_3;
	private: System::Windows::Forms::Panel^  resul10_2;
	private: System::Windows::Forms::Panel^  resul10_1;
	private: System::Windows::Forms::Button^  compareligne10;
	private: System::Windows::Forms::PictureBox^  encoche11_2;
	private: System::Windows::Forms::PictureBox^  encoche11_3;
	private: System::Windows::Forms::PictureBox^  encoche11_4;
	private: System::Windows::Forms::PictureBox^  encoche11_1;
	private: System::Windows::Forms::Panel^  panel19;
	private: System::Windows::Forms::Panel^  resul11_4;
	private: System::Windows::Forms::Panel^  resul11_3;
	private: System::Windows::Forms::Panel^  resul11_2;
	private: System::Windows::Forms::Panel^  resul11_1;
	private: System::Windows::Forms::Button^  compareligne11;
	private: System::Windows::Forms::PictureBox^  encoche12_2;
	private: System::Windows::Forms::PictureBox^  encoche12_3;
	private: System::Windows::Forms::PictureBox^  encoche12_4;
	private: System::Windows::Forms::PictureBox^  encoche12_1;
	private: System::Windows::Forms::Panel^  panel20;
	private: System::Windows::Forms::Panel^  resul12_4;
	private: System::Windows::Forms::Panel^  resul12_3;
	private: System::Windows::Forms::Panel^  resul12_2;
	private: System::Windows::Forms::Panel^  resul12_1;
	private: System::Windows::Forms::Button^  compareligne12;
private: System::Windows::Forms::TextBox^  textBox7;
private: System::Windows::Forms::TextBox^  textBox8;
private: System::Windows::Forms::TextBox^  textBox9;
private: System::Windows::Forms::TextBox^  textBox10;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::TextBox^  textBox17;
private: System::Windows::Forms::TextBox^  textBox18;
















	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Nouvellepartie::typeid));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->txtHeure = (gcnew System::Windows::Forms::TextBox());
			this->timeHeure = (gcnew System::Windows::Forms::Timer(this->components));
			this->Back = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Solution = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->encoche12_2 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche12_3 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche12_4 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche12_1 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche11_2 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche11_3 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche11_4 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche11_1 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche10_2 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche10_3 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche10_4 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche10_1 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche9_2 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche9_3 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche9_4 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche9_1 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche8_2 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche8_3 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche8_4 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche8_1 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche7_2 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche7_3 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche7_4 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche7_1 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche6_2 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche6_3 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche6_4 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche6_1 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche5_2 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche5_3 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche5_4 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche5_1 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche4_2 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche4_3 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche4_4 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche4_1 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche3_2 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche3_3 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche3_4 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche3_1 = (gcnew System::Windows::Forms::PictureBox());
			this->encoche2_4 = (gcnew System::Windows::Forms::Panel());
			this->encoche1_4 = (gcnew System::Windows::Forms::Panel());
			this->encoche2_3 = (gcnew System::Windows::Forms::Panel());
			this->encoche1_3 = (gcnew System::Windows::Forms::Panel());
			this->encoche2_2 = (gcnew System::Windows::Forms::Panel());
			this->encoche1_2 = (gcnew System::Windows::Forms::Panel());
			this->encoche2_1 = (gcnew System::Windows::Forms::Panel());
			this->encoche1_1 = (gcnew System::Windows::Forms::Panel());
			this->panel_0 = (gcnew System::Windows::Forms::Panel());
			this->textBo5 = (gcnew System::Windows::Forms::TextBox());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->compareligne1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->compareligne2 = (gcnew System::Windows::Forms::Button());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->compareligne3 = (gcnew System::Windows::Forms::Button());
			this->compareligne4 = (gcnew System::Windows::Forms::Button());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->resul3_4 = (gcnew System::Windows::Forms::Panel());
			this->resul3_3 = (gcnew System::Windows::Forms::Panel());
			this->resul3_2 = (gcnew System::Windows::Forms::Panel());
			this->resul3_1 = (gcnew System::Windows::Forms::Panel());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->resul4_4 = (gcnew System::Windows::Forms::Panel());
			this->resul4_3 = (gcnew System::Windows::Forms::Panel());
			this->resul4_2 = (gcnew System::Windows::Forms::Panel());
			this->resul4_1 = (gcnew System::Windows::Forms::Panel());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->resul5_4 = (gcnew System::Windows::Forms::Panel());
			this->resul5_3 = (gcnew System::Windows::Forms::Panel());
			this->resul5_2 = (gcnew System::Windows::Forms::Panel());
			this->resul5_1 = (gcnew System::Windows::Forms::Panel());
			this->compareligne5 = (gcnew System::Windows::Forms::Button());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->resul6_4 = (gcnew System::Windows::Forms::Panel());
			this->resul6_3 = (gcnew System::Windows::Forms::Panel());
			this->resul6_2 = (gcnew System::Windows::Forms::Panel());
			this->resul6_1 = (gcnew System::Windows::Forms::Panel());
			this->compareligne6 = (gcnew System::Windows::Forms::Button());
			this->compareligne7 = (gcnew System::Windows::Forms::Button());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->resul7_4 = (gcnew System::Windows::Forms::Panel());
			this->resul7_3 = (gcnew System::Windows::Forms::Panel());
			this->resul7_2 = (gcnew System::Windows::Forms::Panel());
			this->resul7_1 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->resul8_4 = (gcnew System::Windows::Forms::Panel());
			this->resul8_3 = (gcnew System::Windows::Forms::Panel());
			this->resul8_2 = (gcnew System::Windows::Forms::Panel());
			this->resul8_1 = (gcnew System::Windows::Forms::Panel());
			this->compareligne8 = (gcnew System::Windows::Forms::Button());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->resul9_4 = (gcnew System::Windows::Forms::Panel());
			this->resul9_3 = (gcnew System::Windows::Forms::Panel());
			this->resul9_2 = (gcnew System::Windows::Forms::Panel());
			this->resul9_1 = (gcnew System::Windows::Forms::Panel());
			this->compareligne9 = (gcnew System::Windows::Forms::Button());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->resul10_4 = (gcnew System::Windows::Forms::Panel());
			this->resul10_3 = (gcnew System::Windows::Forms::Panel());
			this->resul10_2 = (gcnew System::Windows::Forms::Panel());
			this->resul10_1 = (gcnew System::Windows::Forms::Panel());
			this->compareligne10 = (gcnew System::Windows::Forms::Button());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->resul11_4 = (gcnew System::Windows::Forms::Panel());
			this->resul11_3 = (gcnew System::Windows::Forms::Panel());
			this->resul11_2 = (gcnew System::Windows::Forms::Panel());
			this->resul11_1 = (gcnew System::Windows::Forms::Panel());
			this->compareligne11 = (gcnew System::Windows::Forms::Button());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->resul12_4 = (gcnew System::Windows::Forms::Panel());
			this->resul12_3 = (gcnew System::Windows::Forms::Panel());
			this->resul12_2 = (gcnew System::Windows::Forms::Panel());
			this->resul12_1 = (gcnew System::Windows::Forms::Panel());
			this->compareligne12 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche12_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche12_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche12_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche12_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche11_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche11_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche11_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche11_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche10_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche10_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche10_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche10_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche9_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche9_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche9_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche9_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche8_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche8_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche8_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche8_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche7_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche7_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche7_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche7_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche6_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche6_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche6_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche6_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche5_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche5_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche5_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche5_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche4_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche4_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche4_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche4_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche3_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche3_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche3_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche3_1))->BeginInit();
			this->panel31->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel28->SuspendLayout();
			this->panel29->SuspendLayout();
			this->panel30->SuspendLayout();
			this->panel36->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(30, 395);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox2->Size = System::Drawing::Size(90, 30);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Horloge";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtHeure
			// 
			this->txtHeure->Location = System::Drawing::Point(30, 430);
			this->txtHeure->Name = L"txtHeure";
			this->txtHeure->Size = System::Drawing::Size(200, 22);
			this->txtHeure->TabIndex = 1;
			// 
			// timeHeure
			// 
			this->timeHeure->Interval = 1000;
			this->timeHeure->Tick += gcnew System::EventHandler(this, &Nouvellepartie::timeHeure_Tick);
			// 
			// Back
			// 
			this->Back->Location = System::Drawing::Point(30, 470);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(100, 50);
			this->Back->TabIndex = 1;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &Nouvellepartie::Back_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(31, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(213, 39);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"MASTERMIND";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(555, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(109, 39);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"Indices";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(375, 5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(126, 39);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"Reponses";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Location = System::Drawing::Point(156, 11);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(35, 35);
			this->panel4->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Location = System::Drawing::Point(110, 11);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(35, 35);
			this->panel3->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Location = System::Drawing::Point(64, 11);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(35, 35);
			this->panel2->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Location = System::Drawing::Point(18, 11);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(35, 35);
			this->panel1->TabIndex = 0;
			// 
			// Solution
			// 
			this->Solution->Location = System::Drawing::Point(55, 165);
			this->Solution->Name = L"Solution";
			this->Solution->Size = System::Drawing::Size(140, 40);
			this->Solution->TabIndex = 9;
			this->Solution->Text = L"Solution";
			this->Solution->UseVisualStyleBackColor = true;
			this->Solution->Click += gcnew System::EventHandler(this, &Nouvellepartie::Solution_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->panel1);
			this->panel5->Controls->Add(this->panel2);
			this->panel5->Controls->Add(this->panel3);
			this->panel5->Controls->Add(this->panel4);
			this->panel5->Location = System::Drawing::Point(15, 100);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(204, 51);
			this->panel5->TabIndex = 10;
			this->panel5->Visible = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->Controls->Add(this->panel13);
			this->panel6->Controls->Add(this->panel12);
			this->panel6->Controls->Add(this->panel11);
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Controls->Add(this->panel8);
			this->panel6->Controls->Add(this->panel9);
			this->panel6->Controls->Add(this->panel10);
			this->panel6->Location = System::Drawing::Point(244, 164);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(50, 270);
			this->panel6->TabIndex = 11;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::Transparent;
			this->panel13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel13.BackgroundImage")));
			this->panel13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel13->Location = System::Drawing::Point(7, 228);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(35, 35);
			this->panel13->TabIndex = 6;
			this->panel13->Click += gcnew System::EventHandler(this, &Nouvellepartie::panel13_Click);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Transparent;
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel12->Location = System::Drawing::Point(8, 192);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(35, 35);
			this->panel12->TabIndex = 5;
			this->panel12->Click += gcnew System::EventHandler(this, &Nouvellepartie::panel12_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Transparent;
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel11->Location = System::Drawing::Point(8, 156);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(35, 35);
			this->panel11->TabIndex = 4;
			this->panel11->Click += gcnew System::EventHandler(this, &Nouvellepartie::panel11_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Location = System::Drawing::Point(7, 12);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(35, 35);
			this->panel7->TabIndex = 0;
			this->panel7->Click += gcnew System::EventHandler(this, &Nouvellepartie::panel7_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Transparent;
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel8->Location = System::Drawing::Point(8, 120);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(35, 35);
			this->panel8->TabIndex = 3;
			this->panel8->Click += gcnew System::EventHandler(this, &Nouvellepartie::panel8_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Transparent;
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel9->Location = System::Drawing::Point(7, 48);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(35, 35);
			this->panel9->TabIndex = 1;
			this->panel9->Click += gcnew System::EventHandler(this, &Nouvellepartie::panel9_Click);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Transparent;
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel10->Location = System::Drawing::Point(8, 84);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(35, 35);
			this->panel10->TabIndex = 2;
			this->panel10->Click += gcnew System::EventHandler(this, &Nouvellepartie::panel10_Click);
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::Transparent;
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel14->Controls->Add(this->encoche12_2);
			this->panel14->Controls->Add(this->encoche12_3);
			this->panel14->Controls->Add(this->encoche12_4);
			this->panel14->Controls->Add(this->encoche12_1);
			this->panel14->Controls->Add(this->encoche11_2);
			this->panel14->Controls->Add(this->encoche11_3);
			this->panel14->Controls->Add(this->encoche11_4);
			this->panel14->Controls->Add(this->encoche11_1);
			this->panel14->Controls->Add(this->encoche10_2);
			this->panel14->Controls->Add(this->encoche10_3);
			this->panel14->Controls->Add(this->encoche10_4);
			this->panel14->Controls->Add(this->encoche10_1);
			this->panel14->Controls->Add(this->encoche9_2);
			this->panel14->Controls->Add(this->encoche9_3);
			this->panel14->Controls->Add(this->encoche9_4);
			this->panel14->Controls->Add(this->encoche9_1);
			this->panel14->Controls->Add(this->encoche8_2);
			this->panel14->Controls->Add(this->encoche8_3);
			this->panel14->Controls->Add(this->encoche8_4);
			this->panel14->Controls->Add(this->encoche8_1);
			this->panel14->Controls->Add(this->encoche7_2);
			this->panel14->Controls->Add(this->encoche7_3);
			this->panel14->Controls->Add(this->encoche7_4);
			this->panel14->Controls->Add(this->encoche7_1);
			this->panel14->Controls->Add(this->encoche6_2);
			this->panel14->Controls->Add(this->encoche6_3);
			this->panel14->Controls->Add(this->encoche6_4);
			this->panel14->Controls->Add(this->encoche6_1);
			this->panel14->Controls->Add(this->encoche5_2);
			this->panel14->Controls->Add(this->encoche5_3);
			this->panel14->Controls->Add(this->encoche5_4);
			this->panel14->Controls->Add(this->encoche5_1);
			this->panel14->Controls->Add(this->encoche4_2);
			this->panel14->Controls->Add(this->encoche4_3);
			this->panel14->Controls->Add(this->encoche4_4);
			this->panel14->Controls->Add(this->encoche4_1);
			this->panel14->Controls->Add(this->encoche3_2);
			this->panel14->Controls->Add(this->encoche3_3);
			this->panel14->Controls->Add(this->encoche3_4);
			this->panel14->Controls->Add(this->encoche3_1);
			this->panel14->Controls->Add(this->encoche2_4);
			this->panel14->Controls->Add(this->encoche1_4);
			this->panel14->Controls->Add(this->encoche2_3);
			this->panel14->Controls->Add(this->encoche1_3);
			this->panel14->Controls->Add(this->encoche2_2);
			this->panel14->Controls->Add(this->encoche1_2);
			this->panel14->Controls->Add(this->encoche2_1);
			this->panel14->Controls->Add(this->encoche1_1);
			this->panel14->Location = System::Drawing::Point(344, 40);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(174, 520);
			this->panel14->TabIndex = 12;
			// 
			// encoche12_2
			// 
			this->encoche12_2->BackColor = System::Drawing::Color::Transparent;
			this->encoche12_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche12_2.BackgroundImage")));
			this->encoche12_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche12_2->Location = System::Drawing::Point(50, 477);
			this->encoche12_2->Name = L"encoche12_2";
			this->encoche12_2->Size = System::Drawing::Size(35, 35);
			this->encoche12_2->TabIndex = 52;
			this->encoche12_2->TabStop = false;
			this->encoche12_2->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche12_2_Click);
			// 
			// encoche12_3
			// 
			this->encoche12_3->BackColor = System::Drawing::Color::Transparent;
			this->encoche12_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche12_3.BackgroundImage")));
			this->encoche12_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche12_3->Location = System::Drawing::Point(85, 477);
			this->encoche12_3->Name = L"encoche12_3";
			this->encoche12_3->Size = System::Drawing::Size(35, 35);
			this->encoche12_3->TabIndex = 51;
			this->encoche12_3->TabStop = false;
			this->encoche12_3->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche12_3_Click);
			// 
			// encoche12_4
			// 
			this->encoche12_4->BackColor = System::Drawing::Color::Transparent;
			this->encoche12_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche12_4.BackgroundImage")));
			this->encoche12_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche12_4->Location = System::Drawing::Point(120, 477);
			this->encoche12_4->Name = L"encoche12_4";
			this->encoche12_4->Size = System::Drawing::Size(35, 35);
			this->encoche12_4->TabIndex = 50;
			this->encoche12_4->TabStop = false;
			this->encoche12_4->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche12_4_Click);
			// 
			// encoche12_1
			// 
			this->encoche12_1->BackColor = System::Drawing::Color::Transparent;
			this->encoche12_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche12_1.BackgroundImage")));
			this->encoche12_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche12_1->Location = System::Drawing::Point(15, 477);
			this->encoche12_1->Name = L"encoche12_1";
			this->encoche12_1->Size = System::Drawing::Size(35, 35);
			this->encoche12_1->TabIndex = 49;
			this->encoche12_1->TabStop = false;
			this->encoche12_1->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche12_1_Click);
			// 
			// encoche11_2
			// 
			this->encoche11_2->BackColor = System::Drawing::Color::Transparent;
			this->encoche11_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche11_2.BackgroundImage")));
			this->encoche11_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche11_2->Location = System::Drawing::Point(50, 434);
			this->encoche11_2->Name = L"encoche11_2";
			this->encoche11_2->Size = System::Drawing::Size(35, 35);
			this->encoche11_2->TabIndex = 48;
			this->encoche11_2->TabStop = false;
			this->encoche11_2->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche11_2_Click);
			// 
			// encoche11_3
			// 
			this->encoche11_3->BackColor = System::Drawing::Color::Transparent;
			this->encoche11_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche11_3.BackgroundImage")));
			this->encoche11_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche11_3->Location = System::Drawing::Point(85, 434);
			this->encoche11_3->Name = L"encoche11_3";
			this->encoche11_3->Size = System::Drawing::Size(35, 35);
			this->encoche11_3->TabIndex = 47;
			this->encoche11_3->TabStop = false;
			this->encoche11_3->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche11_3_Click);
			// 
			// encoche11_4
			// 
			this->encoche11_4->BackColor = System::Drawing::Color::Transparent;
			this->encoche11_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche11_4.BackgroundImage")));
			this->encoche11_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche11_4->Location = System::Drawing::Point(120, 434);
			this->encoche11_4->Name = L"encoche11_4";
			this->encoche11_4->Size = System::Drawing::Size(35, 35);
			this->encoche11_4->TabIndex = 46;
			this->encoche11_4->TabStop = false;
			this->encoche11_4->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche11_4_Click);
			// 
			// encoche11_1
			// 
			this->encoche11_1->BackColor = System::Drawing::Color::Transparent;
			this->encoche11_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche11_1.BackgroundImage")));
			this->encoche11_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche11_1->Location = System::Drawing::Point(15, 434);
			this->encoche11_1->Name = L"encoche11_1";
			this->encoche11_1->Size = System::Drawing::Size(35, 35);
			this->encoche11_1->TabIndex = 45;
			this->encoche11_1->TabStop = false;
			this->encoche11_1->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche11_1_Click);
			// 
			// encoche10_2
			// 
			this->encoche10_2->BackColor = System::Drawing::Color::Transparent;
			this->encoche10_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche10_2.BackgroundImage")));
			this->encoche10_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche10_2->Location = System::Drawing::Point(50, 391);
			this->encoche10_2->Name = L"encoche10_2";
			this->encoche10_2->Size = System::Drawing::Size(35, 35);
			this->encoche10_2->TabIndex = 44;
			this->encoche10_2->TabStop = false;
			this->encoche10_2->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche10_2_Click);
			// 
			// encoche10_3
			// 
			this->encoche10_3->BackColor = System::Drawing::Color::Transparent;
			this->encoche10_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche10_3.BackgroundImage")));
			this->encoche10_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche10_3->Location = System::Drawing::Point(85, 391);
			this->encoche10_3->Name = L"encoche10_3";
			this->encoche10_3->Size = System::Drawing::Size(35, 35);
			this->encoche10_3->TabIndex = 43;
			this->encoche10_3->TabStop = false;
			this->encoche10_3->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche10_3_Click);
			// 
			// encoche10_4
			// 
			this->encoche10_4->BackColor = System::Drawing::Color::Transparent;
			this->encoche10_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche10_4.BackgroundImage")));
			this->encoche10_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche10_4->Location = System::Drawing::Point(120, 391);
			this->encoche10_4->Name = L"encoche10_4";
			this->encoche10_4->Size = System::Drawing::Size(35, 35);
			this->encoche10_4->TabIndex = 42;
			this->encoche10_4->TabStop = false;
			this->encoche10_4->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche10_4_Click);
			// 
			// encoche10_1
			// 
			this->encoche10_1->BackColor = System::Drawing::Color::Transparent;
			this->encoche10_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche10_1.BackgroundImage")));
			this->encoche10_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche10_1->Location = System::Drawing::Point(15, 391);
			this->encoche10_1->Name = L"encoche10_1";
			this->encoche10_1->Size = System::Drawing::Size(35, 35);
			this->encoche10_1->TabIndex = 41;
			this->encoche10_1->TabStop = false;
			this->encoche10_1->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche10_1_Click);
			// 
			// encoche9_2
			// 
			this->encoche9_2->BackColor = System::Drawing::Color::Transparent;
			this->encoche9_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche9_2.BackgroundImage")));
			this->encoche9_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche9_2->Location = System::Drawing::Point(50, 348);
			this->encoche9_2->Name = L"encoche9_2";
			this->encoche9_2->Size = System::Drawing::Size(35, 35);
			this->encoche9_2->TabIndex = 40;
			this->encoche9_2->TabStop = false;
			this->encoche9_2->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche9_2_Click);
			// 
			// encoche9_3
			// 
			this->encoche9_3->BackColor = System::Drawing::Color::Transparent;
			this->encoche9_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche9_3.BackgroundImage")));
			this->encoche9_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche9_3->Location = System::Drawing::Point(85, 348);
			this->encoche9_3->Name = L"encoche9_3";
			this->encoche9_3->Size = System::Drawing::Size(35, 35);
			this->encoche9_3->TabIndex = 39;
			this->encoche9_3->TabStop = false;
			this->encoche9_3->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche9_3_Click);
			// 
			// encoche9_4
			// 
			this->encoche9_4->BackColor = System::Drawing::Color::Transparent;
			this->encoche9_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche9_4.BackgroundImage")));
			this->encoche9_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche9_4->Location = System::Drawing::Point(120, 348);
			this->encoche9_4->Name = L"encoche9_4";
			this->encoche9_4->Size = System::Drawing::Size(35, 35);
			this->encoche9_4->TabIndex = 38;
			this->encoche9_4->TabStop = false;
			this->encoche9_4->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche9_4_Click);
			// 
			// encoche9_1
			// 
			this->encoche9_1->BackColor = System::Drawing::Color::Transparent;
			this->encoche9_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche9_1.BackgroundImage")));
			this->encoche9_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche9_1->Location = System::Drawing::Point(15, 348);
			this->encoche9_1->Name = L"encoche9_1";
			this->encoche9_1->Size = System::Drawing::Size(35, 35);
			this->encoche9_1->TabIndex = 37;
			this->encoche9_1->TabStop = false;
			this->encoche9_1->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche9_1_Click);
			// 
			// encoche8_2
			// 
			this->encoche8_2->BackColor = System::Drawing::Color::Transparent;
			this->encoche8_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche8_2.BackgroundImage")));
			this->encoche8_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche8_2->Location = System::Drawing::Point(50, 305);
			this->encoche8_2->Name = L"encoche8_2";
			this->encoche8_2->Size = System::Drawing::Size(35, 35);
			this->encoche8_2->TabIndex = 36;
			this->encoche8_2->TabStop = false;
			this->encoche8_2->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche8_2_Click);
			// 
			// encoche8_3
			// 
			this->encoche8_3->BackColor = System::Drawing::Color::Transparent;
			this->encoche8_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche8_3.BackgroundImage")));
			this->encoche8_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche8_3->Location = System::Drawing::Point(85, 305);
			this->encoche8_3->Name = L"encoche8_3";
			this->encoche8_3->Size = System::Drawing::Size(35, 35);
			this->encoche8_3->TabIndex = 35;
			this->encoche8_3->TabStop = false;
			this->encoche8_3->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche8_3_Click);
			// 
			// encoche8_4
			// 
			this->encoche8_4->BackColor = System::Drawing::Color::Transparent;
			this->encoche8_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche8_4.BackgroundImage")));
			this->encoche8_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche8_4->Location = System::Drawing::Point(120, 305);
			this->encoche8_4->Name = L"encoche8_4";
			this->encoche8_4->Size = System::Drawing::Size(35, 35);
			this->encoche8_4->TabIndex = 34;
			this->encoche8_4->TabStop = false;
			this->encoche8_4->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche8_4_Click);
			// 
			// encoche8_1
			// 
			this->encoche8_1->BackColor = System::Drawing::Color::Transparent;
			this->encoche8_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche8_1.BackgroundImage")));
			this->encoche8_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche8_1->Location = System::Drawing::Point(15, 305);
			this->encoche8_1->Name = L"encoche8_1";
			this->encoche8_1->Size = System::Drawing::Size(35, 35);
			this->encoche8_1->TabIndex = 33;
			this->encoche8_1->TabStop = false;
			this->encoche8_1->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche8_1_Click);
			// 
			// encoche7_2
			// 
			this->encoche7_2->BackColor = System::Drawing::Color::Transparent;
			this->encoche7_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche7_2.BackgroundImage")));
			this->encoche7_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche7_2->Location = System::Drawing::Point(50, 262);
			this->encoche7_2->Name = L"encoche7_2";
			this->encoche7_2->Size = System::Drawing::Size(35, 35);
			this->encoche7_2->TabIndex = 32;
			this->encoche7_2->TabStop = false;
			this->encoche7_2->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche7_2_Click);
			// 
			// encoche7_3
			// 
			this->encoche7_3->BackColor = System::Drawing::Color::Transparent;
			this->encoche7_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche7_3.BackgroundImage")));
			this->encoche7_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche7_3->Location = System::Drawing::Point(85, 262);
			this->encoche7_3->Name = L"encoche7_3";
			this->encoche7_3->Size = System::Drawing::Size(35, 35);
			this->encoche7_3->TabIndex = 31;
			this->encoche7_3->TabStop = false;
			this->encoche7_3->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche7_3_Click);
			// 
			// encoche7_4
			// 
			this->encoche7_4->BackColor = System::Drawing::Color::Transparent;
			this->encoche7_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche7_4.BackgroundImage")));
			this->encoche7_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche7_4->Location = System::Drawing::Point(120, 262);
			this->encoche7_4->Name = L"encoche7_4";
			this->encoche7_4->Size = System::Drawing::Size(35, 35);
			this->encoche7_4->TabIndex = 30;
			this->encoche7_4->TabStop = false;
			this->encoche7_4->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche7_4_Click);
			// 
			// encoche7_1
			// 
			this->encoche7_1->BackColor = System::Drawing::Color::Transparent;
			this->encoche7_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche7_1.BackgroundImage")));
			this->encoche7_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche7_1->Location = System::Drawing::Point(15, 262);
			this->encoche7_1->Name = L"encoche7_1";
			this->encoche7_1->Size = System::Drawing::Size(35, 35);
			this->encoche7_1->TabIndex = 29;
			this->encoche7_1->TabStop = false;
			this->encoche7_1->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche7_1_Click);
			// 
			// encoche6_2
			// 
			this->encoche6_2->BackColor = System::Drawing::Color::Transparent;
			this->encoche6_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche6_2.BackgroundImage")));
			this->encoche6_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche6_2->Location = System::Drawing::Point(50, 219);
			this->encoche6_2->Name = L"encoche6_2";
			this->encoche6_2->Size = System::Drawing::Size(35, 35);
			this->encoche6_2->TabIndex = 28;
			this->encoche6_2->TabStop = false;
			this->encoche6_2->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche6_2_Click);
			// 
			// encoche6_3
			// 
			this->encoche6_3->BackColor = System::Drawing::Color::Transparent;
			this->encoche6_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche6_3.BackgroundImage")));
			this->encoche6_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche6_3->Location = System::Drawing::Point(85, 219);
			this->encoche6_3->Name = L"encoche6_3";
			this->encoche6_3->Size = System::Drawing::Size(35, 35);
			this->encoche6_3->TabIndex = 27;
			this->encoche6_3->TabStop = false;
			this->encoche6_3->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche6_3_Click);
			// 
			// encoche6_4
			// 
			this->encoche6_4->BackColor = System::Drawing::Color::Transparent;
			this->encoche6_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche6_4.BackgroundImage")));
			this->encoche6_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche6_4->Location = System::Drawing::Point(120, 219);
			this->encoche6_4->Name = L"encoche6_4";
			this->encoche6_4->Size = System::Drawing::Size(35, 35);
			this->encoche6_4->TabIndex = 26;
			this->encoche6_4->TabStop = false;
			this->encoche6_4->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche6_4_Click);
			// 
			// encoche6_1
			// 
			this->encoche6_1->BackColor = System::Drawing::Color::Transparent;
			this->encoche6_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche6_1.BackgroundImage")));
			this->encoche6_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche6_1->Location = System::Drawing::Point(15, 219);
			this->encoche6_1->Name = L"encoche6_1";
			this->encoche6_1->Size = System::Drawing::Size(35, 35);
			this->encoche6_1->TabIndex = 25;
			this->encoche6_1->TabStop = false;
			this->encoche6_1->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche6_1_Click);
			// 
			// encoche5_2
			// 
			this->encoche5_2->BackColor = System::Drawing::Color::Transparent;
			this->encoche5_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche5_2.BackgroundImage")));
			this->encoche5_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche5_2->Location = System::Drawing::Point(50, 176);
			this->encoche5_2->Name = L"encoche5_2";
			this->encoche5_2->Size = System::Drawing::Size(35, 35);
			this->encoche5_2->TabIndex = 24;
			this->encoche5_2->TabStop = false;
			this->encoche5_2->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche5_2_Click);
			// 
			// encoche5_3
			// 
			this->encoche5_3->BackColor = System::Drawing::Color::Transparent;
			this->encoche5_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche5_3.BackgroundImage")));
			this->encoche5_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche5_3->Location = System::Drawing::Point(85, 176);
			this->encoche5_3->Name = L"encoche5_3";
			this->encoche5_3->Size = System::Drawing::Size(35, 35);
			this->encoche5_3->TabIndex = 23;
			this->encoche5_3->TabStop = false;
			this->encoche5_3->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche5_3_Click);
			// 
			// encoche5_4
			// 
			this->encoche5_4->BackColor = System::Drawing::Color::Transparent;
			this->encoche5_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche5_4.BackgroundImage")));
			this->encoche5_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche5_4->Location = System::Drawing::Point(120, 176);
			this->encoche5_4->Name = L"encoche5_4";
			this->encoche5_4->Size = System::Drawing::Size(35, 35);
			this->encoche5_4->TabIndex = 22;
			this->encoche5_4->TabStop = false;
			this->encoche5_4->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche5_4_Click);
			// 
			// encoche5_1
			// 
			this->encoche5_1->BackColor = System::Drawing::Color::Transparent;
			this->encoche5_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche5_1.BackgroundImage")));
			this->encoche5_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche5_1->Location = System::Drawing::Point(15, 176);
			this->encoche5_1->Name = L"encoche5_1";
			this->encoche5_1->Size = System::Drawing::Size(35, 35);
			this->encoche5_1->TabIndex = 21;
			this->encoche5_1->TabStop = false;
			this->encoche5_1->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche5_1_Click);
			// 
			// encoche4_2
			// 
			this->encoche4_2->BackColor = System::Drawing::Color::Transparent;
			this->encoche4_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche4_2.BackgroundImage")));
			this->encoche4_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche4_2->Location = System::Drawing::Point(50, 133);
			this->encoche4_2->Name = L"encoche4_2";
			this->encoche4_2->Size = System::Drawing::Size(35, 35);
			this->encoche4_2->TabIndex = 20;
			this->encoche4_2->TabStop = false;
			this->encoche4_2->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche4_2_Click);
			// 
			// encoche4_3
			// 
			this->encoche4_3->BackColor = System::Drawing::Color::Transparent;
			this->encoche4_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche4_3.BackgroundImage")));
			this->encoche4_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche4_3->Location = System::Drawing::Point(85, 133);
			this->encoche4_3->Name = L"encoche4_3";
			this->encoche4_3->Size = System::Drawing::Size(35, 35);
			this->encoche4_3->TabIndex = 19;
			this->encoche4_3->TabStop = false;
			this->encoche4_3->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche4_3_Click);
			// 
			// encoche4_4
			// 
			this->encoche4_4->BackColor = System::Drawing::Color::Transparent;
			this->encoche4_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche4_4.BackgroundImage")));
			this->encoche4_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche4_4->Location = System::Drawing::Point(120, 133);
			this->encoche4_4->Name = L"encoche4_4";
			this->encoche4_4->Size = System::Drawing::Size(35, 35);
			this->encoche4_4->TabIndex = 18;
			this->encoche4_4->TabStop = false;
			this->encoche4_4->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche4_4_Click);
			// 
			// encoche4_1
			// 
			this->encoche4_1->BackColor = System::Drawing::Color::Transparent;
			this->encoche4_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche4_1.BackgroundImage")));
			this->encoche4_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche4_1->Location = System::Drawing::Point(15, 133);
			this->encoche4_1->Name = L"encoche4_1";
			this->encoche4_1->Size = System::Drawing::Size(35, 35);
			this->encoche4_1->TabIndex = 17;
			this->encoche4_1->TabStop = false;
			this->encoche4_1->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche4_1_Click);
			// 
			// encoche3_2
			// 
			this->encoche3_2->BackColor = System::Drawing::Color::Transparent;
			this->encoche3_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche3_2.BackgroundImage")));
			this->encoche3_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche3_2->Location = System::Drawing::Point(50, 90);
			this->encoche3_2->Name = L"encoche3_2";
			this->encoche3_2->Size = System::Drawing::Size(35, 35);
			this->encoche3_2->TabIndex = 16;
			this->encoche3_2->TabStop = false;
			this->encoche3_2->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche3_2_Click);
			// 
			// encoche3_3
			// 
			this->encoche3_3->BackColor = System::Drawing::Color::Transparent;
			this->encoche3_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche3_3.BackgroundImage")));
			this->encoche3_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche3_3->Location = System::Drawing::Point(85, 90);
			this->encoche3_3->Name = L"encoche3_3";
			this->encoche3_3->Size = System::Drawing::Size(35, 35);
			this->encoche3_3->TabIndex = 15;
			this->encoche3_3->TabStop = false;
			this->encoche3_3->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche3_3_Click);
			// 
			// encoche3_4
			// 
			this->encoche3_4->BackColor = System::Drawing::Color::Transparent;
			this->encoche3_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche3_4.BackgroundImage")));
			this->encoche3_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche3_4->Location = System::Drawing::Point(120, 90);
			this->encoche3_4->Name = L"encoche3_4";
			this->encoche3_4->Size = System::Drawing::Size(35, 35);
			this->encoche3_4->TabIndex = 14;
			this->encoche3_4->TabStop = false;
			this->encoche3_4->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche3_4_Click);
			// 
			// encoche3_1
			// 
			this->encoche3_1->BackColor = System::Drawing::Color::Transparent;
			this->encoche3_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche3_1.BackgroundImage")));
			this->encoche3_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche3_1->Location = System::Drawing::Point(15, 90);
			this->encoche3_1->Name = L"encoche3_1";
			this->encoche3_1->Size = System::Drawing::Size(35, 35);
			this->encoche3_1->TabIndex = 13;
			this->encoche3_1->TabStop = false;
			this->encoche3_1->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche3_1_Click);
			// 
			// encoche2_4
			// 
			this->encoche2_4->BackColor = System::Drawing::Color::Transparent;
			this->encoche2_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche2_4.BackgroundImage")));
			this->encoche2_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche2_4->Location = System::Drawing::Point(120, 47);
			this->encoche2_4->Name = L"encoche2_4";
			this->encoche2_4->Size = System::Drawing::Size(35, 35);
			this->encoche2_4->TabIndex = 8;
			this->encoche2_4->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche2_4_Click);
			// 
			// encoche1_4
			// 
			this->encoche1_4->BackColor = System::Drawing::Color::Transparent;
			this->encoche1_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche1_4.BackgroundImage")));
			this->encoche1_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche1_4->Location = System::Drawing::Point(120, 4);
			this->encoche1_4->Name = L"encoche1_4";
			this->encoche1_4->Size = System::Drawing::Size(35, 35);
			this->encoche1_4->TabIndex = 4;
			this->encoche1_4->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche1_4_Click);
			// 
			// encoche2_3
			// 
			this->encoche2_3->BackColor = System::Drawing::Color::Transparent;
			this->encoche2_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche2_3.BackgroundImage")));
			this->encoche2_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche2_3->Location = System::Drawing::Point(85, 47);
			this->encoche2_3->Name = L"encoche2_3";
			this->encoche2_3->Size = System::Drawing::Size(35, 35);
			this->encoche2_3->TabIndex = 7;
			this->encoche2_3->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche2_3_Click);
			// 
			// encoche1_3
			// 
			this->encoche1_3->BackColor = System::Drawing::Color::Transparent;
			this->encoche1_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche1_3.BackgroundImage")));
			this->encoche1_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche1_3->Location = System::Drawing::Point(85, 4);
			this->encoche1_3->Name = L"encoche1_3";
			this->encoche1_3->Size = System::Drawing::Size(35, 35);
			this->encoche1_3->TabIndex = 3;
			this->encoche1_3->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche1_3_Click);
			// 
			// encoche2_2
			// 
			this->encoche2_2->BackColor = System::Drawing::Color::Transparent;
			this->encoche2_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche2_2.BackgroundImage")));
			this->encoche2_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche2_2->Location = System::Drawing::Point(50, 47);
			this->encoche2_2->Name = L"encoche2_2";
			this->encoche2_2->Size = System::Drawing::Size(35, 35);
			this->encoche2_2->TabIndex = 6;
			this->encoche2_2->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche2_2_Click);
			// 
			// encoche1_2
			// 
			this->encoche1_2->BackColor = System::Drawing::Color::Transparent;
			this->encoche1_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche1_2.BackgroundImage")));
			this->encoche1_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche1_2->Location = System::Drawing::Point(50, 4);
			this->encoche1_2->Name = L"encoche1_2";
			this->encoche1_2->Size = System::Drawing::Size(35, 35);
			this->encoche1_2->TabIndex = 2;
			this->encoche1_2->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche1_2_Click);
			// 
			// encoche2_1
			// 
			this->encoche2_1->BackColor = System::Drawing::Color::Transparent;
			this->encoche2_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche2_1.BackgroundImage")));
			this->encoche2_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche2_1->Location = System::Drawing::Point(15, 47);
			this->encoche2_1->Name = L"encoche2_1";
			this->encoche2_1->Size = System::Drawing::Size(35, 35);
			this->encoche2_1->TabIndex = 5;
			this->encoche2_1->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche2_1_Click);
			// 
			// encoche1_1
			// 
			this->encoche1_1->BackColor = System::Drawing::Color::Transparent;
			this->encoche1_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"encoche1_1.BackgroundImage")));
			this->encoche1_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->encoche1_1->Location = System::Drawing::Point(15, 4);
			this->encoche1_1->Name = L"encoche1_1";
			this->encoche1_1->Size = System::Drawing::Size(35, 35);
			this->encoche1_1->TabIndex = 1;
			this->encoche1_1->Click += gcnew System::EventHandler(this, &Nouvellepartie::encoche1_1_Click);
			// 
			// panel_0
			// 
			this->panel_0->BackColor = System::Drawing::Color::Transparent;
			this->panel_0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel_0.BackgroundImage")));
			this->panel_0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_0->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_0->Location = System::Drawing::Point(209, 240);
			this->panel_0->Name = L"panel_0";
			this->panel_0->Size = System::Drawing::Size(30, 28);
			this->panel_0->TabIndex = 1;
			// 
			// textBo5
			// 
			this->textBo5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBo5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBo5->Location = System::Drawing::Point(15, 240);
			this->textBo5->Name = L"textBo5";
			this->textBo5->Size = System::Drawing::Size(190, 30);
			this->textBo5->TabIndex = 13;
			this->textBo5->Text = L"Vous tenez le pion  ";
			this->textBo5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel31
			// 
			this->panel31->BackColor = System::Drawing::Color::Transparent;
			this->panel31->Controls->Add(this->panel35);
			this->panel31->Controls->Add(this->panel34);
			this->panel31->Controls->Add(this->panel33);
			this->panel31->Controls->Add(this->panel32);
			this->panel31->Location = System::Drawing::Point(524, 44);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(170, 40);
			this->panel31->TabIndex = 14;
			// 
			// panel35
			// 
			this->panel35->BackColor = System::Drawing::Color::Transparent;
			this->panel35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel35.BackgroundImage")));
			this->panel35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel35->Location = System::Drawing::Point(124, 3);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(35, 35);
			this->panel35->TabIndex = 0;
			// 
			// panel34
			// 
			this->panel34->BackColor = System::Drawing::Color::Transparent;
			this->panel34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel34.BackgroundImage")));
			this->panel34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel34->Location = System::Drawing::Point(86, 3);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(35, 35);
			this->panel34->TabIndex = 1;
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::Color::Transparent;
			this->panel33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel33.BackgroundImage")));
			this->panel33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel33->Location = System::Drawing::Point(48, 3);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(35, 35);
			this->panel33->TabIndex = 2;
			// 
			// panel32
			// 
			this->panel32->BackColor = System::Drawing::Color::Transparent;
			this->panel32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel32.BackgroundImage")));
			this->panel32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel32->Location = System::Drawing::Point(10, 3);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(35, 35);
			this->panel32->TabIndex = 3;
			// 
			// compareligne1
			// 
			this->compareligne1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->compareligne1->Location = System::Drawing::Point(700, 50);
			this->compareligne1->Name = L"compareligne1";
			this->compareligne1->Size = System::Drawing::Size(100, 30);
			this->compareligne1->TabIndex = 15;
			this->compareligne1->Text = L"Compare";
			this->compareligne1->UseVisualStyleBackColor = true;
			this->compareligne1->Click += gcnew System::EventHandler(this, &Nouvellepartie::compareligne1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Nouvellepartie::timer1_Tick);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(30, 365);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(134, 22);
			this->textBox5->TabIndex = 16;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(30, 330);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(70, 30);
			this->textBox6->TabIndex = 17;
			this->textBox6->Text = L"Chrono";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// compareligne2
			// 
			this->compareligne2->Location = System::Drawing::Point(700, 90);
			this->compareligne2->Name = L"compareligne2";
			this->compareligne2->Size = System::Drawing::Size(100, 30);
			this->compareligne2->TabIndex = 18;
			this->compareligne2->Text = L"Compare";
			this->compareligne2->UseVisualStyleBackColor = true;
			this->compareligne2->Click += gcnew System::EventHandler(this, &Nouvellepartie::compareligne2_Click);
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::Transparent;
			this->panel23->Controls->Add(this->panel24);
			this->panel23->Controls->Add(this->panel25);
			this->panel23->Controls->Add(this->panel26);
			this->panel23->Controls->Add(this->panel27);
			this->panel23->Location = System::Drawing::Point(524, 87);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(170, 40);
			this->panel23->TabIndex = 15;
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::Transparent;
			this->panel24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel24.BackgroundImage")));
			this->panel24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel24->Location = System::Drawing::Point(124, 3);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(35, 35);
			this->panel24->TabIndex = 0;
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::Transparent;
			this->panel25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel25.BackgroundImage")));
			this->panel25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel25->Location = System::Drawing::Point(86, 3);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(35, 35);
			this->panel25->TabIndex = 1;
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::Transparent;
			this->panel26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel26.BackgroundImage")));
			this->panel26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel26->Location = System::Drawing::Point(48, 3);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(35, 35);
			this->panel26->TabIndex = 2;
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::Transparent;
			this->panel27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel27.BackgroundImage")));
			this->panel27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel27->Location = System::Drawing::Point(10, 3);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(35, 35);
			this->panel27->TabIndex = 3;
			// 
			// compareligne3
			// 
			this->compareligne3->Location = System::Drawing::Point(700, 137);
			this->compareligne3->Name = L"compareligne3";
			this->compareligne3->Size = System::Drawing::Size(100, 30);
			this->compareligne3->TabIndex = 19;
			this->compareligne3->Text = L"Compare";
			this->compareligne3->UseVisualStyleBackColor = true;
			this->compareligne3->Click += gcnew System::EventHandler(this, &Nouvellepartie::compareligne3_Click);
			// 
			// compareligne4
			// 
			this->compareligne4->Location = System::Drawing::Point(700, 175);
			this->compareligne4->Name = L"compareligne4";
			this->compareligne4->Size = System::Drawing::Size(100, 30);
			this->compareligne4->TabIndex = 21;
			this->compareligne4->Text = L"Compare";
			this->compareligne4->UseVisualStyleBackColor = true;
			this->compareligne4->Click += gcnew System::EventHandler(this, &Nouvellepartie::compareligne4_Click);
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::Color::Transparent;
			this->panel28->Controls->Add(this->resul3_4);
			this->panel28->Controls->Add(this->resul3_3);
			this->panel28->Controls->Add(this->resul3_2);
			this->panel28->Controls->Add(this->resul3_1);
			this->panel28->Location = System::Drawing::Point(524, 130);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(170, 40);
			this->panel28->TabIndex = 16;
			// 
			// resul3_4
			// 
			this->resul3_4->BackColor = System::Drawing::Color::Transparent;
			this->resul3_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul3_4.BackgroundImage")));
			this->resul3_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul3_4->Location = System::Drawing::Point(124, 3);
			this->resul3_4->Name = L"resul3_4";
			this->resul3_4->Size = System::Drawing::Size(35, 35);
			this->resul3_4->TabIndex = 0;
			// 
			// resul3_3
			// 
			this->resul3_3->BackColor = System::Drawing::Color::Transparent;
			this->resul3_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul3_3.BackgroundImage")));
			this->resul3_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul3_3->Location = System::Drawing::Point(86, 3);
			this->resul3_3->Name = L"resul3_3";
			this->resul3_3->Size = System::Drawing::Size(35, 35);
			this->resul3_3->TabIndex = 1;
			// 
			// resul3_2
			// 
			this->resul3_2->BackColor = System::Drawing::Color::Transparent;
			this->resul3_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul3_2.BackgroundImage")));
			this->resul3_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul3_2->Location = System::Drawing::Point(48, 3);
			this->resul3_2->Name = L"resul3_2";
			this->resul3_2->Size = System::Drawing::Size(35, 35);
			this->resul3_2->TabIndex = 2;
			// 
			// resul3_1
			// 
			this->resul3_1->BackColor = System::Drawing::Color::Transparent;
			this->resul3_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul3_1.BackgroundImage")));
			this->resul3_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul3_1->Location = System::Drawing::Point(10, 3);
			this->resul3_1->Name = L"resul3_1";
			this->resul3_1->Size = System::Drawing::Size(35, 35);
			this->resul3_1->TabIndex = 3;
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::Color::Transparent;
			this->panel29->Controls->Add(this->resul4_4);
			this->panel29->Controls->Add(this->resul4_3);
			this->panel29->Controls->Add(this->resul4_2);
			this->panel29->Controls->Add(this->resul4_1);
			this->panel29->Location = System::Drawing::Point(524, 173);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(170, 40);
			this->panel29->TabIndex = 17;
			// 
			// resul4_4
			// 
			this->resul4_4->BackColor = System::Drawing::Color::Transparent;
			this->resul4_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul4_4.BackgroundImage")));
			this->resul4_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul4_4->Location = System::Drawing::Point(124, 3);
			this->resul4_4->Name = L"resul4_4";
			this->resul4_4->Size = System::Drawing::Size(35, 35);
			this->resul4_4->TabIndex = 0;
			// 
			// resul4_3
			// 
			this->resul4_3->BackColor = System::Drawing::Color::Transparent;
			this->resul4_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul4_3.BackgroundImage")));
			this->resul4_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul4_3->Location = System::Drawing::Point(86, 3);
			this->resul4_3->Name = L"resul4_3";
			this->resul4_3->Size = System::Drawing::Size(35, 35);
			this->resul4_3->TabIndex = 1;
			// 
			// resul4_2
			// 
			this->resul4_2->BackColor = System::Drawing::Color::Transparent;
			this->resul4_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul4_2.BackgroundImage")));
			this->resul4_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul4_2->Location = System::Drawing::Point(48, 3);
			this->resul4_2->Name = L"resul4_2";
			this->resul4_2->Size = System::Drawing::Size(35, 35);
			this->resul4_2->TabIndex = 2;
			// 
			// resul4_1
			// 
			this->resul4_1->BackColor = System::Drawing::Color::Transparent;
			this->resul4_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul4_1.BackgroundImage")));
			this->resul4_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul4_1->Location = System::Drawing::Point(10, 3);
			this->resul4_1->Name = L"resul4_1";
			this->resul4_1->Size = System::Drawing::Size(35, 35);
			this->resul4_1->TabIndex = 3;
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::Color::Transparent;
			this->panel30->Controls->Add(this->resul5_4);
			this->panel30->Controls->Add(this->resul5_3);
			this->panel30->Controls->Add(this->resul5_2);
			this->panel30->Controls->Add(this->resul5_1);
			this->panel30->Location = System::Drawing::Point(524, 215);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(170, 40);
			this->panel30->TabIndex = 18;
			// 
			// resul5_4
			// 
			this->resul5_4->BackColor = System::Drawing::Color::Transparent;
			this->resul5_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul5_4.BackgroundImage")));
			this->resul5_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul5_4->Location = System::Drawing::Point(124, 3);
			this->resul5_4->Name = L"resul5_4";
			this->resul5_4->Size = System::Drawing::Size(35, 35);
			this->resul5_4->TabIndex = 0;
			// 
			// resul5_3
			// 
			this->resul5_3->BackColor = System::Drawing::Color::Transparent;
			this->resul5_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul5_3.BackgroundImage")));
			this->resul5_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul5_3->Location = System::Drawing::Point(86, 3);
			this->resul5_3->Name = L"resul5_3";
			this->resul5_3->Size = System::Drawing::Size(35, 35);
			this->resul5_3->TabIndex = 1;
			// 
			// resul5_2
			// 
			this->resul5_2->BackColor = System::Drawing::Color::Transparent;
			this->resul5_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul5_2.BackgroundImage")));
			this->resul5_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul5_2->Location = System::Drawing::Point(48, 3);
			this->resul5_2->Name = L"resul5_2";
			this->resul5_2->Size = System::Drawing::Size(35, 35);
			this->resul5_2->TabIndex = 2;
			// 
			// resul5_1
			// 
			this->resul5_1->BackColor = System::Drawing::Color::Transparent;
			this->resul5_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul5_1.BackgroundImage")));
			this->resul5_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul5_1->Location = System::Drawing::Point(10, 3);
			this->resul5_1->Name = L"resul5_1";
			this->resul5_1->Size = System::Drawing::Size(35, 35);
			this->resul5_1->TabIndex = 3;
			// 
			// compareligne5
			// 
			this->compareligne5->Location = System::Drawing::Point(700, 220);
			this->compareligne5->Name = L"compareligne5";
			this->compareligne5->Size = System::Drawing::Size(100, 30);
			this->compareligne5->TabIndex = 22;
			this->compareligne5->Text = L"Compare";
			this->compareligne5->UseVisualStyleBackColor = true;
			this->compareligne5->Click += gcnew System::EventHandler(this, &Nouvellepartie::compareligne5_Click);
			// 
			// panel36
			// 
			this->panel36->BackColor = System::Drawing::Color::Transparent;
			this->panel36->Controls->Add(this->resul6_4);
			this->panel36->Controls->Add(this->resul6_3);
			this->panel36->Controls->Add(this->resul6_2);
			this->panel36->Controls->Add(this->resul6_1);
			this->panel36->Location = System::Drawing::Point(524, 258);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(170, 40);
			this->panel36->TabIndex = 19;
			// 
			// resul6_4
			// 
			this->resul6_4->BackColor = System::Drawing::Color::Transparent;
			this->resul6_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul6_4.BackgroundImage")));
			this->resul6_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul6_4->Location = System::Drawing::Point(124, 3);
			this->resul6_4->Name = L"resul6_4";
			this->resul6_4->Size = System::Drawing::Size(35, 35);
			this->resul6_4->TabIndex = 0;
			// 
			// resul6_3
			// 
			this->resul6_3->BackColor = System::Drawing::Color::Transparent;
			this->resul6_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul6_3.BackgroundImage")));
			this->resul6_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul6_3->Location = System::Drawing::Point(86, 3);
			this->resul6_3->Name = L"resul6_3";
			this->resul6_3->Size = System::Drawing::Size(35, 35);
			this->resul6_3->TabIndex = 1;
			// 
			// resul6_2
			// 
			this->resul6_2->BackColor = System::Drawing::Color::Transparent;
			this->resul6_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul6_2.BackgroundImage")));
			this->resul6_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul6_2->Location = System::Drawing::Point(48, 3);
			this->resul6_2->Name = L"resul6_2";
			this->resul6_2->Size = System::Drawing::Size(35, 35);
			this->resul6_2->TabIndex = 2;
			// 
			// resul6_1
			// 
			this->resul6_1->BackColor = System::Drawing::Color::Transparent;
			this->resul6_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul6_1.BackgroundImage")));
			this->resul6_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul6_1->Location = System::Drawing::Point(10, 3);
			this->resul6_1->Name = L"resul6_1";
			this->resul6_1->Size = System::Drawing::Size(35, 35);
			this->resul6_1->TabIndex = 3;
			// 
			// compareligne6
			// 
			this->compareligne6->Location = System::Drawing::Point(700, 260);
			this->compareligne6->Name = L"compareligne6";
			this->compareligne6->Size = System::Drawing::Size(100, 30);
			this->compareligne6->TabIndex = 23;
			this->compareligne6->Text = L"Compare";
			this->compareligne6->UseVisualStyleBackColor = true;
			this->compareligne6->Click += gcnew System::EventHandler(this, &Nouvellepartie::compareligne6_Click);
			// 
			// compareligne7
			// 
			this->compareligne7->Location = System::Drawing::Point(700, 310);
			this->compareligne7->Name = L"compareligne7";
			this->compareligne7->Size = System::Drawing::Size(100, 30);
			this->compareligne7->TabIndex = 25;
			this->compareligne7->Text = L"Compare";
			this->compareligne7->UseVisualStyleBackColor = true;
			this->compareligne7->Click += gcnew System::EventHandler(this, &Nouvellepartie::compareligne7_Click);
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::Transparent;
			this->panel15->Controls->Add(this->resul7_4);
			this->panel15->Controls->Add(this->resul7_3);
			this->panel15->Controls->Add(this->resul7_2);
			this->panel15->Controls->Add(this->resul7_1);
			this->panel15->Location = System::Drawing::Point(524, 300);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(170, 40);
			this->panel15->TabIndex = 24;
			// 
			// resul7_4
			// 
			this->resul7_4->BackColor = System::Drawing::Color::Transparent;
			this->resul7_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul7_4.BackgroundImage")));
			this->resul7_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul7_4->Location = System::Drawing::Point(124, 3);
			this->resul7_4->Name = L"resul7_4";
			this->resul7_4->Size = System::Drawing::Size(35, 35);
			this->resul7_4->TabIndex = 0;
			// 
			// resul7_3
			// 
			this->resul7_3->BackColor = System::Drawing::Color::Transparent;
			this->resul7_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul7_3.BackgroundImage")));
			this->resul7_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul7_3->Location = System::Drawing::Point(86, 3);
			this->resul7_3->Name = L"resul7_3";
			this->resul7_3->Size = System::Drawing::Size(35, 35);
			this->resul7_3->TabIndex = 1;
			// 
			// resul7_2
			// 
			this->resul7_2->BackColor = System::Drawing::Color::Transparent;
			this->resul7_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul7_2.BackgroundImage")));
			this->resul7_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul7_2->Location = System::Drawing::Point(48, 3);
			this->resul7_2->Name = L"resul7_2";
			this->resul7_2->Size = System::Drawing::Size(35, 35);
			this->resul7_2->TabIndex = 2;
			// 
			// resul7_1
			// 
			this->resul7_1->BackColor = System::Drawing::Color::Transparent;
			this->resul7_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul7_1.BackgroundImage")));
			this->resul7_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul7_1->Location = System::Drawing::Point(10, 3);
			this->resul7_1->Name = L"resul7_1";
			this->resul7_1->Size = System::Drawing::Size(35, 35);
			this->resul7_1->TabIndex = 3;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::Transparent;
			this->panel16->Controls->Add(this->resul8_4);
			this->panel16->Controls->Add(this->resul8_3);
			this->panel16->Controls->Add(this->resul8_2);
			this->panel16->Controls->Add(this->resul8_1);
			this->panel16->Location = System::Drawing::Point(524, 344);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(170, 40);
			this->panel16->TabIndex = 25;
			// 
			// resul8_4
			// 
			this->resul8_4->BackColor = System::Drawing::Color::Transparent;
			this->resul8_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul8_4.BackgroundImage")));
			this->resul8_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul8_4->Location = System::Drawing::Point(124, 3);
			this->resul8_4->Name = L"resul8_4";
			this->resul8_4->Size = System::Drawing::Size(35, 35);
			this->resul8_4->TabIndex = 0;
			// 
			// resul8_3
			// 
			this->resul8_3->BackColor = System::Drawing::Color::Transparent;
			this->resul8_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul8_3.BackgroundImage")));
			this->resul8_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul8_3->Location = System::Drawing::Point(86, 3);
			this->resul8_3->Name = L"resul8_3";
			this->resul8_3->Size = System::Drawing::Size(35, 35);
			this->resul8_3->TabIndex = 1;
			// 
			// resul8_2
			// 
			this->resul8_2->BackColor = System::Drawing::Color::Transparent;
			this->resul8_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul8_2.BackgroundImage")));
			this->resul8_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul8_2->Location = System::Drawing::Point(48, 3);
			this->resul8_2->Name = L"resul8_2";
			this->resul8_2->Size = System::Drawing::Size(35, 35);
			this->resul8_2->TabIndex = 2;
			// 
			// resul8_1
			// 
			this->resul8_1->BackColor = System::Drawing::Color::Transparent;
			this->resul8_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul8_1.BackgroundImage")));
			this->resul8_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul8_1->Location = System::Drawing::Point(10, 3);
			this->resul8_1->Name = L"resul8_1";
			this->resul8_1->Size = System::Drawing::Size(35, 35);
			this->resul8_1->TabIndex = 3;
			// 
			// compareligne8
			// 
			this->compareligne8->Location = System::Drawing::Point(700, 350);
			this->compareligne8->Name = L"compareligne8";
			this->compareligne8->Size = System::Drawing::Size(100, 30);
			this->compareligne8->TabIndex = 26;
			this->compareligne8->Text = L"Compare";
			this->compareligne8->UseVisualStyleBackColor = true;
			this->compareligne8->Click += gcnew System::EventHandler(this, &Nouvellepartie::compareligne8_Click);
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::Transparent;
			this->panel17->Controls->Add(this->resul9_4);
			this->panel17->Controls->Add(this->resul9_3);
			this->panel17->Controls->Add(this->resul9_2);
			this->panel17->Controls->Add(this->resul9_1);
			this->panel17->Location = System::Drawing::Point(524, 387);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(170, 40);
			this->panel17->TabIndex = 26;
			// 
			// resul9_4
			// 
			this->resul9_4->BackColor = System::Drawing::Color::Transparent;
			this->resul9_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul9_4.BackgroundImage")));
			this->resul9_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul9_4->Location = System::Drawing::Point(124, 3);
			this->resul9_4->Name = L"resul9_4";
			this->resul9_4->Size = System::Drawing::Size(35, 35);
			this->resul9_4->TabIndex = 0;
			// 
			// resul9_3
			// 
			this->resul9_3->BackColor = System::Drawing::Color::Transparent;
			this->resul9_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul9_3.BackgroundImage")));
			this->resul9_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul9_3->Location = System::Drawing::Point(86, 3);
			this->resul9_3->Name = L"resul9_3";
			this->resul9_3->Size = System::Drawing::Size(35, 35);
			this->resul9_3->TabIndex = 1;
			// 
			// resul9_2
			// 
			this->resul9_2->BackColor = System::Drawing::Color::Transparent;
			this->resul9_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul9_2.BackgroundImage")));
			this->resul9_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul9_2->Location = System::Drawing::Point(48, 3);
			this->resul9_2->Name = L"resul9_2";
			this->resul9_2->Size = System::Drawing::Size(35, 35);
			this->resul9_2->TabIndex = 2;
			// 
			// resul9_1
			// 
			this->resul9_1->BackColor = System::Drawing::Color::Transparent;
			this->resul9_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul9_1.BackgroundImage")));
			this->resul9_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul9_1->Location = System::Drawing::Point(10, 3);
			this->resul9_1->Name = L"resul9_1";
			this->resul9_1->Size = System::Drawing::Size(35, 35);
			this->resul9_1->TabIndex = 3;
			// 
			// compareligne9
			// 
			this->compareligne9->Location = System::Drawing::Point(700, 395);
			this->compareligne9->Name = L"compareligne9";
			this->compareligne9->Size = System::Drawing::Size(100, 30);
			this->compareligne9->TabIndex = 27;
			this->compareligne9->Text = L"Compare";
			this->compareligne9->UseVisualStyleBackColor = true;
			this->compareligne9->Click += gcnew System::EventHandler(this, &Nouvellepartie::compareligne9_Click);
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::Transparent;
			this->panel18->Controls->Add(this->resul10_4);
			this->panel18->Controls->Add(this->resul10_3);
			this->panel18->Controls->Add(this->resul10_2);
			this->panel18->Controls->Add(this->resul10_1);
			this->panel18->Location = System::Drawing::Point(524, 430);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(170, 40);
			this->panel18->TabIndex = 27;
			// 
			// resul10_4
			// 
			this->resul10_4->BackColor = System::Drawing::Color::Transparent;
			this->resul10_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul10_4.BackgroundImage")));
			this->resul10_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul10_4->Location = System::Drawing::Point(124, 3);
			this->resul10_4->Name = L"resul10_4";
			this->resul10_4->Size = System::Drawing::Size(35, 35);
			this->resul10_4->TabIndex = 0;
			// 
			// resul10_3
			// 
			this->resul10_3->BackColor = System::Drawing::Color::Transparent;
			this->resul10_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul10_3.BackgroundImage")));
			this->resul10_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul10_3->Location = System::Drawing::Point(86, 3);
			this->resul10_3->Name = L"resul10_3";
			this->resul10_3->Size = System::Drawing::Size(35, 35);
			this->resul10_3->TabIndex = 1;
			// 
			// resul10_2
			// 
			this->resul10_2->BackColor = System::Drawing::Color::Transparent;
			this->resul10_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul10_2.BackgroundImage")));
			this->resul10_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul10_2->Location = System::Drawing::Point(48, 3);
			this->resul10_2->Name = L"resul10_2";
			this->resul10_2->Size = System::Drawing::Size(35, 35);
			this->resul10_2->TabIndex = 2;
			// 
			// resul10_1
			// 
			this->resul10_1->BackColor = System::Drawing::Color::Transparent;
			this->resul10_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul10_1.BackgroundImage")));
			this->resul10_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul10_1->Location = System::Drawing::Point(10, 3);
			this->resul10_1->Name = L"resul10_1";
			this->resul10_1->Size = System::Drawing::Size(35, 35);
			this->resul10_1->TabIndex = 3;
			// 
			// compareligne10
			// 
			this->compareligne10->Location = System::Drawing::Point(700, 440);
			this->compareligne10->Name = L"compareligne10";
			this->compareligne10->Size = System::Drawing::Size(100, 30);
			this->compareligne10->TabIndex = 28;
			this->compareligne10->Text = L"Compare";
			this->compareligne10->UseVisualStyleBackColor = true;
			this->compareligne10->Click += gcnew System::EventHandler(this, &Nouvellepartie::compareligne10_Click);
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::Transparent;
			this->panel19->Controls->Add(this->resul11_4);
			this->panel19->Controls->Add(this->resul11_3);
			this->panel19->Controls->Add(this->resul11_2);
			this->panel19->Controls->Add(this->resul11_1);
			this->panel19->Location = System::Drawing::Point(524, 473);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(170, 40);
			this->panel19->TabIndex = 28;
			// 
			// resul11_4
			// 
			this->resul11_4->BackColor = System::Drawing::Color::Transparent;
			this->resul11_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul11_4.BackgroundImage")));
			this->resul11_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul11_4->Location = System::Drawing::Point(124, 3);
			this->resul11_4->Name = L"resul11_4";
			this->resul11_4->Size = System::Drawing::Size(35, 35);
			this->resul11_4->TabIndex = 0;
			// 
			// resul11_3
			// 
			this->resul11_3->BackColor = System::Drawing::Color::Transparent;
			this->resul11_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul11_3.BackgroundImage")));
			this->resul11_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul11_3->Location = System::Drawing::Point(86, 3);
			this->resul11_3->Name = L"resul11_3";
			this->resul11_3->Size = System::Drawing::Size(35, 35);
			this->resul11_3->TabIndex = 1;
			// 
			// resul11_2
			// 
			this->resul11_2->BackColor = System::Drawing::Color::Transparent;
			this->resul11_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul11_2.BackgroundImage")));
			this->resul11_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul11_2->Location = System::Drawing::Point(48, 3);
			this->resul11_2->Name = L"resul11_2";
			this->resul11_2->Size = System::Drawing::Size(35, 35);
			this->resul11_2->TabIndex = 2;
			// 
			// resul11_1
			// 
			this->resul11_1->BackColor = System::Drawing::Color::Transparent;
			this->resul11_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul11_1.BackgroundImage")));
			this->resul11_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul11_1->Location = System::Drawing::Point(10, 3);
			this->resul11_1->Name = L"resul11_1";
			this->resul11_1->Size = System::Drawing::Size(35, 35);
			this->resul11_1->TabIndex = 3;
			// 
			// compareligne11
			// 
			this->compareligne11->Location = System::Drawing::Point(700, 480);
			this->compareligne11->Name = L"compareligne11";
			this->compareligne11->Size = System::Drawing::Size(100, 30);
			this->compareligne11->TabIndex = 29;
			this->compareligne11->Text = L"Compare";
			this->compareligne11->UseVisualStyleBackColor = true;
			this->compareligne11->Click += gcnew System::EventHandler(this, &Nouvellepartie::compareligne11_Click);
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::Transparent;
			this->panel20->Controls->Add(this->resul12_4);
			this->panel20->Controls->Add(this->resul12_3);
			this->panel20->Controls->Add(this->resul12_2);
			this->panel20->Controls->Add(this->resul12_1);
			this->panel20->Location = System::Drawing::Point(524, 517);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(170, 40);
			this->panel20->TabIndex = 29;
			// 
			// resul12_4
			// 
			this->resul12_4->BackColor = System::Drawing::Color::Transparent;
			this->resul12_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul12_4.BackgroundImage")));
			this->resul12_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul12_4->Location = System::Drawing::Point(124, 3);
			this->resul12_4->Name = L"resul12_4";
			this->resul12_4->Size = System::Drawing::Size(35, 35);
			this->resul12_4->TabIndex = 0;
			// 
			// resul12_3
			// 
			this->resul12_3->BackColor = System::Drawing::Color::Transparent;
			this->resul12_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul12_3.BackgroundImage")));
			this->resul12_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul12_3->Location = System::Drawing::Point(86, 3);
			this->resul12_3->Name = L"resul12_3";
			this->resul12_3->Size = System::Drawing::Size(35, 35);
			this->resul12_3->TabIndex = 1;
			// 
			// resul12_2
			// 
			this->resul12_2->BackColor = System::Drawing::Color::Transparent;
			this->resul12_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul12_2.BackgroundImage")));
			this->resul12_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul12_2->Location = System::Drawing::Point(48, 3);
			this->resul12_2->Name = L"resul12_2";
			this->resul12_2->Size = System::Drawing::Size(35, 35);
			this->resul12_2->TabIndex = 2;
			// 
			// resul12_1
			// 
			this->resul12_1->BackColor = System::Drawing::Color::Transparent;
			this->resul12_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resul12_1.BackgroundImage")));
			this->resul12_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->resul12_1->Location = System::Drawing::Point(10, 3);
			this->resul12_1->Name = L"resul12_1";
			this->resul12_1->Size = System::Drawing::Size(35, 35);
			this->resul12_1->TabIndex = 3;
			// 
			// compareligne12
			// 
			this->compareligne12->Location = System::Drawing::Point(700, 520);
			this->compareligne12->Name = L"compareligne12";
			this->compareligne12->Size = System::Drawing::Size(100, 30);
			this->compareligne12->TabIndex = 30;
			this->compareligne12->Text = L"Compare";
			this->compareligne12->UseVisualStyleBackColor = true;
			this->compareligne12->Click += gcnew System::EventHandler(this, &Nouvellepartie::compareligne12_Click);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox7->Location = System::Drawing::Point(315, 51);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(20, 28);
			this->textBox7->TabIndex = 31;
			this->textBox7->Text = L"1 ";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox8->Location = System::Drawing::Point(315, 94);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(20, 28);
			this->textBox8->TabIndex = 32;
			this->textBox8->Text = L"2";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox9->Location = System::Drawing::Point(315, 183);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(20, 28);
			this->textBox9->TabIndex = 33;
			this->textBox9->Text = L"4";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox10->Location = System::Drawing::Point(315, 141);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(20, 28);
			this->textBox10->TabIndex = 34;
			this->textBox10->Text = L"3";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox11->Location = System::Drawing::Point(315, 304);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(20, 28);
			this->textBox11->TabIndex = 38;
			this->textBox11->Text = L"7";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox12->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox12->Location = System::Drawing::Point(315, 346);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(20, 28);
			this->textBox12->TabIndex = 37;
			this->textBox12->Text = L"8";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox13->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox13->Location = System::Drawing::Point(315, 267);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(20, 28);
			this->textBox13->TabIndex = 36;
			this->textBox13->Text = L"6";
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox14->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox14->Location = System::Drawing::Point(315, 224);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(20, 28);
			this->textBox14->TabIndex = 35;
			this->textBox14->Text = L"5";
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox15->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox15->Location = System::Drawing::Point(315, 479);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(20, 28);
			this->textBox15->TabIndex = 42;
			this->textBox15->Text = L"11";
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox16->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox16->Location = System::Drawing::Point(315, 521);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(23, 30);
			this->textBox16->TabIndex = 41;
			this->textBox16->Text = L"12";
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox17->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox17->Location = System::Drawing::Point(315, 432);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(20, 28);
			this->textBox17->TabIndex = 40;
			this->textBox17->Text = L"10";
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox18->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox18->Location = System::Drawing::Point(315, 389);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(20, 28);
			this->textBox18->TabIndex = 39;
			this->textBox18->Text = L"9";
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(106, 287);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(30, 30);
			this->textBox19->TabIndex = 43;
			// 
			// textBox20
			// 
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox20->Location = System::Drawing::Point(30, 287);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(70, 30);
			this->textBox20->TabIndex = 44;
			this->textBox20->Text = L"Limite";
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Nouvellepartie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(832, 573);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->compareligne12);
			this->Controls->Add(this->panel20);
			this->Controls->Add(this->compareligne11);
			this->Controls->Add(this->panel19);
			this->Controls->Add(this->compareligne10);
			this->Controls->Add(this->panel18);
			this->Controls->Add(this->compareligne9);
			this->Controls->Add(this->panel17);
			this->Controls->Add(this->compareligne8);
			this->Controls->Add(this->panel16);
			this->Controls->Add(this->compareligne7);
			this->Controls->Add(this->compareligne6);
			this->Controls->Add(this->panel15);
			this->Controls->Add(this->panel36);
			this->Controls->Add(this->compareligne5);
			this->Controls->Add(this->panel30);
			this->Controls->Add(this->panel29);
			this->Controls->Add(this->panel28);
			this->Controls->Add(this->compareligne4);
			this->Controls->Add(this->compareligne3);
			this->Controls->Add(this->panel23);
			this->Controls->Add(this->compareligne2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->compareligne1);
			this->Controls->Add(this->panel31);
			this->Controls->Add(this->textBo5);
			this->Controls->Add(this->panel_0);
			this->Controls->Add(this->panel14);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->Solution);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->txtHeure);
			this->Name = L"Nouvellepartie";
			this->Text = L"Nouvellepartie";
			this->Load += gcnew System::EventHandler(this, &Nouvellepartie::Nouvellepartie_Load);
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche12_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche12_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche12_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche12_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche11_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche11_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche11_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche11_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche10_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche10_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche10_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche10_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche9_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche9_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche9_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche9_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche8_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche8_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche8_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche8_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche7_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche7_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche7_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche7_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche6_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche6_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche6_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche6_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche5_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche5_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche5_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche5_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche4_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche4_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche4_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche4_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche3_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche3_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche3_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->encoche3_1))->EndInit();
			this->panel31->ResumeLayout(false);
			this->panel23->ResumeLayout(false);
			this->panel28->ResumeLayout(false);
			this->panel29->ResumeLayout(false);
			this->panel30->ResumeLayout(false);
			this->panel36->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel16->ResumeLayout(false);
			this->panel17->ResumeLayout(false);
			this->panel18->ResumeLayout(false);
			this->panel19->ResumeLayout(false);
			this->panel20->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array <Color> ^tabCo_solution; //créer un tableau des coleurs de solution
		int manche; //le compte de nombre de manche utilisé 
		int limite1; 
	public: System::Void Nouvellepartie_Load(System::Object^  sender, System::EventArgs^  e) {
				if(limite==0)
				{limite1=12;limite=12;}
				if(limite!=limite1)
				{limite1=limite;}
		array <Color> ^tabCouleurs= gcnew array <Color> {Color::Gray,Color::Orange,Color::Yellow,Color::Green,Color::Blue,Color::Pink,Color::Red};
			
			Int32 iColor;
				
			Random^ nombreAleatoire = gcnew Random();// création générateur aléatoire

			// tirage au sort de 4 couleurs parmi les couleurs du tableau
			for(Int32 i=0;i<4;i++)								// générer la solution au début du jeu
				{	
					iColor= nombreAleatoire->Next(5);// génération entier entre 0 et 4 inclus	
					panel5-> Controls[i]->BackColor= tabCouleurs[iColor];// coloration du panel d'indice i avec la couleur correspondante
				};
			 //remplir un tableau des coleurs de solution
			tabCo_solution= gcnew array <Color> {panel1->BackColor,panel2->BackColor,panel3->BackColor,panel4->BackColor};
			//l'initialisation du compte 
			manche=0;
			// générer la table de pions
			for(Int32 i=0;i<7;i++)	
				{
					panel6-> Controls[i]->BackColor= tabCouleurs[i];// coloration du panel d'indice i avec la couleur correspondante
				}
			timeHeure-> Start();// démarre le temps
			 }

private: System::Void timeHeure_Tick(System::Object^  sender, System::EventArgs^  e) {
			 txtHeure->Text = Convert::ToString(System::DateTime::Now);
		 }
private: System::Void Back_Click(System::Object^  sender, System::EventArgs^  e) {
			 	this-> Hide();
				Gameover^ f10 = gcnew Gameover();
                f10->Show(); 
		 }
private: System::Void Solution_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel5->Visible="true";
		 }


		 // tableau des pions  
		 //coleur - vert
private: System::Void panel7_Click(System::Object^  sender, System::EventArgs^  e) { panel_0->BackColor = panel7->BackColor;}
		 //coleur - noir
private: System::Void panel9_Click(System::Object^  sender, System::EventArgs^  e) {panel_0->BackColor = panel9->BackColor;}
		 //coleur - rouge
private: System::Void panel10_Click(System::Object^  sender, System::EventArgs^  e) {panel_0->BackColor = panel10->BackColor;}
		 //coleur - bleue 
private: System::Void panel8_Click(System::Object^  sender, System::EventArgs^  e) {panel_0->BackColor = panel8->BackColor;}
		 //coleur - jaune
private: System::Void panel11_Click(System::Object^  sender, System::EventArgs^  e) {panel_0->BackColor = panel11->BackColor;}
		//coleur - jaune
private: System::Void panel12_Click(System::Object^  sender, System::EventArgs^  e) {panel_0->BackColor = panel12->BackColor;}
		 //coleur - jaune
private: System::Void panel13_Click(System::Object^  sender, System::EventArgs^  e) {panel_0->BackColor = panel13->BackColor;}
		 //chrono
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 static int s=0, m=0;
			 s=s+1;					// secondes timer  
			 if(s>=60){s=0; m=m+1;} // minutes
			 textBox5->Text =m+":"+s.ToString(); 
			 textBox19-> Text= limite1.ToString();
			 if(m==limite1){
				timer1->Stop(); //Stop le timer pour ne pas afficher plusieur fois gameover
				s=0; m=0;       // réinitialise le conteur pour la prochaine partie 
				this-> Hide();
				Gameover^ f10 = gcnew Gameover();
                f10->Show(); 
			 }
		 }

		 // la mis des pions

		 // la première ligne

private: System::Void encoche1_1_Click(System::Object^  sender, System::EventArgs^  e) {encoche1_1->BackColor = panel_0->BackColor;}
private: System::Void encoche1_2_Click(System::Object^  sender, System::EventArgs^  e) {encoche1_2->BackColor = panel_0->BackColor;}
private: System::Void encoche1_3_Click(System::Object^  sender, System::EventArgs^  e) {encoche1_3->BackColor = panel_0->BackColor;}
private: System::Void encoche1_4_Click(System::Object^  sender, System::EventArgs^  e) {encoche1_4->BackColor = panel_0->BackColor;}
		 // la 2e ligne
private: System::Void encoche2_1_Click(System::Object^  sender, System::EventArgs^  e) {encoche2_1->BackColor = panel_0->BackColor;}
private: System::Void encoche2_2_Click(System::Object^  sender, System::EventArgs^  e) {encoche2_2->BackColor = panel_0->BackColor;}
private: System::Void encoche2_3_Click(System::Object^  sender, System::EventArgs^  e) {encoche2_3->BackColor = panel_0->BackColor;}
private: System::Void encoche2_4_Click(System::Object^  sender, System::EventArgs^  e) {encoche2_4->BackColor = panel_0->BackColor;}
		 //3e ligne
private: System::Void encoche3_1_Click(System::Object^  sender, System::EventArgs^  e) {encoche3_1->BackColor = panel_0->BackColor;}
private: System::Void encoche3_2_Click(System::Object^  sender, System::EventArgs^  e) {encoche3_2->BackColor = panel_0->BackColor;}
private: System::Void encoche3_3_Click(System::Object^  sender, System::EventArgs^  e) {encoche3_3->BackColor = panel_0->BackColor;}
private: System::Void encoche3_4_Click(System::Object^  sender, System::EventArgs^  e) {encoche3_4->BackColor = panel_0->BackColor;}
		 //4e ligne
private: System::Void encoche4_1_Click(System::Object^  sender, System::EventArgs^  e) {encoche4_1->BackColor = panel_0->BackColor;}
private: System::Void encoche4_2_Click(System::Object^  sender, System::EventArgs^  e) {encoche4_2->BackColor = panel_0->BackColor;}
private: System::Void encoche4_3_Click(System::Object^  sender, System::EventArgs^  e) {encoche4_3->BackColor = panel_0->BackColor;}
private: System::Void encoche4_4_Click(System::Object^  sender, System::EventArgs^  e) {encoche4_4->BackColor = panel_0->BackColor;}
		 //5eligne
private: System::Void encoche5_1_Click(System::Object^  sender, System::EventArgs^  e) {encoche5_1->BackColor = panel_0->BackColor;}
private: System::Void encoche5_2_Click(System::Object^  sender, System::EventArgs^  e) {encoche5_2->BackColor = panel_0->BackColor;}
private: System::Void encoche5_3_Click(System::Object^  sender, System::EventArgs^  e) {encoche5_3->BackColor = panel_0->BackColor;}
private: System::Void encoche5_4_Click(System::Object^  sender, System::EventArgs^  e) {encoche5_4->BackColor = panel_0->BackColor;}
		 //6e ligne
private: System::Void encoche6_1_Click(System::Object^  sender, System::EventArgs^  e) {encoche6_1->BackColor = panel_0->BackColor;}
private: System::Void encoche6_2_Click(System::Object^  sender, System::EventArgs^  e) {encoche6_2->BackColor = panel_0->BackColor;}
private: System::Void encoche6_3_Click(System::Object^  sender, System::EventArgs^  e) {encoche6_3->BackColor = panel_0->BackColor;}
private: System::Void encoche6_4_Click(System::Object^  sender, System::EventArgs^  e) {encoche6_4->BackColor = panel_0->BackColor;}
		  //7e ligne
private: System::Void encoche7_1_Click(System::Object^  sender, System::EventArgs^  e) {encoche7_1->BackColor = panel_0->BackColor;}
private: System::Void encoche7_2_Click(System::Object^  sender, System::EventArgs^  e) {encoche7_2->BackColor = panel_0->BackColor;}
private: System::Void encoche7_3_Click(System::Object^  sender, System::EventArgs^  e) {encoche7_3->BackColor = panel_0->BackColor;}
private: System::Void encoche7_4_Click(System::Object^  sender, System::EventArgs^  e) {encoche7_4->BackColor = panel_0->BackColor;}
		 //8e ligne
private: System::Void encoche8_1_Click(System::Object^  sender, System::EventArgs^  e) {encoche8_1->BackColor = panel_0->BackColor;}
private: System::Void encoche8_2_Click(System::Object^  sender, System::EventArgs^  e) {encoche8_2->BackColor = panel_0->BackColor;}
private: System::Void encoche8_3_Click(System::Object^  sender, System::EventArgs^  e) {encoche8_3->BackColor = panel_0->BackColor;}
private: System::Void encoche8_4_Click(System::Object^  sender, System::EventArgs^  e) {encoche8_4->BackColor = panel_0->BackColor;}
		  //9e ligne
private: System::Void encoche9_1_Click(System::Object^  sender, System::EventArgs^  e) {encoche9_1->BackColor = panel_0->BackColor;}
private: System::Void encoche9_2_Click(System::Object^  sender, System::EventArgs^  e) {encoche9_2->BackColor = panel_0->BackColor;}
private: System::Void encoche9_3_Click(System::Object^  sender, System::EventArgs^  e) {encoche9_3->BackColor = panel_0->BackColor;}
private: System::Void encoche9_4_Click(System::Object^  sender, System::EventArgs^  e) {encoche9_4->BackColor = panel_0->BackColor;}
		 //10e ligne
private: System::Void encoche10_1_Click(System::Object^  sender, System::EventArgs^  e) {encoche10_1->BackColor = panel_0->BackColor;}
private: System::Void encoche10_2_Click(System::Object^  sender, System::EventArgs^  e) {encoche10_2->BackColor = panel_0->BackColor;}
private: System::Void encoche10_3_Click(System::Object^  sender, System::EventArgs^  e) {encoche10_3->BackColor = panel_0->BackColor;}
private: System::Void encoche10_4_Click(System::Object^  sender, System::EventArgs^  e) {encoche10_4->BackColor = panel_0->BackColor;}
		 //11e ligne
private: System::Void encoche11_1_Click(System::Object^  sender, System::EventArgs^  e) {encoche11_1->BackColor = panel_0->BackColor;}
private: System::Void encoche11_2_Click(System::Object^  sender, System::EventArgs^  e) {encoche11_2->BackColor = panel_0->BackColor;}
private: System::Void encoche11_3_Click(System::Object^  sender, System::EventArgs^  e) {encoche11_3->BackColor = panel_0->BackColor;}
private: System::Void encoche11_4_Click(System::Object^  sender, System::EventArgs^  e) {encoche11_4->BackColor = panel_0->BackColor;}
		 //11e ligne
private: System::Void encoche12_1_Click(System::Object^  sender, System::EventArgs^  e) {encoche12_1->BackColor = panel_0->BackColor;}
private: System::Void encoche12_2_Click(System::Object^  sender, System::EventArgs^  e) {encoche12_2->BackColor = panel_0->BackColor;}
private: System::Void encoche12_3_Click(System::Object^  sender, System::EventArgs^  e) {encoche12_3->BackColor = panel_0->BackColor;}
private: System::Void encoche12_4_Click(System::Object^  sender, System::EventArgs^  e) {encoche12_4->BackColor = panel_0->BackColor;}
		 
		 // les fonctions de comparaisons
private: System::Void compareligne1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
			 static int i,j,n=0,compare=0;		
	array <Color> ^tabColigne1= gcnew array <Color> {encoche1_1->BackColor,encoche1_2->BackColor,encoche1_3->BackColor,encoche1_4->BackColor};
	array <Color> ^tabColigne1_resul= gcnew array <Color> {panel35->BackColor,panel34->BackColor,panel33->BackColor,panel32->BackColor};		
		
	if(compare<1){
		compareligne1->UseVisualStyleBackColor = false;
		for(i=0;i<4;i++)
			{
				for(j=0;j<4;j++)
				{ 
					if(tabColigne1[i]==tabCo_solution[j]&&i==j)
					{tabColigne1_resul[i]=Color::Black;break;}
					if(tabColigne1[i]==tabCo_solution[j])
					{tabColigne1_resul[i]=Color::White;}
				}
			}
		//affichage du résultat
		for(i=0;i<4;i++)
			{				
				panel31-> Controls[3-i]->BackColor= tabColigne1_resul[i];
				if(tabColigne1_resul[i]==Color::Black)
				{n=n+1;}
			};
		if(n==4)
			{		
				panel5->Visible="true";
				this-> Hide();
				GameWin^ f11 = gcnew GameWin();
                f11->Show(); 
			};
		compare=compare++;
		manche++;
		if(manche==12){			//afficher gameover dès le 12 fois comparer 
				this-> Hide();
				Gameover^ f10 = gcnew Gameover();
                f10->Show(); 
		}
		}
		}
private: System::Void compareligne2_Click(System::Object^  sender, System::EventArgs^  e) {

			 static int i,j,n=0,compare2=0;	
			//créer un tableau des coleurs de la mache
	array <Color> ^tabColigne2= gcnew array <Color> {encoche2_1->BackColor,encoche2_2->BackColor,encoche2_3->BackColor,encoche2_4->BackColor};
			//créer un tableau des coleurs de résultat
	array <Color> ^tabColigne2_resul= gcnew array <Color> {panel27->BackColor,panel26->BackColor,panel25->BackColor,panel24->BackColor};	

	
		if (compare2<1)// une limite de clique : une fois
		{
			compareligne2->UseVisualStyleBackColor = false;
			//le comparaison du coleur
			for(i=0;i<4;i++)
				{
					for(j=0;j<4;j++)
					{ 
						//chaque pions sera comparé à tous les poins de solution
						if(tabColigne2[i]==tabCo_solution[j]&&i==j)
						{tabColigne2_resul[i]=Color::Black;break;}//si il est correct -> ce case là est noir -> stop la comparaison pour ce pion là 
						if(tabColigne2[i]==tabCo_solution[j])
						{tabColigne2_resul[i]=Color::White;}
					}
				}
			//affichage du résultat
			for(i=0;i<4;i++)
				{	
					//panel 23 est le mache de résul qu'il contient 4 cases qu'ils sont mis en ordre par n° de index (i)
					panel23-> Controls[3-i]->BackColor= tabColigne2_resul[i];
					if(tabColigne2_resul[i]==Color::Black)
					{n=n+1;}
				};
			if(n==4)
				{		
					panel5->Visible="true";
					this-> Hide();
					GameWin^ f12 = gcnew GameWin();
					f12->Show(); 
				};
			compare2++;// un compte de fois 
		manche++;
		if(manche==12)
		{			//afficher gameover dès le 12 fois comparer 
				this-> Hide();
				Gameover^ f10 = gcnew Gameover();
                f10->Show(); 
		}
		}
		}
private: System::Void compareligne3_Click(System::Object^  sender, System::EventArgs^  e) {
	
			 static int i,j,n=0,compare=0;	
	array <Color> ^tabColigne3= gcnew array <Color> {encoche3_1->BackColor,encoche3_2->BackColor,encoche3_3->BackColor,encoche3_4->BackColor};
	array <Color> ^tabColigne3_resul= gcnew array <Color> {resul3_1->BackColor,resul3_2->BackColor,resul3_3->BackColor,resul3_4->BackColor};		
			if(compare<1)
			{
				compareligne3->UseVisualStyleBackColor = false;
				for(i=0;i<4;i++)
					{
						for(j=0;j<4;j++)
						{ 
							if(tabColigne3[i]==tabCo_solution[j]&&i==j)
							{tabColigne3_resul[i]=Color::Black;break;}
							if(tabColigne3[i]==tabCo_solution[j])
							{tabColigne3_resul[i]=Color::White;}
						}
					}
				//affichage du résultat
				for(i=0;i<4;i++)
					{				
						panel28-> Controls[3-i]->BackColor= tabColigne3_resul[i];
						if(tabColigne3_resul[i]==Color::Black)
						{n=n+1;}
					};
				if(n==4)
					{		
							panel5->Visible="true";
						this-> Hide();
						GameWin^ f13 = gcnew GameWin();
						f13->Show(); 
					};
				compare++;
				manche++;
				if(manche==12)
					{			//afficher gameover dès le 12 fois comparer 
						this-> Hide();
						Gameover^ f10 = gcnew Gameover();
						f10->Show(); 
					}
			}
		 }
private: System::Void compareligne4_Click(System::Object^  sender, System::EventArgs^  e) {
			 static int i=0,j=0,n=0,compte=0;	
	array <Color> ^tabColigne= gcnew array <Color> {encoche4_1->BackColor,encoche4_2->BackColor,encoche4_3->BackColor,encoche4_4->BackColor};
	array <Color> ^tabColigne_resul= gcnew array <Color> {resul4_1->BackColor,resul4_2->BackColor,resul4_3->BackColor,resul4_4->BackColor};		
		if(compte<1)
		{
			compareligne4->UseVisualStyleBackColor = false;
			for(i=0;i<4;i++)
				{
					for(j=0;j<4;j++)
					{ 
						if(tabColigne[i]==tabCo_solution[j]&&i==j)
						{tabColigne_resul[i]=Color::Black;break;}
						if(tabColigne[i]==tabCo_solution[j])
						{tabColigne_resul[i]=Color::White;}
					}
				}
		//affichage du résultat
			for(i=0;i<4;i++)
			{				
				panel29-> Controls[3-i]->BackColor= tabColigne_resul[i];
					if(tabColigne_resul[i]==Color::Black)
					{n=n+1;}
			};
			if(n==4)
			{		panel5->Visible="true";
					this-> Hide();
					GameWin^ f13 = gcnew GameWin();
					f13->Show(); 
			};
			compte++;
			manche++;
			if(manche==12)
				{			//afficher gameover dès le 12 fois comparer 
					this-> Hide();
					Gameover^ f10 = gcnew Gameover();
					f10->Show(); 
				}
		 }
		 }
private: System::Void compareligne5_Click(System::Object^  sender, System::EventArgs^  e) {
			 static int i=0,j=0,n=0,compte=0;	
	array <Color> ^tabColigne= gcnew array <Color> {encoche5_1->BackColor,encoche5_2->BackColor,encoche5_3->BackColor,encoche5_4->BackColor};
	array <Color> ^tabColigne_resul= gcnew array <Color> {resul5_1->BackColor,resul5_2->BackColor,resul5_3->BackColor,resul5_4->BackColor};		
		if(compte<1)
		{
			compareligne5->UseVisualStyleBackColor = false;
			for(i=0;i<4;i++)
				{
					for(j=0;j<4;j++)
					{ 
						if(tabColigne[i]==tabCo_solution[j]&&i==j)
						{tabColigne_resul[i]=Color::Black;break;}
						if(tabColigne[i]==tabCo_solution[j])
						{tabColigne_resul[i]=Color::White;}
					}
				}
		//affichage du résultat
			for(i=0;i<4;i++)
			{				
				panel30-> Controls[3-i]->BackColor= tabColigne_resul[i];
					if(tabColigne_resul[i]==Color::Black)
					{n=n+1;}
			};
			if(n==4)
			{		panel5->Visible="true";
					this-> Hide();
					GameWin^ f13 = gcnew GameWin();
					f13->Show(); 
			};
			compte++;
			manche++;
			if(manche==12)
			{			//afficher gameover dès le 12 fois comparer 
				this-> Hide();
				Gameover^ f10 = gcnew Gameover();
				f10->Show(); 
			}
		 }
		 }
private: System::Void compareligne6_Click(System::Object^  sender, System::EventArgs^  e) {
			 static int i=0,j=0,n=0,compte=0;	
	array <Color> ^tabColigne= gcnew array <Color> {encoche6_1->BackColor,encoche6_2->BackColor,encoche6_3->BackColor,encoche6_4->BackColor};
	array <Color> ^tabColigne_resul= gcnew array <Color> {resul6_1->BackColor,resul6_2->BackColor,resul6_3->BackColor,resul6_4->BackColor};		
		if(compte<1)
		{
			compareligne6->UseVisualStyleBackColor = false;
			for(i=0;i<4;i++)
				{
					for(j=0;j<4;j++)
					{ 
						if(tabColigne[i]==tabCo_solution[j]&&i==j)
						{tabColigne_resul[i]=Color::Black;break;}
						if(tabColigne[i]==tabCo_solution[j])
						{tabColigne_resul[i]=Color::White;}
					}
				}
		//affichage du résultat
			for(i=0;i<4;i++)
			{				
				panel36-> Controls[3-i]->BackColor= tabColigne_resul[i];
					if(tabColigne_resul[i]==Color::Black)
					{n=n+1;}
			};
			if(n==4)
			{		panel5->Visible="true";
					this-> Hide();
					GameWin^ f13 = gcnew GameWin();
					f13->Show(); 
			};
			compte++;
			manche++;
			if(manche==12)
			{			//afficher gameover dès le 12 fois comparer 
				this-> Hide();
				Gameover^ f10 = gcnew Gameover();
				f10->Show(); 
			}
		 }
		 }
private: System::Void compareligne7_Click(System::Object^  sender, System::EventArgs^  e) {
			 static int i=0,j=0,n=0,compte=0;	
	array <Color> ^tabColigne= gcnew array <Color> {encoche7_1->BackColor,encoche7_2->BackColor,encoche7_3->BackColor,encoche7_4->BackColor};
	array <Color> ^tabColigne_resul= gcnew array <Color> {resul7_1->BackColor,resul7_2->BackColor,resul7_3->BackColor,resul7_4->BackColor};		
		if(compte<1)
		{
			compareligne7->UseVisualStyleBackColor = false;
			for(i=0;i<4;i++)
				{
					for(j=0;j<4;j++)
					{ 
						if(tabColigne[i]==tabCo_solution[j]&&i==j)
						{tabColigne_resul[i]=Color::Black;break;}
						if(tabColigne[i]==tabCo_solution[j])
						{tabColigne_resul[i]=Color::White;}
					}
				}
		//affichage du résultat
			for(i=0;i<4;i++)
			{				
				panel15-> Controls[3-i]->BackColor= tabColigne_resul[i];
					if(tabColigne_resul[i]==Color::Black)
					{n=n+1;}
			};
			if(n==4)
			{		panel5->Visible="true";
					this-> Hide();
					GameWin^ f13 = gcnew GameWin();
					f13->Show(); 
			};
			compte++;
			manche++;
			if(manche==12)
			{			//afficher gameover dès le 12 fois comparer 
				this-> Hide();
				Gameover^ f10 = gcnew Gameover();
				f10->Show(); 
			}
		 }
		 }
private: System::Void compareligne8_Click(System::Object^  sender, System::EventArgs^  e) {
			 static int i=0,j=0,n=0,compte=0;	
	array <Color> ^tabColigne= gcnew array <Color> {encoche8_1->BackColor,encoche8_2->BackColor,encoche8_3->BackColor,encoche8_4->BackColor};
	array <Color> ^tabColigne_resul= gcnew array <Color> {resul8_1->BackColor,resul8_2->BackColor,resul8_3->BackColor,resul8_4->BackColor};		
		if(compte<1)
		{
			compareligne8->UseVisualStyleBackColor = false;
			for(i=0;i<4;i++)
				{
					for(j=0;j<4;j++)
					{ 
						if(tabColigne[i]==tabCo_solution[j]&&i==j)
						{tabColigne_resul[i]=Color::Black;break;}
						if(tabColigne[i]==tabCo_solution[j])
						{tabColigne_resul[i]=Color::White;}
					}
				}
		//affichage du résultat
			for(i=0;i<4;i++)
			{				
				panel16-> Controls[3-i]->BackColor= tabColigne_resul[i];
					if(tabColigne_resul[i]==Color::Black)
					{n=n+1;}
			};
			if(n==4)
			{		panel5->Visible="true";
					this-> Hide();
					GameWin^ f13 = gcnew GameWin();
					f13->Show(); 
			};
			compte++;
			manche++;
			if(manche==12)
			{			//afficher gameover dès le 12 fois comparer 
				this-> Hide();
				Gameover^ f10 = gcnew Gameover();
				f10->Show(); 
			}
		 }
		 }
private: System::Void compareligne9_Click(System::Object^  sender, System::EventArgs^  e) {
			static int i=0,j=0,n=0,compte=0;	
	array <Color> ^tabColigne= gcnew array <Color> {encoche9_1->BackColor,encoche9_2->BackColor,encoche9_3->BackColor,encoche9_4->BackColor};
	array <Color> ^tabColigne_resul= gcnew array <Color> {resul9_1->BackColor,resul9_2->BackColor,resul9_3->BackColor,resul9_4->BackColor};		
		if(compte<1)
		{
			compareligne9->UseVisualStyleBackColor = false;
			for(i=0;i<4;i++)
				{
					for(j=0;j<4;j++)
					{ 
						if(tabColigne[i]==tabCo_solution[j]&&i==j)
						{tabColigne_resul[i]=Color::Black;break;}
						if(tabColigne[i]==tabCo_solution[j])
						{tabColigne_resul[i]=Color::White;}
					}
				}
		//affichage du résultat
			for(i=0;i<4;i++)
			{				
				panel17-> Controls[3-i]->BackColor= tabColigne_resul[i];
					if(tabColigne_resul[i]==Color::Black)
					{n=n+1;}
			};
			if(n==4)
			{		panel5->Visible="true";
					this-> Hide();
					GameWin^ f13 = gcnew GameWin();
					f13->Show(); 
			};
			compte++;
			manche++;
			if(manche==12)
			{			//afficher gameover dès le 12 fois comparer 
				this-> Hide();
				Gameover^ f10 = gcnew Gameover();
				f10->Show(); 
			}
		 }
		 }
private: System::Void compareligne10_Click(System::Object^  sender, System::EventArgs^  e) {
			static int i=0,j=0,n=0,compte=0;	
	array <Color> ^tabColigne= gcnew array <Color> {encoche10_1->BackColor,encoche10_2->BackColor,encoche10_3->BackColor,encoche10_4->BackColor};
	array <Color> ^tabColigne_resul= gcnew array <Color> {resul10_1->BackColor,resul10_2->BackColor,resul10_3->BackColor,resul10_4->BackColor};		
		if(compte<1)
		{
			compareligne10->UseVisualStyleBackColor = false;
			for(i=0;i<4;i++)
				{
					for(j=0;j<4;j++)
					{ 
						if(tabColigne[i]==tabCo_solution[j]&&i==j)
						{tabColigne_resul[i]=Color::Black;break;}
						if(tabColigne[i]==tabCo_solution[j])
						{tabColigne_resul[i]=Color::White;}
					}
				}
		//affichage du résultat
			for(i=0;i<4;i++)
			{				
				panel18-> Controls[3-i]->BackColor= tabColigne_resul[i];
					if(tabColigne_resul[i]==Color::Black)
					{n=n+1;}
			};
			if(n==4)
			{		panel5->Visible="true";
					this-> Hide();
					GameWin^ f13 = gcnew GameWin();
					f13->Show(); 
			};
			compte++;
			manche++;
			if(manche==12)
			{			//afficher gameover dès le 12 fois comparer 
				this-> Hide();
				Gameover^ f10 = gcnew Gameover();
				f10->Show(); 
			}
		 }
		 }
private: System::Void compareligne11_Click(System::Object^  sender, System::EventArgs^  e) {
			static int i=0,j=0,n=0,compte=0;	
	array <Color> ^tabColigne= gcnew array <Color> {encoche11_1->BackColor,encoche11_2->BackColor,encoche11_3->BackColor,encoche11_4->BackColor};
	array <Color> ^tabColigne_resul= gcnew array <Color> {resul11_1->BackColor,resul11_2->BackColor,resul11_3->BackColor,resul11_4->BackColor};		
		if(compte<1)
		{
			compareligne11->UseVisualStyleBackColor = false;
			for(i=0;i<4;i++)
				{
					for(j=0;j<4;j++)
					{ 
						if(tabColigne[i]==tabCo_solution[j]&&i==j)
						{tabColigne_resul[i]=Color::Black;break;}
						if(tabColigne[i]==tabCo_solution[j])
						{tabColigne_resul[i]=Color::White;}
					}
				}
		//affichage du résultat
			for(i=0;i<4;i++)
			{				
				panel19-> Controls[3-i]->BackColor= tabColigne_resul[i];
					if(tabColigne_resul[i]==Color::Black)
					{n=n+1;}
			};
			if(n==4)
			{		panel5->Visible="true";
					this-> Hide();
					GameWin^ f13 = gcnew GameWin();
					f13->Show(); 
			};
			compte++;
			manche++;
			if(manche==12)
			{			//afficher gameover dès le 12 fois comparer 
				this-> Hide();
				Gameover^ f10 = gcnew Gameover();
				f10->Show(); 
			}
		 }
		 }
private: System::Void compareligne12_Click(System::Object^  sender, System::EventArgs^  e) {
			static int i=0,j=0,n=0,compte=0;	
	array <Color> ^tabColigne= gcnew array <Color> {encoche12_1->BackColor,encoche12_2->BackColor,encoche12_3->BackColor,encoche12_4->BackColor};
	array <Color> ^tabColigne_resul= gcnew array <Color> {resul12_1->BackColor,resul12_2->BackColor,resul12_3->BackColor,resul12_4->BackColor};		
		if(compte<1)
		{
			compareligne12->UseVisualStyleBackColor = false;
			for(i=0;i<4;i++)
				{
					for(j=0;j<4;j++)
					{ 
						if(tabColigne[i]==tabCo_solution[j]&&i==j)
						{tabColigne_resul[i]=Color::Black;break;}
						if(tabColigne[i]==tabCo_solution[j])
						{tabColigne_resul[i]=Color::White;}
					}
				}
		//affichage du résultat
			for(i=0;i<4;i++)
			{				
				panel20-> Controls[3-i]->BackColor= tabColigne_resul[i];
					if(tabColigne_resul[i]==Color::Black)
					{n=n+1;}
			};
			if(n==4)
			{		panel5->Visible="true";
					this-> Hide();
					GameWin^ f13 = gcnew GameWin();
					f13->Show(); 
			};
			compte++;
			manche++;
			if(manche==12)
			{			//afficher gameover dès le 12 fois comparer 
				this-> Hide();
				Gameover^ f10 = gcnew Gameover();
				f10->Show(); 
			}
		 }
		 }
};
}
