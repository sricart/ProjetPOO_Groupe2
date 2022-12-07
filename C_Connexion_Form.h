#include "C_Inscription_Form.h"
#include "C_Interface_Form.h"
#include "Client.h"

#pragma once

namespace PjtFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de c_connexion_form
	/// </summary>
	public ref class c_connexion_form : public System::Windows::Forms::Form
	{
	public:
		c_connexion_form(void)
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
		~c_connexion_form()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ llInscrire;

	private: System::Windows::Forms::TextBox^ tb_Email;
	private: System::Windows::Forms::TextBox^ tb_Mdp;




	private: System::Windows::Forms::Button^ btnConfirmer;
	private: System::Windows::Forms::Label^ lbConnexion;


	private: System::Windows::Forms::Label^ lbEmail;

	private: System::Windows::Forms::Label^ lbMdp;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnQuitter;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(c_connexion_form::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->llInscrire = (gcnew System::Windows::Forms::LinkLabel());
			this->tb_Email = (gcnew System::Windows::Forms::TextBox());
			this->tb_Mdp = (gcnew System::Windows::Forms::TextBox());
			this->btnConfirmer = (gcnew System::Windows::Forms::Button());
			this->lbConnexion = (gcnew System::Windows::Forms::Label());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->lbMdp = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnQuitter = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(229, 114);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(681, 687);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Si vous n\'avez pas de compte,";
			// 
			// llInscrire
			// 
			this->llInscrire->AutoSize = true;
			this->llInscrire->Location = System::Drawing::Point(880, 687);
			this->llInscrire->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->llInscrire->Name = L"llInscrire";
			this->llInscrire->Size = System::Drawing::Size(60, 16);
			this->llInscrire->TabIndex = 3;
			this->llInscrire->TabStop = true;
			this->llInscrire->Text = L"s\'inscrire";
			this->llInscrire->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &c_connexion_form::inscription_label_LinkClicked);
			// 
			// tb_Email
			// 
			this->tb_Email->Location = System::Drawing::Point(632, 297);
			this->tb_Email->Margin = System::Windows::Forms::Padding(4);
			this->tb_Email->Multiline = true;
			this->tb_Email->Name = L"tb_Email";
			this->tb_Email->Size = System::Drawing::Size(379, 32);
			this->tb_Email->TabIndex = 4;
			// 
			// tb_Mdp
			// 
			this->tb_Mdp->Location = System::Drawing::Point(632, 418);
			this->tb_Mdp->Margin = System::Windows::Forms::Padding(4);
			this->tb_Mdp->Multiline = true;
			this->tb_Mdp->Name = L"tb_Mdp";
			this->tb_Mdp->PasswordChar = '*';
			this->tb_Mdp->Size = System::Drawing::Size(379, 32);
			this->tb_Mdp->TabIndex = 5;
			this->tb_Mdp->UseSystemPasswordChar = true;
			// 
			// btnConfirmer
			// 
			this->btnConfirmer->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnConfirmer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfirmer->Location = System::Drawing::Point(632, 538);
			this->btnConfirmer->Margin = System::Windows::Forms::Padding(4);
			this->btnConfirmer->Name = L"btnConfirmer";
			this->btnConfirmer->Size = System::Drawing::Size(163, 70);
			this->btnConfirmer->TabIndex = 6;
			this->btnConfirmer->Text = L"Confirmer";
			this->btnConfirmer->UseVisualStyleBackColor = false;
			this->btnConfirmer->Click += gcnew System::EventHandler(this, &c_connexion_form::btnConfirmer_Click);
			// 
			// lbConnexion
			// 
			this->lbConnexion->AutoSize = true;
			this->lbConnexion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->lbConnexion->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbConnexion->Location = System::Drawing::Point(745, 101);
			this->lbConnexion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbConnexion->Name = L"lbConnexion";
			this->lbConnexion->Size = System::Drawing::Size(130, 32);
			this->lbConnexion->TabIndex = 7;
			this->lbConnexion->Text = L"Connexion";
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->lbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEmail->Location = System::Drawing::Point(628, 272);
			this->lbEmail->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(106, 23);
			this->lbEmail->TabIndex = 8;
			this->lbEmail->Text = L"Adresse mail";
			// 
			// lbMdp
			// 
			this->lbMdp->AutoSize = true;
			this->lbMdp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->lbMdp->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMdp->Location = System::Drawing::Point(628, 394);
			this->lbMdp->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbMdp->Name = L"lbMdp";
			this->lbMdp->Size = System::Drawing::Size(112, 23);
			this->lbMdp->TabIndex = 9;
			this->lbMdp->Text = L"Mot de passe";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(563, 71);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(505, 601);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// btnQuitter
			// 
			this->btnQuitter->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnQuitter->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuitter->Location = System::Drawing::Point(848, 538);
			this->btnQuitter->Margin = System::Windows::Forms::Padding(4);
			this->btnQuitter->Name = L"btnQuitter";
			this->btnQuitter->Size = System::Drawing::Size(163, 70);
			this->btnQuitter->TabIndex = 11;
			this->btnQuitter->Text = L"Quitter";
			this->btnQuitter->UseVisualStyleBackColor = false;
			this->btnQuitter->Click += gcnew System::EventHandler(this, &c_connexion_form::btnQuitter_Click);
			// 
			// c_connexion_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1584, 838);
			this->Controls->Add(this->btnQuitter);
			this->Controls->Add(this->lbMdp);
			this->Controls->Add(this->lbEmail);
			this->Controls->Add(this->lbConnexion);
			this->Controls->Add(this->btnConfirmer);
			this->Controls->Add(this->tb_Mdp);
			this->Controls->Add(this->tb_Email);
			this->Controls->Add(this->llInscrire);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"c_connexion_form";
			this->Text = L"c_connexion_form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: bool kclient = true;
	public: bool kcconnect = true;
	public: bool kconnecter = false;


	private: System::Void inscription_label_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
	{
		this->kcconnect = false;
		this->Close();

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

		this->kclient = false;
		this->Close();
	}

	public: CGestion::Client^ client = nullptr;

	private: System::Void btnConfirmer_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ email = this->tb_Email->Text;
		String^ mdp = this->tb_Mdp->Text;


		if (tb_Email->TextLength == 0 || tb_Mdp->TextLength == 0)
		{
			MessageBox::Show("Veuillez rentrer un email et un mot de passe valide pour vous continuer", "Erreur", MessageBoxButtons::OK);
		}

		else
		{
			try {
				String^ connString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "SELECT * FROM [Bdd_Prj].[dbo].[Client] WHERE Client_Email=@email AND Client_Mdp=@pwd;";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@email", email);
				command.Parameters->AddWithValue("@pwd", mdp);

				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read()) 
				{
					kconnecter = true;
					this->Close();
				}
				else {
					MessageBox::Show("Erreur d'email ou de mot de passe",
						"Email or Password Error", MessageBoxButtons::OK);
				}
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Failed to connect to database",
					"Database Connection Error", MessageBoxButtons::OK);
			}
		}
	}
};
}