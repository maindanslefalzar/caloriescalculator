// ConsoleApplication1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <Windows.h>
#include <tchar.h>


using namespace std;
void prisemesure();
void calculs();
void calculsechepdm();

int choixmenu(0);


int exit()
{
	return 0;
}
int main()
{
	system("Color 0C");
	SetConsoleTitle(_T("Calories & Macro Calculator."));
	COORD ScreenSize = { 1280, 720 };
    std::cout << "Bonjour, vous etes sur le logiciel fait par Guillaume DUFOUR, le 26 Septembre 2019.\n---------\nMENU PRINCIPAL\n---------\n<(1)> Calculer son metabolisme de base\n<(2)> Calculer les calories a prendre en seche ou en PDM" << endl;
	cin >> choixmenu;
	if (choixmenu >= 1 && choixmenu <= 2)
	{
		if (choixmenu == 1)
		{
			system("CLS");
			prisemesure();
		}
		if (choixmenu == 2)
		{
			system("CLS");
			calculsechepdm();
		}
	}
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
