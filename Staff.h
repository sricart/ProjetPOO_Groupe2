#pragma once


namespace SGestion
{
	public ref class Staff
	{
	public:
		int s_Id;
		System::String^ s_nom;
		System::String^ s_prenom;
		System::String^ s_email;
		bool s_sup;
		System::String^ s_supNom;
		System::String^ s_mdp;
		System::String^ s_dateEmbauche;
	};
}