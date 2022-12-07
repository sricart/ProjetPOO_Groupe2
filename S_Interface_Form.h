#pragma once

#include "S_Interface_Form.h"

namespace PjtFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Sql;

	/// <summary>
	/// Description résumée de personnel_form
	/// </summary>
	public ref class personnel_form : public System::Windows::Forms::Form
	{


	public:
		personnel_form(void)
		{

			
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~personnel_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;



	private: System::Windows::Forms::Button^ btnQuitter;
	private: System::Windows::Forms::Button^ btnAdresse;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ tbDatePA;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbCDateN;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ tbCMdp;
	private: System::Windows::Forms::TextBox^ tbCEmail;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ tbCPrenom;
	private: System::Windows::Forms::TextBox^ tbCNom;
	private: System::Windows::Forms::TextBox^ tbCId;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::DataGridView^ dtgClient;
	private: System::Windows::Forms::DataGridView^ dtgCommand;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::ComboBox^ cbTva;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbAQuantite;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbAPrix;
	private: System::Windows::Forms::TextBox^ tbACouleur;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ tbAType;
	private: System::Windows::Forms::TextBox^ tbANom;
	private: System::Windows::Forms::TextBox^ tbAId;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::DataGridView^ dtgArticle;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnAdresse = (gcnew System::Windows::Forms::Button());
			this->btnQuitter = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dtgClient = (gcnew System::Windows::Forms::DataGridView());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->tbDatePA = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbCDateN = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tbCMdp = (gcnew System::Windows::Forms::TextBox());
			this->tbCEmail = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tbCPrenom = (gcnew System::Windows::Forms::TextBox());
			this->tbCNom = (gcnew System::Windows::Forms::TextBox());
			this->tbCId = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dtgCommand = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dtgArticle = (gcnew System::Windows::Forms::DataGridView());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->cbTva = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbAQuantite = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbAPrix = (gcnew System::Windows::Forms::TextBox());
			this->tbACouleur = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->tbAType = (gcnew System::Windows::Forms::TextBox());
			this->tbANom = (gcnew System::Windows::Forms::TextBox());
			this->tbAId = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgClient))->BeginInit();
			this->panel7->SuspendLayout();
			this->panel9->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgCommand))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgArticle))->BeginInit();
			this->panel10->SuspendLayout();
			this->panel12->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->panel1->Controls->Add(this->btnAdresse);
			this->panel1->Controls->Add(this->btnQuitter);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(267, 828);
			this->panel1->TabIndex = 1;
			// 
			// btnAdresse
			// 
			this->btnAdresse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAdresse->FlatAppearance->BorderSize = 0;
			this->btnAdresse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdresse->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdresse->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdresse->Location = System::Drawing::Point(0, 121);
			this->btnAdresse->Margin = System::Windows::Forms::Padding(4);
			this->btnAdresse->Name = L"btnAdresse";
			this->btnAdresse->Size = System::Drawing::Size(267, 80);
			this->btnAdresse->TabIndex = 9;
			this->btnAdresse->Text = L"        Adresse";
			this->btnAdresse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdresse->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnAdresse->UseVisualStyleBackColor = true;
			this->btnAdresse->Click += gcnew System::EventHandler(this, &personnel_form::btnAdresse_Click);
			// 
			// btnQuitter
			// 
			this->btnQuitter->FlatAppearance->BorderSize = 0;
			this->btnQuitter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnQuitter->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuitter->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnQuitter->Location = System::Drawing::Point(-3, 473);
			this->btnQuitter->Margin = System::Windows::Forms::Padding(4);
			this->btnQuitter->Name = L"btnQuitter";
			this->btnQuitter->Size = System::Drawing::Size(267, 80);
			this->btnQuitter->TabIndex = 8;
			this->btnQuitter->Text = L"        Quitter";
			this->btnQuitter->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnQuitter->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnQuitter->UseVisualStyleBackColor = true;
			this->btnQuitter->Click += gcnew System::EventHandler(this, &personnel_form::btnQuitter_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(267, 121);
			this->panel3->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(4, 6);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(260, 111);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(0, 385);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(267, 80);
			this->button3->TabIndex = 7;
			this->button3->Text = L"        Stock";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &personnel_form::button3_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 209);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(267, 80);
			this->button1->TabIndex = 5;
			this->button1->Text = L"        Client";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &personnel_form::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(0, 297);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(267, 80);
			this->button2->TabIndex = 6;
			this->button2->Text = L"        Commande";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &personnel_form::button2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Gray;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(267, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1314, 121);
			this->panel2->TabIndex = 2;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(267, 128);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1317, 666);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dtgClient);
			this->tabPage1->Controls->Add(this->panel7);
			this->tabPage1->Controls->Add(this->panel9);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(1309, 637);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Client";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dtgClient
			// 
			this->dtgClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtgClient->Location = System::Drawing::Point(7, 216);
			this->dtgClient->Name = L"dtgClient";
			this->dtgClient->RowHeadersWidth = 51;
			this->dtgClient->RowTemplate->Height = 24;
			this->dtgClient->Size = System::Drawing::Size(1276, 448);
			this->dtgClient->TabIndex = 5;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->button5);
			this->panel7->Controls->Add(this->button6);
			this->panel7->Controls->Add(this->button7);
			this->panel7->Controls->Add(this->button8);
			this->panel7->Controls->Add(this->button9);
			this->panel7->Location = System::Drawing::Point(7, 157);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1291, 53);
			this->panel7->TabIndex = 18;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(704, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(170, 46);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Reset";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(530, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(170, 46);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Supprimer";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(354, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(170, 46);
			this->button7->TabIndex = 2;
			this->button7->Text = L"Mise à jour";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(180, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(170, 46);
			this->button8->TabIndex = 1;
			this->button8->Text = L"Rafraichir";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(4, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(170, 46);
			this->button9->TabIndex = 0;
			this->button9->Text = L"Ajouter";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &personnel_form::button9_Click_1);
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->tbDatePA);
			this->panel9->Controls->Add(this->label1);
			this->panel9->Controls->Add(this->tbCDateN);
			this->panel9->Controls->Add(this->label13);
			this->panel9->Controls->Add(this->tbCMdp);
			this->panel9->Controls->Add(this->tbCEmail);
			this->panel9->Controls->Add(this->label16);
			this->panel9->Controls->Add(this->label14);
			this->panel9->Controls->Add(this->tbCPrenom);
			this->panel9->Controls->Add(this->tbCNom);
			this->panel9->Controls->Add(this->tbCId);
			this->panel9->Controls->Add(this->label18);
			this->panel9->Controls->Add(this->label17);
			this->panel9->Controls->Add(this->label19);
			this->panel9->Location = System::Drawing::Point(7, 7);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1291, 144);
			this->panel9->TabIndex = 4;
			// 
			// tbDatePA
			// 
			this->tbDatePA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDatePA->Location = System::Drawing::Point(1095, 7);
			this->tbDatePA->Name = L"tbDatePA";
			this->tbDatePA->Size = System::Drawing::Size(185, 30);
			this->tbDatePA->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(896, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 25);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Date_Premier_Achat";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbCDateN
			// 
			this->tbCDateN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCDateN->Location = System::Drawing::Point(597, 89);
			this->tbCDateN->Name = L"tbCDateN";
			this->tbCDateN->Size = System::Drawing::Size(277, 30);
			this->tbCDateN->TabIndex = 15;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(461, 92);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(67, 25);
			this->label13->TabIndex = 12;
			this->label13->Text = L"DateN";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbCMdp
			// 
			this->tbCMdp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCMdp->Location = System::Drawing::Point(597, 50);
			this->tbCMdp->Name = L"tbCMdp";
			this->tbCMdp->Size = System::Drawing::Size(277, 30);
			this->tbCMdp->TabIndex = 11;
			// 
			// tbCEmail
			// 
			this->tbCEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCEmail->Location = System::Drawing::Point(597, 9);
			this->tbCEmail->Name = L"tbCEmail";
			this->tbCEmail->Size = System::Drawing::Size(277, 30);
			this->tbCEmail->TabIndex = 10;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(461, 53);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(112, 25);
			this->label16->TabIndex = 8;
			this->label16->Text = L"Client_Mdp";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(461, 14);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(121, 25);
			this->label14->TabIndex = 7;
			this->label14->Text = L"Client_Email";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbCPrenom
			// 
			this->tbCPrenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCPrenom->Location = System::Drawing::Point(151, 90);
			this->tbCPrenom->Name = L"tbCPrenom";
			this->tbCPrenom->Size = System::Drawing::Size(277, 30);
			this->tbCPrenom->TabIndex = 5;
			// 
			// tbCNom
			// 
			this->tbCNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCNom->Location = System::Drawing::Point(151, 49);
			this->tbCNom->Name = L"tbCNom";
			this->tbCNom->Size = System::Drawing::Size(277, 30);
			this->tbCNom->TabIndex = 4;
			// 
			// tbCId
			// 
			this->tbCId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCId->Location = System::Drawing::Point(151, 7);
			this->tbCId->Name = L"tbCId";
			this->tbCId->Size = System::Drawing::Size(277, 30);
			this->tbCId->TabIndex = 3;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(15, 93);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(141, 25);
			this->label18->TabIndex = 2;
			this->label18->Text = L"Client_Prenom";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(15, 54);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(114, 25);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Client_Nom";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(15, 12);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(89, 25);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Id_Client";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dtgCommand);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(1309, 637);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Commande";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dtgCommand
			// 
			this->dtgCommand->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtgCommand->Location = System::Drawing::Point(5, 94);
			this->dtgCommand->Name = L"dtgCommand";
			this->dtgCommand->RowHeadersWidth = 51;
			this->dtgCommand->RowTemplate->Height = 24;
			this->dtgCommand->Size = System::Drawing::Size(1298, 448);
			this->dtgCommand->TabIndex = 2;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dtgArticle);
			this->tabPage3->Controls->Add(this->panel10);
			this->tabPage3->Controls->Add(this->panel12);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1309, 637);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Stock";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dtgArticle
			// 
			this->dtgArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtgArticle->Location = System::Drawing::Point(7, 209);
			this->dtgArticle->Name = L"dtgArticle";
			this->dtgArticle->RowHeadersWidth = 51;
			this->dtgArticle->RowTemplate->Height = 24;
			this->dtgArticle->Size = System::Drawing::Size(1264, 446);
			this->dtgArticle->TabIndex = 10;
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->button10);
			this->panel10->Controls->Add(this->button11);
			this->panel10->Controls->Add(this->button12);
			this->panel10->Controls->Add(this->button13);
			this->panel10->Controls->Add(this->button14);
			this->panel10->Location = System::Drawing::Point(3, 153);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(1291, 53);
			this->panel10->TabIndex = 9;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(704, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(170, 46);
			this->button10->TabIndex = 4;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(530, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(170, 46);
			this->button11->TabIndex = 3;
			this->button11->Text = L"Supprimer";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(354, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(170, 46);
			this->button12->TabIndex = 2;
			this->button12->Text = L"Mise à jour";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(180, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(170, 46);
			this->button13->TabIndex = 1;
			this->button13->Text = L"Rafraichir";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(4, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(170, 46);
			this->button14->TabIndex = 0;
			this->button14->Text = L"Ajouter";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &personnel_form::button14_Click_1);
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->cbTva);
			this->panel12->Controls->Add(this->label3);
			this->panel12->Controls->Add(this->tbAQuantite);
			this->panel12->Controls->Add(this->label4);
			this->panel12->Controls->Add(this->tbAPrix);
			this->panel12->Controls->Add(this->tbACouleur);
			this->panel12->Controls->Add(this->label15);
			this->panel12->Controls->Add(this->label20);
			this->panel12->Controls->Add(this->tbAType);
			this->panel12->Controls->Add(this->tbANom);
			this->panel12->Controls->Add(this->tbAId);
			this->panel12->Controls->Add(this->label21);
			this->panel12->Controls->Add(this->label22);
			this->panel12->Controls->Add(this->label23);
			this->panel12->Location = System::Drawing::Point(3, 3);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(1291, 144);
			this->panel12->TabIndex = 8;
			// 
			// cbTva
			// 
			this->cbTva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbTva->FormattingEnabled = true;
			this->cbTva->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"20 %", L"10 %", L"5,5 %", L"2,1 % " });
			this->cbTva->Location = System::Drawing::Point(1020, 2);
			this->cbTva->Name = L"cbTva";
			this->cbTva->Size = System::Drawing::Size(260, 33);
			this->cbTva->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(896, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 25);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Article_TVA";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbAQuantite
			// 
			this->tbAQuantite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAQuantite->Location = System::Drawing::Point(613, 89);
			this->tbAQuantite->Name = L"tbAQuantite";
			this->tbAQuantite->Size = System::Drawing::Size(261, 30);
			this->tbAQuantite->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(461, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 25);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Article_Quantite";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbAPrix
			// 
			this->tbAPrix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAPrix->Location = System::Drawing::Point(613, 50);
			this->tbAPrix->Name = L"tbAPrix";
			this->tbAPrix->Size = System::Drawing::Size(261, 30);
			this->tbAPrix->TabIndex = 11;
			// 
			// tbACouleur
			// 
			this->tbACouleur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbACouleur->Location = System::Drawing::Point(613, 9);
			this->tbACouleur->Name = L"tbACouleur";
			this->tbACouleur->Size = System::Drawing::Size(261, 30);
			this->tbACouleur->TabIndex = 10;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(461, 53);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(110, 25);
			this->label15->TabIndex = 8;
			this->label15->Text = L"Article_Prix";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(461, 14);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(146, 25);
			this->label20->TabIndex = 7;
			this->label20->Text = L"Article_Couleur";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbAType
			// 
			this->tbAType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAType->Location = System::Drawing::Point(151, 90);
			this->tbAType->Name = L"tbAType";
			this->tbAType->Size = System::Drawing::Size(277, 30);
			this->tbAType->TabIndex = 5;
			// 
			// tbANom
			// 
			this->tbANom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbANom->Location = System::Drawing::Point(151, 49);
			this->tbANom->Name = L"tbANom";
			this->tbANom->Size = System::Drawing::Size(277, 30);
			this->tbANom->TabIndex = 4;
			// 
			// tbAId
			// 
			this->tbAId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAId->Location = System::Drawing::Point(151, 7);
			this->tbAId->Name = L"tbAId";
			this->tbAId->Size = System::Drawing::Size(277, 30);
			this->tbAId->TabIndex = 3;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(15, 93);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(122, 25);
			this->label21->TabIndex = 2;
			this->label21->Text = L"Article_Type";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(15, 54);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(118, 25);
			this->label22->TabIndex = 1;
			this->label22->Text = L"Article_Nom";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(15, 12);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(93, 25);
			this->label23->TabIndex = 0;
			this->label23->Text = L"Id_Article";
			// 
			// personnel_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1581, 828);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1599, 875);
			this->MinimumSize = System::Drawing::Size(1599, 875);
			this->Name = L"personnel_form";
			this->Text = L"personnel_form";
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgClient))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgCommand))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgArticle))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	public: bool kstaffconn = true;

	public: bool ksadresse = false;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedTab = tabControl1->TabPages[0];
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedTab = tabControl1->TabPages[1];
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedTab = tabControl1->TabPages[2];
	}
	private: System::Void btnQuitter_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::DialogResult iExit;

		try
		{
			iExit = MessageBox::Show("Voulez-vous vraiment quitter ?", "Erreur",
				MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (iExit == System::Windows::Forms::DialogResult::Yes)
			{
				kstaffconn = false;
				Application::Exit();
			}
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Erreur",
				MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void btnAdresse_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ksadresse = true;
		this->Close();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{

	}


	

};
}