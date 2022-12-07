#pragma once

#include "Client.h"
#include "Adresse.h"

namespace PjtFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de adresse_form
	/// </summary>
	public ref class adresse_form : public System::Windows::Forms::Form
	{
	public:
		adresse_form(void)
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
		~adresse_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lbAjouterAdresse;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbAdresse;
	private: System::Windows::Forms::TextBox^ tbCodePostal;


	private: System::Windows::Forms::TextBox^ tbVille;

	private: System::Windows::Forms::TextBox^ tbIndication;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnConfirmer;
	private: System::Windows::Forms::Button^ btnRetour;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(adresse_form::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lbAjouterAdresse = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbAdresse = (gcnew System::Windows::Forms::TextBox());
			this->tbCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->tbVille = (gcnew System::Windows::Forms::TextBox());
			this->tbIndication = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnConfirmer = (gcnew System::Windows::Forms::Button());
			this->btnRetour = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			//this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(75, 69);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(699, 650);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// lbAjouterAdresse
			// 
			this->lbAjouterAdresse->AutoSize = true;
			this->lbAjouterAdresse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->lbAjouterAdresse->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAjouterAdresse->Location = System::Drawing::Point(327, 96);
			this->lbAjouterAdresse->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAjouterAdresse->Name = L"lbAjouterAdresse";
			this->lbAjouterAdresse->Size = System::Drawing::Size(195, 28);
			this->lbAjouterAdresse->TabIndex = 1;
			this->lbAjouterAdresse->Text = L"Ajouter une adresse";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->label2->Location = System::Drawing::Point(272, 257);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Adresse";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->label3->Location = System::Drawing::Point(272, 401);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Code postal";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->label4->Location = System::Drawing::Point(396, 401);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Ville";
			// 
			// tbAdresse
			// 
			this->tbAdresse->Location = System::Drawing::Point(276, 277);
			this->tbAdresse->Margin = System::Windows::Forms::Padding(4);
			this->tbAdresse->Name = L"tbAdresse";
			this->tbAdresse->Size = System::Drawing::Size(317, 22);
			this->tbAdresse->TabIndex = 5;
			// 
			// tbCodePostal
			// 
			this->tbCodePostal->Location = System::Drawing::Point(276, 421);
			this->tbCodePostal->Margin = System::Windows::Forms::Padding(4);
			this->tbCodePostal->Name = L"tbCodePostal";
			this->tbCodePostal->Size = System::Drawing::Size(88, 22);
			this->tbCodePostal->TabIndex = 6;
			// 
			// tbVille
			// 
			this->tbVille->Location = System::Drawing::Point(400, 421);
			this->tbVille->Margin = System::Windows::Forms::Padding(4);
			this->tbVille->Name = L"tbVille";
			this->tbVille->Size = System::Drawing::Size(193, 22);
			this->tbVille->TabIndex = 7;
			// 
			// tbIndication
			// 
			this->tbIndication->Location = System::Drawing::Point(276, 336);
			this->tbIndication->Margin = System::Windows::Forms::Padding(4);
			this->tbIndication->Name = L"tbIndication";
			this->tbIndication->Size = System::Drawing::Size(317, 22);
			this->tbIndication->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label5->Location = System::Drawing::Point(272, 316);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(228, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Données complémentaires (facultatif)";
			// 
			// btnConfirmer
			// 
			this->btnConfirmer->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnConfirmer->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfirmer->Location = System::Drawing::Point(333, 516);
			this->btnConfirmer->Margin = System::Windows::Forms::Padding(4);
			this->btnConfirmer->Name = L"btnConfirmer";
			this->btnConfirmer->Size = System::Drawing::Size(180, 64);
			this->btnConfirmer->TabIndex = 10;
			this->btnConfirmer->Text = L"Confirmer";
			this->btnConfirmer->UseVisualStyleBackColor = false;
			this->btnConfirmer->Click += gcnew System::EventHandler(this, &adresse_form::button1_Click);
			// 
			// btnRetour
			// 
			this->btnRetour->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnRetour->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRetour->Location = System::Drawing::Point(333, 587);
			this->btnRetour->Margin = System::Windows::Forms::Padding(4);
			this->btnRetour->Name = L"btnRetour";
			this->btnRetour->Size = System::Drawing::Size(180, 39);
			this->btnRetour->TabIndex = 11;
			this->btnRetour->Text = L"Retour";
			this->btnRetour->UseVisualStyleBackColor = false;
			this->btnRetour->Click += gcnew System::EventHandler(this, &adresse_form::button2_Click);
			// 
			// adresse_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(843, 865);
			this->Controls->Add(this->btnRetour);
			this->Controls->Add(this->btnConfirmer);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbIndication);
			this->Controls->Add(this->tbVille);
			this->Controls->Add(this->tbCodePostal);
			this->Controls->Add(this->tbAdresse);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbAjouterAdresse);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(861, 912);
			this->MinimumSize = System::Drawing::Size(861, 912);
			this->Name = L"adresse_form";
			this->Text = L"adresse_form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: bool kretour = false;
	public: bool kconnecter = true;

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		kretour = true;
		this->Close();
	}

	public: AGestion::Adresse^ adresse = nullptr;



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ rue = tbAdresse->Text;
		String^ indication = tbIndication->Text;
		String^ codeP = tbCodePostal->Text;
		String^ ville = tbVille->Text;


		if (tbAdresse->TextLength == 0 || tbCodePostal->TextLength == 0 || tbVille->TextLength == 0)
		{
			MessageBox::Show("Veuillez renseigner tous les champs obligatoires",
				"Erreur", MessageBoxButtons::OK);
			return;
		}

		else
		{
			try
			{
				String^ connString = "Data Source=DESKTOP-O4FVGNU;Initial Catalog=Bdd_Prj;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "INSERT INTO Adresse " + "(Ad_Rue, Ad_Code_Postal, Ad_Ville, Ad_Indication) VALUES " 
				+ "(@rue, @codeP, @ville, @indication);";

				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@rue", rue);
				command.Parameters->AddWithValue("@codeP", codeP);
				command.Parameters->AddWithValue("@ville", ville);
				command.Parameters->AddWithValue("@indication", indication);

				command.ExecuteNonQuery();

				adresse = gcnew AGestion::Adresse;
				adresse->a_rue = rue;
				adresse->a_codePostal = codeP;
				adresse->a_ville = ville;
				adresse->a_indication = indication;

				this->Close();
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