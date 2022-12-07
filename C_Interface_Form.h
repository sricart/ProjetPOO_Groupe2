#pragma once

#include "C_Adresse_Form.h"
#include "C_Adresse_Form.h"
#include "Client.h"

namespace PjtFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Sql;

	/// <summary>
	/// Description résumée de client_accueil_form
	/// </summary>
	public ref class client_accueil_form : public System::Windows::Forms::Form
	{
	public:
		client_accueil_form(void)
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
		~client_accueil_form()
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
	private: System::Windows::Forms::Button^ profil_button;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnModifier;
	private: System::Windows::Forms::TextBox^ tbMdp;


	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::TextBox^ tbPrenom;
	private: System::Windows::Forms::TextBox^ tbDateN;


	private: System::Windows::Forms::TextBox^ tbNom;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::LinkLabel^ llAjouterAdresse;
	private: System::Windows::Forms::Button^ btnQuitter;
	private: System::Windows::Forms::DataGridView^ dataGridCatalogue;
	private: System::Windows::Forms::Label^ label24;








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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->profil_button = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->llAjouterAdresse = (gcnew System::Windows::Forms::LinkLabel());
			this->btnModifier = (gcnew System::Windows::Forms::Button());
			this->tbMdp = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPrenom = (gcnew System::Windows::Forms::TextBox());
			this->tbDateN = (gcnew System::Windows::Forms::TextBox());
			this->tbNom = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridCatalogue = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCatalogue))->BeginInit();
			this->tabPage8->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->panel1->Controls->Add(this->btnQuitter);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->profil_button);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 681);
			this->panel1->TabIndex = 0;
			// 
			// btnQuitter
			// 
			this->btnQuitter->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnQuitter->FlatAppearance->BorderSize = 0;
			this->btnQuitter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnQuitter->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuitter->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnQuitter->Location = System::Drawing::Point(0, 353);
			this->btnQuitter->Name = L"btnQuitter";
			this->btnQuitter->Size = System::Drawing::Size(200, 65);
			this->btnQuitter->TabIndex = 7;
			this->btnQuitter->Text = L"        Quitter";
			this->btnQuitter->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnQuitter->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnQuitter->UseVisualStyleBackColor = true;
			this->btnQuitter->Click += gcnew System::EventHandler(this, &client_accueil_form::btnQuitter_Click_1);
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(0, 275);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 78);
			this->button3->TabIndex = 6;
			this->button3->Text = L"      Commande";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &client_accueil_form::button3_Click);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(0, 210);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 65);
			this->button2->TabIndex = 5;
			this->button2->Text = L"       Catalogue";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &client_accueil_form::button2_Click);
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 145);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 65);
			this->button1->TabIndex = 4;
			this->button1->Text = L"        Panier";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &client_accueil_form::button1_Click);
			// 
			// profil_button
			// 
			this->profil_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->profil_button->FlatAppearance->BorderSize = 0;
			this->profil_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->profil_button->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profil_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->profil_button->Location = System::Drawing::Point(0, 80);
			this->profil_button->Name = L"profil_button";
			this->profil_button->Size = System::Drawing::Size(200, 65);
			this->profil_button->TabIndex = 3;
			this->profil_button->Text = L"        Profil";
			this->profil_button->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->profil_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->profil_button->UseVisualStyleBackColor = true;
			this->profil_button->Click += gcnew System::EventHandler(this, &client_accueil_form::profil_button_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 80);
			this->panel3->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 77);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Gray;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(200, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1008, 80);
			this->panel2->TabIndex = 1;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Location = System::Drawing::Point(200, 80);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1008, 564);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label24);
			this->tabPage5->Controls->Add(this->label9);
			this->tabPage5->Controls->Add(this->llAjouterAdresse);
			this->tabPage5->Controls->Add(this->btnModifier);
			this->tabPage5->Controls->Add(this->tbMdp);
			this->tabPage5->Controls->Add(this->tbEmail);
			this->tabPage5->Controls->Add(this->tbPrenom);
			this->tabPage5->Controls->Add(this->tbDateN);
			this->tabPage5->Controls->Add(this->tbNom);
			this->tabPage5->Controls->Add(this->label5);
			this->tabPage5->Controls->Add(this->label4);
			this->tabPage5->Controls->Add(this->label3);
			this->tabPage5->Controls->Add(this->label2);
			this->tabPage5->Controls->Add(this->label1);
			this->tabPage5->Location = System::Drawing::Point(4, 28);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1000, 532);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Profil";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(540, 241);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(235, 19);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Souhaitez vous ajouter une adresse \?";
			// 
			// llAjouterAdresse
			// 
			this->llAjouterAdresse->AutoSize = true;
			this->llAjouterAdresse->Location = System::Drawing::Point(541, 267);
			this->llAjouterAdresse->Name = L"llAjouterAdresse";
			this->llAjouterAdresse->Size = System::Drawing::Size(131, 19);
			this->llAjouterAdresse->TabIndex = 12;
			this->llAjouterAdresse->TabStop = true;
			this->llAjouterAdresse->Text = L"Ajouter une adresse";
			this->llAjouterAdresse->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &client_accueil_form::llAjouterAdresse_LinkClicked);
			// 
			// btnModifier
			// 
			this->btnModifier->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModifier->Location = System::Drawing::Point(447, 350);
			this->btnModifier->Name = L"btnModifier";
			this->btnModifier->Size = System::Drawing::Size(113, 44);
			this->btnModifier->TabIndex = 10;
			this->btnModifier->Text = L"Modifier";
			this->btnModifier->UseVisualStyleBackColor = true;
			this->btnModifier->Click += gcnew System::EventHandler(this, &client_accueil_form::btnModifier_Click);
			// 
			// tbMdp
			// 
			this->tbMdp->Location = System::Drawing::Point(312, 267);
			this->tbMdp->Name = L"tbMdp";
			this->tbMdp->Size = System::Drawing::Size(149, 26);
			this->tbMdp->TabIndex = 9;
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(544, 198);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(149, 26);
			this->tbEmail->TabIndex = 8;
			// 
			// tbPrenom
			// 
			this->tbPrenom->Location = System::Drawing::Point(544, 133);
			this->tbPrenom->Name = L"tbPrenom";
			this->tbPrenom->Size = System::Drawing::Size(149, 26);
			this->tbPrenom->TabIndex = 7;
			// 
			// tbDateN
			// 
			this->tbDateN->Location = System::Drawing::Point(312, 198);
			this->tbDateN->Name = L"tbDateN";
			this->tbDateN->Size = System::Drawing::Size(149, 26);
			this->tbDateN->TabIndex = 6;
			// 
			// tbNom
			// 
			this->tbNom->Location = System::Drawing::Point(312, 135);
			this->tbNom->Name = L"tbNom";
			this->tbNom->Size = System::Drawing::Size(149, 26);
			this->tbNom->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(309, 241);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Mot de passe";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(541, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Adresse mail";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(309, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Date de naissance";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(541, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Prénom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(309, 108);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->label6);
			this->tabPage6->Location = System::Drawing::Point(4, 28);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1000, 532);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Panier";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(426, 43);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 19);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Votre panier";
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->dataGridCatalogue);
			this->tabPage7->Location = System::Drawing::Point(4, 28);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(1000, 532);
			this->tabPage7->TabIndex = 2;
			this->tabPage7->Text = L"Catalogue";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// dataGridCatalogue
			// 
			this->dataGridCatalogue->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridCatalogue->Location = System::Drawing::Point(3, 3);
			this->dataGridCatalogue->Name = L"dataGridCatalogue";
			this->dataGridCatalogue->RowHeadersWidth = 51;
			this->dataGridCatalogue->RowTemplate->Height = 24;
			this->dataGridCatalogue->Size = System::Drawing::Size(989, 526);
			this->dataGridCatalogue->TabIndex = 0;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->label8);
			this->tabPage8->Location = System::Drawing::Point(4, 28);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(1000, 532);
			this->tabPage8->TabIndex = 3;
			this->tabPage8->Text = L"Commande";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(389, 95);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(109, 19);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Vos commandes";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.75F));
			this->label24->Location = System::Drawing::Point(324, 224);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(137, 17);
			this->label24->TabIndex = 21;
			this->label24->Text = L"* Format MM/JJ/AAAA";
			// 
			// client_accueil_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1208, 681);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"client_accueil_form";
			this->Text = L"client_accueil_form";
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCatalogue))->EndInit();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	public: bool kcadresse = false;

	public: bool kconnecter = true;

	private: System::Void profil_button_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void btnQuitter_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::DialogResult iExit;

		try
		{
			iExit = MessageBox::Show("Voulez-vous vraiment quitter ?", "Data",
				MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (iExit == System::Windows::Forms::DialogResult::Yes)
			{
				kconnecter = false;
				Application::Exit();
			}
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data",
				MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}


	private: System::Void llAjouterAdresse_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) 
	{
		this->Close();
		kcadresse = true;
	}
	private: System::Void btnQuitter_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::DialogResult iExit;

		try
		{
			iExit = MessageBox::Show("Voulez-vous vraiment quitter ?", "Data",
				MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (iExit == System::Windows::Forms::DialogResult::Yes)
			{
				kconnecter = false;
				Application::Exit();
			}
		}

		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data",
				MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}

	public: CGestion::Client^ client = nullptr;

	private: System::Void btnModifier_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int^ id;
		String^ nom = tbNom->Text;
		String^ prenom = tbPrenom->Text;
		String^ dateN = tbDateN->Text;
		String^ email = tbEmail->Text;
		String^ mdp = tbMdp->Text;

		try
		{
			String^ connString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "UPDATE Client SET Client_Nom '" + nom + "', Client_Prenom '" + prenom + 
			"', Client_DateN '" + dateN + "', Client_Email '" + email + "', Client_Mdp '" + mdp +
			"' WHERE Id_Client = " + id + "";

			SqlCommand command(sqlQuery, % sqlConn);
			SqlDataReader^ reader = command.ExecuteReader();

			command.ExecuteNonQuery();
			client = gcnew CGestion::Client;
			client->c_Id = reader->GetInt32(0);
			client->c_nom = nom;
			client->c_prenom = prenom;
			client->c_dateN = dateN;
			client->c_email = email;
			client->c_mdp = mdp;

			this->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Erreur dans le changement des informations",
				"Erreur", MessageBoxButtons::OK);
		}
	}
};
}