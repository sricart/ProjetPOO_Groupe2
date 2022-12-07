#pragma once
#include "C_Connexion_Form.h"
#include "S_Connexion_Form.h"


namespace PjtFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de accueil_form
	/// </summary>
	public ref class accueil_form : public System::Windows::Forms::Form
	{
	public:
		accueil_form(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~accueil_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::LinkLabel^ llClient;
	private: System::Windows::Forms::LinkLabel^ llStaff;
	private: System::Windows::Forms::Button^ btnQuitter;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(accueil_form::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->llClient = (gcnew System::Windows::Forms::LinkLabel());
			this->llStaff = (gcnew System::Windows::Forms::LinkLabel());
			this->btnQuitter = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			//this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(247, 85);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(866, 283);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// llClient
			// 
			this->llClient->AutoSize = true;
			this->llClient->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llClient->Location = System::Drawing::Point(377, 427);
			this->llClient->Name = L"llClient";
			this->llClient->Size = System::Drawing::Size(59, 24);
			this->llClient->TabIndex = 1;
			this->llClient->TabStop = true;
			this->llClient->Text = L"Client";
			this->llClient->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &accueil_form::llClient_LinkClicked);
			// 
			// llStaff
			// 
			this->llStaff->AutoSize = true;
			this->llStaff->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llStaff->Location = System::Drawing::Point(924, 427);
			this->llStaff->Name = L"llStaff";
			this->llStaff->Size = System::Drawing::Size(48, 24);
			this->llStaff->TabIndex = 2;
			this->llStaff->TabStop = true;
			this->llStaff->Text = L"Staff";
			this->llStaff->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &accueil_form::llStaff_LinkClicked);
			// 
			// btnQuitter
			// 
			this->btnQuitter->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuitter->Location = System::Drawing::Point(610, 536);
			this->btnQuitter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnQuitter->Name = L"btnQuitter";
			this->btnQuitter->Size = System::Drawing::Size(141, 34);
			this->btnQuitter->TabIndex = 4;
			this->btnQuitter->Text = L"Quitter";
			this->btnQuitter->UseVisualStyleBackColor = true;
			this->btnQuitter->Click += gcnew System::EventHandler(this, &accueil_form::btnQuitter_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(285, 402);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 24);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Vous désirez vous connecter \?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(822, 402);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(291, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Vous êtes plus tôt celui qui gère \?";
			// 
			// accueil_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1584, 838);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnQuitter);
			this->Controls->Add(this->llClient);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->llStaff);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"accueil_form";
			this->Text = L"accueil_form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	public: bool kclient = false;

	public: bool kcconnect = false;

	public: bool switchToStaff = false;

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
			MessageBox::Show(ex->Message, "Data entry form",
				MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}

	}

	private: System::Void llStaff_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
	{
		this->switchToStaff = true;
		this->Close();

	}

	private: System::Void llClient_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
	{
		this->kclient = true;
		this->kcconnect = true;
		this->Close();
	}
	};
}