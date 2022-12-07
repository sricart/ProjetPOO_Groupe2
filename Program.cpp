#include "Choix_Form.h"
#include "C_Connexion_Form.h"
#include "C_Inscription_Form.h"
#include "C_Interface_Form.h"
#include "S_Connexion_Form.h"
#include "A_Interface_Form.h"
#include "S_Interface_Form.h"

using namespace System;
using namespace System::Windows::Forms;

int __clrcall main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	PjtFinal::accueil_form Choix_Form;
	PjtFinal::c_connexion_form ConnectionClient;
	PjtFinal::c_inscription_form InscriptionClient;
	PjtFinal::client_accueil_form InterfaceClient;
	PjtFinal::s_connexion_form ConnectionStaff;
	PjtFinal::personnel_form InterfaceStaff;
	PjtFinal::admin_form InterfaceAdmin;
	PjtFinal::adresse_form AdresseClient;
	PjtFinal::s_adresse_form AdresseStaff;

	Choix_Form.ShowDialog();

	if (Choix_Form.switchToStaff)
	{
		ConnectionStaff.ShowDialog();
		Choix_Form.kclient = false;

		if (ConnectionStaff.kadminconn == true)
		{
			InterfaceAdmin.ShowDialog();
		}

		while (ConnectionStaff.kstaffconn == true && InterfaceStaff.kstaffconn == true)
		{
			InterfaceClient.ShowDialog();
			if (InterfaceStaff.ksadresse == true)
			{
				AdresseStaff.ShowDialog();
			}
		}


	}

	while (ConnectionClient.kclient == true && InscriptionClient.kclient == true && Choix_Form.kclient == true)
	{

		if (Choix_Form.kcconnect == true)
		{
			Choix_Form.kcconnect = false;
			ConnectionClient.ShowDialog();
		}

		if (ConnectionClient.kcconnect == false)
		{
			InscriptionClient.ShowDialog();
		}

		if (InscriptionClient.kcconnect == true)
		{
			ConnectionClient.ShowDialog();
		}

		if (ConnectionClient.kconnecter == true)
		{
			while (ConnectionClient.kconnecter == true && InterfaceClient.kconnecter == true)
			{
				InscriptionClient.kcconnect = false;
				ConnectionClient.kcconnect = false;
				ConnectionClient.kclient = false;

				InterfaceClient.ShowDialog();

				if (InterfaceClient.kcadresse == true)
				{
					AdresseClient.ShowDialog();
				}
			}
			
		}

	}

}