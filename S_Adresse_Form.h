#pragma once

#include "Staff.h"
#include "S_Adresse_Form.h"
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
	public ref class s_adresse_form : public System::Windows::Forms::Form
	{
	public:
		s_adresse_form(void)
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
		~s_adresse_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbAdresse;
	private: System::Windows::Forms::TextBox^ tbCodeP;
	private: System::Windows::Forms::TextBox^ tbVille;



	private: System::Windows::Forms::TextBox^ tbIndication;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbAdresse = (gcnew System::Windows::Forms::TextBox());
			this->tbCodeP = (gcnew System::Windows::Forms::TextBox());
			this->tbVille = (gcnew System::Windows::Forms::TextBox());
			this->tbIndication = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(75, 69);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(699, 650);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(327, 96);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ajouter une adresse";
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
			// tbCodeP
			// 
			this->tbCodeP->Location = System::Drawing::Point(276, 421);
			this->tbCodeP->Margin = System::Windows::Forms::Padding(4);
			this->tbCodeP->Name = L"tbCodeP";
			this->tbCodeP->Size = System::Drawing::Size(88, 22);
			this->tbCodeP->TabIndex = 6;
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(333, 516);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 64);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Confirmer";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &s_adresse_form::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(333, 587);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 39);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Retour";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &s_adresse_form::button2_Click);
			// 
			// s_adresse_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(843, 865);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbIndication);
			this->Controls->Add(this->tbVille);
			this->Controls->Add(this->tbCodeP);
			this->Controls->Add(this->tbAdresse);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(861, 912);
			this->MinimumSize = System::Drawing::Size(861, 912);
			this->Name = L"s_adresse_form";
			this->Text = L"s_adresse_form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}

	public: AGestion::Adresse^ adresse = nullptr;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ rue = tbAdresse->Text;
		String^ indication = tbIndication->Text;
		String^ codeP = tbCodeP->Text;
		String^ ville = tbVille->Text;


		if (tbAdresse->TextLength == 0 || tbCodeP->TextLength == 0 || tbVille->TextLength == 0)
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