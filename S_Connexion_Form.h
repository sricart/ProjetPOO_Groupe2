#include "S_Interface_Form.h"
#include "A_Interface_Form.h"
#include "Staff.h"

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
	/// Description résumée de s_connexion_form
	/// </summary>
	public ref class s_connexion_form : public System::Windows::Forms::Form
	{
	public:
		s_connexion_form(void)
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
		~s_connexion_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbEmail;
	private: System::Windows::Forms::Label^ lbMdp;


	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbMdp;



	private: System::Windows::Forms::Button^ btnQuitter;
	private: System::Windows::Forms::Button^ btnConfirmer;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(s_connexion_form::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->lbMdp = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbMdp = (gcnew System::Windows::Forms::TextBox());
			this->btnQuitter = (gcnew System::Windows::Forms::Button());
			this->btnConfirmer = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 1);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(209, 108);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(512, 95);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(585, 610);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(739, 144);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 28);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Connexion";
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->lbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEmail->Location = System::Drawing::Point(629, 319);
			this->lbEmail->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(106, 23);
			this->lbEmail->TabIndex = 3;
			this->lbEmail->Text = L"Adresse mail";
			// 
			// lbMdp
			// 
			this->lbMdp->AutoSize = true;
			this->lbMdp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->lbMdp->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMdp->Location = System::Drawing::Point(621, 406);
			this->lbMdp->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbMdp->Name = L"lbMdp";
			this->lbMdp->Size = System::Drawing::Size(112, 23);
			this->lbMdp->TabIndex = 4;
			this->lbMdp->Text = L"Mot de passe";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(625, 346);
			this->tbEmail->Margin = System::Windows::Forms::Padding(4);
			this->tbEmail->Multiline = true;
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(359, 33);
			this->tbEmail->TabIndex = 5;
			// 
			// tbMdp
			// 
			this->tbMdp->Location = System::Drawing::Point(625, 431);
			this->tbMdp->Margin = System::Windows::Forms::Padding(4);
			this->tbMdp->Multiline = true;
			this->tbMdp->Name = L"tbMdp";
			this->tbMdp->PasswordChar = '*';
			this->tbMdp->Size = System::Drawing::Size(359, 32);
			this->tbMdp->TabIndex = 6;
			this->tbMdp->UseSystemPasswordChar = true;
			// 
			// btnQuitter
			// 
			this->btnQuitter->BackColor = System::Drawing::Color::Silver;
			this->btnQuitter->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuitter->Location = System::Drawing::Point(821, 581);
			this->btnQuitter->Margin = System::Windows::Forms::Padding(4);
			this->btnQuitter->Name = L"btnQuitter";
			this->btnQuitter->Size = System::Drawing::Size(164, 75);
			this->btnQuitter->TabIndex = 8;
			this->btnQuitter->Text = L"Quitter";
			this->btnQuitter->UseVisualStyleBackColor = false;
			this->btnQuitter->Click += gcnew System::EventHandler(this, &s_connexion_form::btnQuitter_Click);
			// 
			// btnConfirmer
			// 
			this->btnConfirmer->BackColor = System::Drawing::Color::Silver;
			this->btnConfirmer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfirmer->Location = System::Drawing::Point(625, 581);
			this->btnConfirmer->Margin = System::Windows::Forms::Padding(4);
			this->btnConfirmer->Name = L"btnConfirmer";
			this->btnConfirmer->Size = System::Drawing::Size(188, 75);
			this->btnConfirmer->TabIndex = 9;
			this->btnConfirmer->Text = L"Confirmer";
			this->btnConfirmer->UseVisualStyleBackColor = false;
			this->btnConfirmer->Click += gcnew System::EventHandler(this, &s_connexion_form::btnConfirmer_Click);
			// 
			// s_connexion_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1584, 838);
			this->Controls->Add(this->btnConfirmer);
			this->Controls->Add(this->btnQuitter);
			this->Controls->Add(this->tbMdp);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->lbMdp);
			this->Controls->Add(this->lbEmail);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"s_connexion_form";
			this->Text = L"s_connexion_form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: bool kadminconn = false;

	public: bool kstaffconn = false;


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

	public: SGestion::Staff^ staff = nullptr;

	private: System::Void btnConfirmer_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ email = this->tbEmail->Text;
		String^ mdp = this->tbMdp->Text;

		if (tbEmail->TextLength == 0 || tbMdp->TextLength == 0)
		{
			MessageBox::Show("Veuillez rentrer un mot de passe et un email vadide", "Data", MessageBoxButtons::OK);

		}

		else
		{
			try {
				String^ connString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "SELECT * FROM [Bdd_Prj].[dbo].[Staff] WHERE Staff_Email=@email AND Staff_Mdp=@pwd;";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@email", email);
				command.Parameters->AddWithValue("@pwd", mdp);

				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read()) 
				{
					staff = gcnew SGestion::Staff;
					staff->s_sup = reader->GetBoolean(4);

					if(staff->s_sup == true)
					{
						kadminconn = true;
						this->Close();
					}

					else
					{
						kstaffconn = true;
						this->Close();
					}

				}
				else {
					MessageBox::Show("Email or password is incorrect",
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