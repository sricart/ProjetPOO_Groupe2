#pragma once

#include "Client.h"


namespace PjtFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de c_inscription_form
	/// </summary>
	public ref class c_inscription_form : public System::Windows::Forms::Form
	{
	public:
		c_inscription_form(void)
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
		~c_inscription_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ lbNom;

	private: System::Windows::Forms::Label^ lbPrenom;
	private: System::Windows::Forms::Label^ lbDateNaissance;


	private: System::Windows::Forms::Label^ lbEmail;
	private: System::Windows::Forms::Label^ lbMdp;


	private: System::Windows::Forms::Label^ lbConfirmeMdp;
	private: System::Windows::Forms::TextBox^ tbNom;
	private: System::Windows::Forms::TextBox^ tbPrenom;


	private: System::Windows::Forms::TextBox^ tbDateNaissance;
	private: System::Windows::Forms::TextBox^ tbEmail;


	private: System::Windows::Forms::TextBox^ tbMdp;
	private: System::Windows::Forms::TextBox^ tbConfirmeMdp;


	private: System::Windows::Forms::Button^ btnInscrire;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::LinkLabel^ llConnect;

	private: System::Windows::Forms::Button^ btnQuitter;
	private: System::Windows::Forms::Label^ lbInscription;
	private: System::Windows::Forms::Label^ label1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(c_inscription_form::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->lbNom = (gcnew System::Windows::Forms::Label());
			this->lbPrenom = (gcnew System::Windows::Forms::Label());
			this->lbDateNaissance = (gcnew System::Windows::Forms::Label());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->lbMdp = (gcnew System::Windows::Forms::Label());
			this->lbConfirmeMdp = (gcnew System::Windows::Forms::Label());
			this->tbNom = (gcnew System::Windows::Forms::TextBox());
			this->tbPrenom = (gcnew System::Windows::Forms::TextBox());
			this->tbDateNaissance = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbMdp = (gcnew System::Windows::Forms::TextBox());
			this->tbConfirmeMdp = (gcnew System::Windows::Forms::TextBox());
			this->btnInscrire = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->llConnect = (gcnew System::Windows::Forms::LinkLabel());
			this->btnQuitter = (gcnew System::Windows::Forms::Button());
			this->lbInscription = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -1);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(201, 91);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(376, 111);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(823, 594);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// lbNom
			// 
			this->lbNom->AutoSize = true;
			this->lbNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->lbNom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNom->Location = System::Drawing::Point(529, 255);
			this->lbNom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNom->Name = L"lbNom";
			this->lbNom->Size = System::Drawing::Size(48, 23);
			this->lbNom->TabIndex = 2;
			this->lbNom->Text = L"Nom";
			// 
			// lbPrenom
			// 
			this->lbPrenom->AutoSize = true;
			this->lbPrenom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->lbPrenom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPrenom->Location = System::Drawing::Point(843, 255);
			this->lbPrenom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbPrenom->Name = L"lbPrenom";
			this->lbPrenom->Size = System::Drawing::Size(70, 23);
			this->lbPrenom->TabIndex = 3;
			this->lbPrenom->Text = L"Prénom";
			// 
			// lbDateNaissance
			// 
			this->lbDateNaissance->AutoSize = true;
			this->lbDateNaissance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->lbDateNaissance->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDateNaissance->Location = System::Drawing::Point(529, 373);
			this->lbDateNaissance->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbDateNaissance->Name = L"lbDateNaissance";
			this->lbDateNaissance->Size = System::Drawing::Size(148, 23);
			this->lbDateNaissance->TabIndex = 4;
			this->lbDateNaissance->Text = L"Date de naissance";
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->lbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEmail->Location = System::Drawing::Point(843, 373);
			this->lbEmail->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(106, 23);
			this->lbEmail->TabIndex = 5;
			this->lbEmail->Text = L"Adresse mail";
			// 
			// lbMdp
			// 
			this->lbMdp->AutoSize = true;
			this->lbMdp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->lbMdp->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMdp->Location = System::Drawing::Point(529, 486);
			this->lbMdp->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbMdp->Name = L"lbMdp";
			this->lbMdp->Size = System::Drawing::Size(112, 23);
			this->lbMdp->TabIndex = 6;
			this->lbMdp->Text = L"Mot de passe";
			// 
			// lbConfirmeMdp
			// 
			this->lbConfirmeMdp->AutoSize = true;
			this->lbConfirmeMdp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->lbConfirmeMdp->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbConfirmeMdp->Location = System::Drawing::Point(843, 486);
			this->lbConfirmeMdp->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbConfirmeMdp->Name = L"lbConfirmeMdp";
			this->lbConfirmeMdp->Size = System::Drawing::Size(217, 23);
			this->lbConfirmeMdp->TabIndex = 7;
			this->lbConfirmeMdp->Text = L"Confirmation mot de passe";
			// 
			// tbNom
			// 
			this->tbNom->Location = System::Drawing::Point(533, 281);
			this->tbNom->Margin = System::Windows::Forms::Padding(4);
			this->tbNom->Name = L"tbNom";
			this->tbNom->Size = System::Drawing::Size(200, 22);
			this->tbNom->TabIndex = 8;
			// 
			// tbPrenom
			// 
			this->tbPrenom->Location = System::Drawing::Point(847, 279);
			this->tbPrenom->Margin = System::Windows::Forms::Padding(4);
			this->tbPrenom->Name = L"tbPrenom";
			this->tbPrenom->Size = System::Drawing::Size(200, 22);
			this->tbPrenom->TabIndex = 9;
			// 
			// tbDateNaissance
			// 
			this->tbDateNaissance->Location = System::Drawing::Point(533, 398);
			this->tbDateNaissance->Margin = System::Windows::Forms::Padding(4);
			this->tbDateNaissance->Name = L"tbDateNaissance";
			this->tbDateNaissance->Size = System::Drawing::Size(200, 22);
			this->tbDateNaissance->TabIndex = 10;
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(847, 398);
			this->tbEmail->Margin = System::Windows::Forms::Padding(4);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(200, 22);
			this->tbEmail->TabIndex = 11;
			// 
			// tbMdp
			// 
			this->tbMdp->Location = System::Drawing::Point(533, 511);
			this->tbMdp->Margin = System::Windows::Forms::Padding(4);
			this->tbMdp->Name = L"tbMdp";
			this->tbMdp->Size = System::Drawing::Size(200, 22);
			this->tbMdp->TabIndex = 12;
			// 
			// tbConfirmeMdp
			// 
			this->tbConfirmeMdp->Location = System::Drawing::Point(847, 511);
			this->tbConfirmeMdp->Margin = System::Windows::Forms::Padding(4);
			this->tbConfirmeMdp->Name = L"tbConfirmeMdp";
			this->tbConfirmeMdp->Size = System::Drawing::Size(200, 22);
			this->tbConfirmeMdp->TabIndex = 13;
			// 
			// btnInscrire
			// 
			this->btnInscrire->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnInscrire->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInscrire->Location = System::Drawing::Point(605, 602);
			this->btnInscrire->Margin = System::Windows::Forms::Padding(4);
			this->btnInscrire->Name = L"btnInscrire";
			this->btnInscrire->Size = System::Drawing::Size(180, 58);
			this->btnInscrire->TabIndex = 14;
			this->btnInscrire->Text = L"S\'inscrire";
			this->btnInscrire->UseVisualStyleBackColor = false;
			this->btnInscrire->Click += gcnew System::EventHandler(this, &c_inscription_form::btnInscrire_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(693, 709);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 16);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Déjà client, ";
			// 
			// llConnect
			// 
			this->llConnect->AutoSize = true;
			this->llConnect->Location = System::Drawing::Point(768, 709);
			this->llConnect->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->llConnect->Name = L"llConnect";
			this->llConnect->Size = System::Drawing::Size(101, 16);
			this->llConnect->TabIndex = 16;
			this->llConnect->TabStop = true;
			this->llConnect->Text = L"connectez-vous";
			this->llConnect->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &c_inscription_form::llConnect_LinkClicked);
			// 
			// btnQuitter
			// 
			this->btnQuitter->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnQuitter->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuitter->Location = System::Drawing::Point(793, 602);
			this->btnQuitter->Margin = System::Windows::Forms::Padding(4);
			this->btnQuitter->Name = L"btnQuitter";
			this->btnQuitter->Size = System::Drawing::Size(180, 58);
			this->btnQuitter->TabIndex = 17;
			this->btnQuitter->Text = L"Quitter";
			this->btnQuitter->UseVisualStyleBackColor = false;
			this->btnQuitter->Click += gcnew System::EventHandler(this, &c_inscription_form::btnQuitter_Click);
			// 
			// lbInscription
			// 
			this->lbInscription->AutoSize = true;
			this->lbInscription->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->lbInscription->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbInscription->Location = System::Drawing::Point(700, 133);
			this->lbInscription->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbInscription->Name = L"lbInscription";
			this->lbInscription->Size = System::Drawing::Size(128, 32);
			this->lbInscription->TabIndex = 18;
			this->lbInscription->Text = L"Inscription";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.75F));
			this->label1->Location = System::Drawing::Point(596, 424);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 17);
			this->label1->TabIndex = 19;
			this->label1->Text = L"* Format MM/JJ/AAAA";
			// 
			// c_inscription_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1584, 838);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbInscription);
			this->Controls->Add(this->btnQuitter);
			this->Controls->Add(this->llConnect);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btnInscrire);
			this->Controls->Add(this->tbConfirmeMdp);
			this->Controls->Add(this->tbMdp);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbDateNaissance);
			this->Controls->Add(this->tbPrenom);
			this->Controls->Add(this->tbNom);
			this->Controls->Add(this->lbConfirmeMdp);
			this->Controls->Add(this->lbMdp);
			this->Controls->Add(this->lbEmail);
			this->Controls->Add(this->lbDateNaissance);
			this->Controls->Add(this->lbPrenom);
			this->Controls->Add(this->lbNom);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"c_inscription_form";
			this->Text = L"c_inscription_form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: bool kclient = true;

	public: bool kcconnect = false;

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

		this->kclient = false;
	}

	private: System::Void llConnect_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
	{
		this->kcconnect = true;
		this->Close();
	}

	public: CGestion::Client^ client = nullptr;


	private: System::Void btnInscrire_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ nom = tbNom->Text;
		String^ prenom = tbPrenom->Text;
		String^ dateN = tbDateNaissance->Text;
		String^ email = tbEmail->Text;
		String^ mdp = tbMdp->Text;
		String^ confirmMdp = tbConfirmeMdp->Text;

		if (tbNom->Text == "" || tbPrenom->Text == "" || tbDateNaissance->Text == "" 
		|| tbEmail->Text == "" || tbMdp->Text == "" || tbConfirmeMdp->Text == "")

		{
			MessageBox::Show("Attention, veuillez remplir tous les champs nécessaire");
			MessageBoxButtons::OK;
			return;
		}

		if (mdp != confirmMdp)
		{
			MessageBox::Show("Attention, mot de passe non identique");
			MessageBoxButtons::OK;
			return;
		}

		else
		{
			try
			{
				String^ connString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "INSERT INTO Client " + "(Client_Nom, Client_Prenom, Client_DateN, Client_Email, Client_Mdp) VALUES " +
				"(@nom, @prenom, @dateN, @email, @mdp);";

				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@nom", nom);
				command.Parameters->AddWithValue("@prenom", prenom);
				command.Parameters->AddWithValue("@dateN", dateN);
				command.Parameters->AddWithValue("@email", email);
				command.Parameters->AddWithValue("@mdp", mdp);

				command.ExecuteNonQuery();
				client = gcnew CGestion::Client;
				client->c_nom = nom;
				client->c_prenom = prenom;
				client->c_dateN = dateN;
				client->c_email = email;
				client->c_mdp = mdp;

				kclient = false;

				Application::Exit();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Failed to register new user",
					"Register Failure", MessageBoxButtons::OK);
			}
		}
	}
};
}