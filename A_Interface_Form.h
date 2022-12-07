#pragma once

#include "Staff.h"
#include "S_Adresse_Form.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;


namespace PjtFinal {

	/// <summary>
	/// Description résumée de admin_form
	/// </summary>
	public ref class admin_form : public System::Windows::Forms::Form
	{
		SqlConnection^ sqlConn = gcnew SqlConnection();
		SqlCommand^ sqlCmd = gcnew SqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		DataTable^ sqldt = gcnew DataTable();
		DataTable^ sqLDt = gcnew DataTable();
		DataTable^ sqlDtCmd = gcnew DataTable();
		SqlDataAdapter^ sqlDta = gcnew SqlDataAdapter();
	private: System::Windows::Forms::DataGridView^ dtgClient;



	private: System::Windows::Forms::DataGridView^ dtgArticle;
	private: System::Windows::Forms::ComboBox^ cbTva;
		   

	private: System::Windows::Forms::DataGridView^ dtgCommand;
		   
		   SqlDataReader^ sqLRd;
		   SqlDataReader^ sqlRd;
		   SqlDataReader^ sqlrd;
	private: System::Windows::Forms::Label^ label24;
		   SqlDataReader^ sqlRdCmd;
	public:
		admin_form(void)
		{
			InitializeComponent();
			StaffDB();
			RefreshStaffDB();
			ClientDB();
			RefreshClientDB();
			StockDB();
			RefreshArticleDB();
			CommandBD();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~admin_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ profil_button;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnQuitter;
	private: System::Windows::Forms::Button^ btnAdresse;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnSupprimer;
	private: System::Windows::Forms::Button^ btnMaj;
	private: System::Windows::Forms::Button^ btnRafraichir;
	private: System::Windows::Forms::Button^ btnAjouter;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ tbSEmail;

	private: System::Windows::Forms::TextBox^ tbSupNom;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tbSPrenom;

	private: System::Windows::Forms::TextBox^ tbSNom;

	private: System::Windows::Forms::TextBox^ tbSId;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cbSup;
	private: System::Windows::Forms::TextBox^ tbSMdp;


	private: System::Windows::Forms::TextBox^ tbDateE;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
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
private: System::Windows::Forms::TextBox^ tbDatePA;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;

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
private: System::Windows::Forms::DataGridView^ dtgStaff;



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
			this->btnQuitter = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->profil_button = (gcnew System::Windows::Forms::Button());
			this->btnAdresse = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->dtgStaff = (gcnew System::Windows::Forms::DataGridView());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnSupprimer = (gcnew System::Windows::Forms::Button());
			this->btnMaj = (gcnew System::Windows::Forms::Button());
			this->btnRafraichir = (gcnew System::Windows::Forms::Button());
			this->btnAjouter = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tbSMdp = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->cbSup = (gcnew System::Windows::Forms::ComboBox());
			this->tbDateE = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tbSEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbSupNom = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tbSPrenom = (gcnew System::Windows::Forms::TextBox());
			this->tbSNom = (gcnew System::Windows::Forms::TextBox());
			this->tbSId = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->dtgClient = (gcnew System::Windows::Forms::DataGridView());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->tbDatePA = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dtgCommand = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->dtgArticle = (gcnew System::Windows::Forms::DataGridView());
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
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgStaff))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgClient))->BeginInit();
			this->panel9->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgCommand))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgArticle))->BeginInit();
			this->panel12->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->panel1->Controls->Add(this->btnQuitter);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->profil_button);
			this->panel1->Controls->Add(this->btnAdresse);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(267, 828);
			this->panel1->TabIndex = 0;
			// 
			// btnQuitter
			// 
			this->btnQuitter->FlatAppearance->BorderSize = 0;
			this->btnQuitter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnQuitter->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuitter->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnQuitter->Location = System::Drawing::Point(0, 645);
			this->btnQuitter->Margin = System::Windows::Forms::Padding(4);
			this->btnQuitter->Name = L"btnQuitter";
			this->btnQuitter->Size = System::Drawing::Size(267, 80);
			this->btnQuitter->TabIndex = 9;
			this->btnQuitter->Text = L"        Quitter";
			this->btnQuitter->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnQuitter->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnQuitter->UseVisualStyleBackColor = true;
			this->btnQuitter->Click += gcnew System::EventHandler(this, &admin_form::btnQuitter_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(0, 557);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(267, 80);
			this->button4->TabIndex = 8;
			this->button4->Text = L"        Statistiques";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &admin_form::button4_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(0, 469);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(267, 80);
			this->button3->TabIndex = 7;
			this->button3->Text = L"        Stock";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &admin_form::button3_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(0, 381);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(267, 80);
			this->button2->TabIndex = 6;
			this->button2->Text = L"        Commande";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &admin_form::button2_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 301);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(267, 72);
			this->button1->TabIndex = 5;
			this->button1->Text = L"        Client";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &admin_form::button1_Click);
			// 
			// profil_button
			// 
			this->profil_button->FlatAppearance->BorderSize = 0;
			this->profil_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->profil_button->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profil_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->profil_button->Location = System::Drawing::Point(0, 213);
			this->profil_button->Margin = System::Windows::Forms::Padding(4);
			this->profil_button->Name = L"profil_button";
			this->profil_button->Size = System::Drawing::Size(267, 80);
			this->profil_button->TabIndex = 4;
			this->profil_button->Text = L"        Personnel";
			this->profil_button->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->profil_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->profil_button->UseVisualStyleBackColor = true;
			this->profil_button->Click += gcnew System::EventHandler(this, &admin_form::profil_button_Click);
			// 
			// btnAdresse
			// 
			this->btnAdresse->FlatAppearance->BorderSize = 0;
			this->btnAdresse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdresse->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdresse->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdresse->Location = System::Drawing::Point(0, 125);
			this->btnAdresse->Margin = System::Windows::Forms::Padding(4);
			this->btnAdresse->Name = L"btnAdresse";
			this->btnAdresse->Size = System::Drawing::Size(267, 80);
			this->btnAdresse->TabIndex = 10;
			this->btnAdresse->Text = L"        Adresse";
			this->btnAdresse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdresse->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnAdresse->UseVisualStyleBackColor = true;
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
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Gray;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(267, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1314, 121);
			this->panel2->TabIndex = 1;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(267, 121);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1335, 713);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panel6);
			this->tabPage1->Controls->Add(this->panel5);
			this->tabPage1->Controls->Add(this->panel4);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(1327, 684);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Personnel";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->dtgStaff);
			this->panel6->Location = System::Drawing::Point(7, 212);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1291, 458);
			this->panel6->TabIndex = 2;
			// 
			// dtgStaff
			// 
			this->dtgStaff->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dtgStaff->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtgStaff->Location = System::Drawing::Point(8, 3);
			this->dtgStaff->Name = L"dtgStaff";
			this->dtgStaff->RowHeadersWidth = 51;
			this->dtgStaff->RowTemplate->Height = 24;
			this->dtgStaff->Size = System::Drawing::Size(1284, 452);
			this->dtgStaff->TabIndex = 0;
			this->dtgStaff->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &admin_form::dataGridView1_CellContentClick);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->btnReset);
			this->panel5->Controls->Add(this->btnSupprimer);
			this->panel5->Controls->Add(this->btnMaj);
			this->panel5->Controls->Add(this->btnRafraichir);
			this->panel5->Controls->Add(this->btnAjouter);
			this->panel5->Location = System::Drawing::Point(7, 153);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1291, 53);
			this->panel5->TabIndex = 1;
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(704, 4);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(170, 46);
			this->btnReset->TabIndex = 4;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &admin_form::btnReset_Click);
			// 
			// btnSupprimer
			// 
			this->btnSupprimer->Location = System::Drawing::Point(530, 4);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(170, 46);
			this->btnSupprimer->TabIndex = 3;
			this->btnSupprimer->Text = L"Supprimer";
			this->btnSupprimer->UseVisualStyleBackColor = true;
			this->btnSupprimer->Click += gcnew System::EventHandler(this, &admin_form::btnSupprimer_Click);
			// 
			// btnMaj
			// 
			this->btnMaj->Location = System::Drawing::Point(354, 4);
			this->btnMaj->Name = L"btnMaj";
			this->btnMaj->Size = System::Drawing::Size(170, 46);
			this->btnMaj->TabIndex = 2;
			this->btnMaj->Text = L"Mise à jour";
			this->btnMaj->UseVisualStyleBackColor = true;
			this->btnMaj->Click += gcnew System::EventHandler(this, &admin_form::btnMaj_Click);
			// 
			// btnRafraichir
			// 
			this->btnRafraichir->Location = System::Drawing::Point(180, 4);
			this->btnRafraichir->Name = L"btnRafraichir";
			this->btnRafraichir->Size = System::Drawing::Size(170, 46);
			this->btnRafraichir->TabIndex = 1;
			this->btnRafraichir->Text = L"Rafraichir";
			this->btnRafraichir->UseVisualStyleBackColor = true;
			this->btnRafraichir->Click += gcnew System::EventHandler(this, &admin_form::btnRafraichir_Click);
			// 
			// btnAjouter
			// 
			this->btnAjouter->Location = System::Drawing::Point(4, 4);
			this->btnAjouter->Name = L"btnAjouter";
			this->btnAjouter->Size = System::Drawing::Size(170, 46);
			this->btnAjouter->TabIndex = 0;
			this->btnAjouter->Text = L"Ajouter";
			this->btnAjouter->UseVisualStyleBackColor = true;
			this->btnAjouter->Click += gcnew System::EventHandler(this, &admin_form::btnAjouter_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->tbSMdp);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->cbSup);
			this->panel4->Controls->Add(this->tbDateE);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->tbSEmail);
			this->panel4->Controls->Add(this->tbSupNom);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->tbSPrenom);
			this->panel4->Controls->Add(this->tbSNom);
			this->panel4->Controls->Add(this->tbSId);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Location = System::Drawing::Point(7, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1291, 144);
			this->panel4->TabIndex = 0;
			// 
			// tbSMdp
			// 
			this->tbSMdp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSMdp->Location = System::Drawing::Point(1051, 7);
			this->tbSMdp->Name = L"tbSMdp";
			this->tbSMdp->Size = System::Drawing::Size(221, 30);
			this->tbSMdp->TabIndex = 15;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(887, 10);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(102, 25);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Staff_Mdp";
			// 
			// cbSup
			// 
			this->cbSup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbSup->FormattingEnabled = true;
			this->cbSup->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"True", L"False" });
			this->cbSup->Location = System::Drawing::Point(597, 7);
			this->cbSup->Name = L"cbSup";
			this->cbSup->Size = System::Drawing::Size(277, 33);
			this->cbSup->TabIndex = 16;
			// 
			// tbDateE
			// 
			this->tbDateE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDateE->Location = System::Drawing::Point(1051, 49);
			this->tbDateE->Name = L"tbDateE";
			this->tbDateE->Size = System::Drawing::Size(221, 30);
			this->tbDateE->TabIndex = 14;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(887, 54);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(158, 25);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Date_Embauche";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbSEmail
			// 
			this->tbSEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSEmail->Location = System::Drawing::Point(597, 90);
			this->tbSEmail->Name = L"tbSEmail";
			this->tbSEmail->Size = System::Drawing::Size(277, 30);
			this->tbSEmail->TabIndex = 11;
			// 
			// tbSupNom
			// 
			this->tbSupNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSupNom->Location = System::Drawing::Point(597, 49);
			this->tbSupNom->Name = L"tbSupNom";
			this->tbSupNom->Size = System::Drawing::Size(277, 30);
			this->tbSupNom->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(461, 93);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(111, 25);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Staff_Email";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(461, 54);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 25);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Sup_Nom";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(461, 12);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 25);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Supérieur";
			// 
			// tbSPrenom
			// 
			this->tbSPrenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSPrenom->Location = System::Drawing::Point(151, 90);
			this->tbSPrenom->Name = L"tbSPrenom";
			this->tbSPrenom->Size = System::Drawing::Size(277, 30);
			this->tbSPrenom->TabIndex = 5;
			// 
			// tbSNom
			// 
			this->tbSNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSNom->Location = System::Drawing::Point(151, 49);
			this->tbSNom->Name = L"tbSNom";
			this->tbSNom->Size = System::Drawing::Size(277, 30);
			this->tbSNom->TabIndex = 4;
			// 
			// tbSId
			// 
			this->tbSId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSId->Location = System::Drawing::Point(151, 7);
			this->tbSId->Name = L"tbSId";
			this->tbSId->Size = System::Drawing::Size(277, 30);
			this->tbSId->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(15, 93);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(131, 25);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Staff_Prenom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(15, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Staff_Nom";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(15, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 25);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Id_Staff";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->panel7);
			this->tabPage2->Controls->Add(this->panel8);
			this->tabPage2->Controls->Add(this->panel9);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(1327, 684);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Client";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->button5);
			this->panel7->Controls->Add(this->button6);
			this->panel7->Controls->Add(this->button7);
			this->panel7->Controls->Add(this->button8);
			this->panel7->Controls->Add(this->button9);
			this->panel7->Location = System::Drawing::Point(18, 159);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1291, 53);
			this->panel7->TabIndex = 4;
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
			this->button9->Click += gcnew System::EventHandler(this, &admin_form::button9_Click);
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->dtgClient);
			this->panel8->Location = System::Drawing::Point(18, 218);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1291, 458);
			this->panel8->TabIndex = 5;
			// 
			// dtgClient
			// 
			this->dtgClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtgClient->Location = System::Drawing::Point(4, 4);
			this->dtgClient->Name = L"dtgClient";
			this->dtgClient->RowHeadersWidth = 51;
			this->dtgClient->RowTemplate->Height = 24;
			this->dtgClient->Size = System::Drawing::Size(1276, 448);
			this->dtgClient->TabIndex = 0;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->label24);
			this->panel9->Controls->Add(this->tbDatePA);
			this->panel9->Controls->Add(this->label2);
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
			this->panel9->Location = System::Drawing::Point(18, 9);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1291, 144);
			this->panel9->TabIndex = 3;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(896, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 25);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Date_Premier_Achat";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->label13->Click += gcnew System::EventHandler(this, &admin_form::label13_Click);
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
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dtgCommand);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1327, 684);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Commande";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dtgCommand
			// 
			this->dtgCommand->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtgCommand->Location = System::Drawing::Point(3, 118);
			this->dtgCommand->Name = L"dtgCommand";
			this->dtgCommand->RowHeadersWidth = 51;
			this->dtgCommand->RowTemplate->Height = 24;
			this->dtgCommand->Size = System::Drawing::Size(1298, 448);
			this->dtgCommand->TabIndex = 1;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->panel10);
			this->tabPage4->Controls->Add(this->panel11);
			this->tabPage4->Controls->Add(this->panel12);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Margin = System::Windows::Forms::Padding(4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1327, 684);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Stock";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->button10);
			this->panel10->Controls->Add(this->button11);
			this->panel10->Controls->Add(this->button12);
			this->panel10->Controls->Add(this->button13);
			this->panel10->Controls->Add(this->button14);
			this->panel10->Location = System::Drawing::Point(18, 159);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(1291, 53);
			this->panel10->TabIndex = 7;
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
			this->button14->Click += gcnew System::EventHandler(this, &admin_form::button14_Click);
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->dtgArticle);
			this->panel11->Location = System::Drawing::Point(18, 218);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(1291, 458);
			this->panel11->TabIndex = 8;
			// 
			// dtgArticle
			// 
			this->dtgArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtgArticle->Location = System::Drawing::Point(4, 3);
			this->dtgArticle->Name = L"dtgArticle";
			this->dtgArticle->RowHeadersWidth = 51;
			this->dtgArticle->RowTemplate->Height = 24;
			this->dtgArticle->Size = System::Drawing::Size(1264, 446);
			this->dtgArticle->TabIndex = 0;
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
			this->panel12->Location = System::Drawing::Point(18, 9);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(1291, 144);
			this->panel12->TabIndex = 6;
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
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label5);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Margin = System::Windows::Forms::Padding(4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(1327, 684);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Statistiques";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(404, 236);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(276, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Simulation des différentes demande du projet";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.75F));
			this->label24->Location = System::Drawing::Point(594, 122);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(137, 17);
			this->label24->TabIndex = 20;
			this->label24->Text = L"* Format MM/JJ/AAAA";
			// 
			// admin_form
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
			this->Name = L"admin_form";
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgStaff))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgClient))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgCommand))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgArticle))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	public: bool kcreerstaff = false;

	private: System::Void profil_button_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		tabControl1->SelectedTab = tabControl1->TabPages[0];

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedTab = tabControl1->TabPages[1];
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedTab = tabControl1->TabPages[2];
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedTab = tabControl1->TabPages[3];
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedTab = tabControl1->TabPages[4];
	}
	private: System::Void btnQuitter_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::DialogResult iExit;

		try
		{
			iExit = MessageBox::Show("Voulez-vous vraiment quitter ?", "Data",
				MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (iExit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data",
				MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}

	private: System::Void StaffDB()
	{
		sqlConn->ConnectionString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
		sqlConn->Open();

		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "Select * from staff";
		sqlRd = sqlCmd->ExecuteReader();
		sqlDt->Load(sqlRd);
		sqlRd->Close();
		sqlConn->Close();
		dtgStaff->DataSource = sqlDt;
	}

	private: System::Void RefreshStaffDB()
	{
		try
		{
			sqlConn->ConnectionString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
			sqlCmd->Connection = sqlConn;
			
			SqlDataAdapter^ sqlDta = gcnew SqlDataAdapter("select * from staff", sqlConn);
			DataTable^ sqlDt = gcnew DataTable();
			sqlDta->Fill(sqlDt);
			dtgStaff->DataSource = sqlDt;
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data",
				MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}

	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			tbSId->Text = "";
			tbSNom->Text = "";
			tbSPrenom->Text = "";
			tbSEmail->Text = "";
			tbSMdp->Text = "";
			tbSupNom->Text = "";
			tbDateE->Text = "";
			cbSup->Text = "";
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data",
			MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}


	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
	{
		try
		{
			tbSId->Text = dtgStaff->SelectedRows[0]->Cells[0]->Value->ToString();
			tbSNom->Text = dtgStaff->SelectedRows[0]->Cells[1]->Value->ToString();
			tbSPrenom->Text = dtgStaff->SelectedRows[0]->Cells[2]->Value->ToString();
			tbSEmail->Text = dtgStaff->SelectedRows[0]->Cells[3]->Value->ToString();
			tbSMdp->Text = dtgStaff->SelectedRows[0]->Cells[4]->Value->ToString();
			tbSupNom->Text = dtgStaff->SelectedRows[0]->Cells[5]->Value->ToString();
			tbDateE->Text = dtgStaff->SelectedRows[0]->Cells[6]->Value->ToString();
			cbSup->Text = dtgStaff->SelectedRows[0]->Cells[7]->Value->ToString();
		}


		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data",
			MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}

	}
	private: System::Void btnRafraichir_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		RefreshStaffDB();
	}

	private: System::Void btnAjouter_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		sqlConn->ConnectionString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
		sqlConn->Open();

		sqlCmd->Connection = sqlConn;

		try
		{
			sqlCmd->CommandText = "insert into staff (Id_Staff, Staff_Nom, Staff_Prenom," +
			"Sup_Nom, Superieur, Staff_Email, Staff_Mdp, Date_Embauche) values('" + tbSId->Text + "','" + tbSNom->Text + "', '" + tbSPrenom->Text + "','"
			"" + tbSupNom->Text + "', '" + cbSup->Text + "', '" + tbSEmail->Text + "', '" + tbSMdp->Text + "', '" + tbDateE->Text + "')";
			
			sqlCmd->ExecuteNonQuery();
			sqlConn->Close();
			StaffDB();
			RefreshStaffDB();
		}


		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data",
				MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}

	}
	private: System::Void btnMaj_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			sqlConn->ConnectionString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
			sqlCmd->Connection = sqlConn;

			String^ s_id = tbSId->Text;
			String^ s_nom = tbSNom->Text;
			String^ s_prenom= tbSPrenom->Text;
			String^ s_supNom = tbSupNom->Text;
			String^ s_superieur = cbSup->Text;
			String^ s_email = tbSEmail->Text;
			String^ s_mdp = tbSMdp->Text;
			String^ s_dateE = tbDateE->Text;

			sqlCmd->CommandText = "update staff set Id_Staff = '" + s_id + "', Staff_Nom '" +  s_nom + "', Staff_Prenom '" + s_prenom + "', Sup_Nom '" +  s_supNom + "', Superieur '" + s_superieur + "', Staff_Email '"+s_email+"', Staff_Mdp '"+s_mdp+"', Date_Embauche '"+ s_dateE +"' WHERE Id_Staff = " + s_id + "", sqlConn;

		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data",
				MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}

	}
	private: System::Void btnSupprimer_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			sqlConn->ConnectionString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
			sqlCmd->Connection = sqlConn;

			String^ SId = tbSId->Text;
			SqlCommand^ sqlCmd = gcnew SqlCommand("delete from staff where Id_Staff = " + SId + "", sqlConn);
			sqlConn->Open();

			sqlRd = sqlCmd->ExecuteReader();
			MessageBox::Show("Record Deleted", "Data",
			MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data",
			MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
		RefreshStaffDB();
	}


	private: System::Void ClientDB()
	{
		sqlConn->ConnectionString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
		sqlConn->Open();

		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "Select * from client";
		sqlrd = sqlCmd->ExecuteReader();
		sqldt->Load(sqlrd);
		sqlrd->Close();
		sqlConn->Close();
		dtgClient->DataSource = sqldt;
	}

	private: System::Void RefreshClientDB()
	{
		try
		{
			sqlConn->ConnectionString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
			sqlCmd->Connection = sqlConn;

			SqlDataAdapter^ sqlDta = gcnew SqlDataAdapter("select * from client", sqlConn);
			DataTable^ sqlDt = gcnew DataTable();
			sqlDta->Fill(sqlDt);
			dtgClient->DataSource = sqlDt;
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data",
				MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}


	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		sqlConn->ConnectionString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
		sqlConn->Open();

		sqlCmd->Connection = sqlConn;

		try
		{
			sqlCmd->CommandText = "insert into client (Id_Client, Client_Nom, Client_Prenom," +
				"Client_DateN, CLient_Email, Client_Mdp, Premier_Achat) values('" + tbCId->Text + "','" + tbCNom->Text + "', '" + tbCPrenom->Text + "','"
				"" + tbCDateN->Text + "', '" + tbCEmail->Text + "', '" + tbCMdp->Text + "', '" + tbDatePA->Text + "')";

			sqlCmd->ExecuteNonQuery();
			sqlConn->Close();
			ClientDB();
			RefreshClientDB();
		}


		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data",
				MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}

	private: System::Void StockDB()
	{
		sqlConn->ConnectionString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
		sqlConn->Open();

		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "Select * from Description_Article";
		sqLRd = sqlCmd->ExecuteReader();
		sqLDt->Load(sqlrd);
		sqLRd->Close();
		sqlConn->Close();
		dtgClient->DataSource = sqldt;
	}

	private: System::Void RefreshArticleDB()
	{
		try
		{
			sqlConn->ConnectionString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
			sqlCmd->Connection = sqlConn;

			SqlDataAdapter^ sqlDta = gcnew SqlDataAdapter("select * from Description_Article", sqlConn);
			DataTable^ sqLDt = gcnew DataTable();
			sqlDta->Fill(sqLDt);
			dtgArticle->DataSource = sqLDt;
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data",
				MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}


	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		sqlConn->ConnectionString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
		sqlConn->Open();

		sqlCmd->Connection = sqlConn;

		try
		{
			sqlCmd->CommandText = "insert into Description_Article (Id_Desc_Article,Article_Nom, Article_Type," +
				"Article_Couleur, Article_Prix, Article_Quantite, Article_Taux_TVA) values( '"+tbAId->Text+"' '" + tbANom->Text + "', '" + tbAType->Text + "','"
				"" + tbACouleur->Text + "', '" + tbAPrix->Text + "', '" + tbAQuantite->Text + "', '" + cbTva->Text + "')";

			sqlCmd->ExecuteNonQuery();
			sqlConn->Close();
			StockDB();
			RefreshArticleDB();
		}


		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data",
				MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}


	private: System::Void CommandBD()
	{
		sqlConn->ConnectionString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
		sqlConn->Open();

		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "Select * from Commande";
		sqlRdCmd = sqlCmd->ExecuteReader();
		sqlDtCmd->Load(sqlRdCmd);
		sqlRdCmd->Close();
		sqlConn->Close();
		dtgCommand->DataSource = sqlDtCmd;
	}


};
}