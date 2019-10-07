#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;


int exit();
int main();
int calculateurcalorieschoix(0);
int sechepdmchoix(0);
int choix3(0);
int choixcalculsechepdm(0);
int proteines = 4;
int glucides = 4;
int lipides = 9;
int pctproteines(0);
int pctglucides(0);
int pctlipides(0);
int pcttotal(0);

double besproteines(2.2);
double besglucides(0);
double beslipides(1);
double qttproteines(0);
double qttglucides(0);
double qttlipides(0);
double totproteines(0);
double totlipides(0);
double totglucides(0);


double montantcaloriesproprevaleurs(0);
double seche2(0);
double pdm2(0);
double stagner2(0);
double pourcentage(0);
double seche(0);
double calculmetabolisme(0);
double taille(0);
double activite(0);
double totalcalories(0);

int choixactivite(0);
int kilo(0);
int age(0);


void calculmacro()
{
	system("CLS");
	cout << "Calcul du taux de grammes de proteines/glucides/lipides en fonction de vos choix et valeurs. " << endl;
	Sleep(200);
	qttproteines = kilo * besproteines;
	qttlipides = kilo * beslipides;
	
	totproteines = qttproteines * proteines;
	totlipides = qttlipides * lipides;

	totglucides = totalcalories - totlipides - totproteines;
	qttglucides = totglucides / 4;

	cout << "Vous avez besoin de " << qttproteines << "g de proteines par jour. " << endl;
	cout << "Vous avez besoin de " << qttglucides << "g de lipides par jour. " << endl;
	cout << "Vous avez besoin de " << qttlipides << "g de lipides par jour. " << endl;
	cout << "" << endl;
	cout << "Pour plus de details, vous mangerez " << totproteines << " kcalories de proteines par jour. " << endl;
	cout << "Pour plus de details, vous mangerez " << totglucides << " kcalories de glucides par jour. " << endl;
	cout << "Pour plus de details, vous mangerez " << totlipides << " kcalories de lipides par jour. " << endl;
	system("PAUSE");

	
}

void calcultest()
{
	system("CLS");
	cout << "Phase de test, choisissez vos pourcentages de Proteines/glucides/lipides DANS L'ORDRE.  Le total doit faire 100%. " << endl;
	cin >> pctproteines;
	cin >> pctglucides;
	cin >> pctlipides;
	cout << "Vous avez choisi : " << pctproteines << "% de proteines, " << pctglucides << "% de glucides, " << pctlipides << "% de lipides. " << endl;
	pcttotal = pctproteines + pctglucides + pctlipides;
	if (pcttotal < 100)
	{
		cout << "Il y a une erreur dans votre calcul. N'oubliez pas, le total doit faire 100%. Veuillez recommencer. " << endl; 
		calcultest();
	}
	if (pcttotal > 100)
	{
		cout << "Il y a une erreur dans votre calcul. N'oubliez pas, le total doit faire 100%. Veuillez recommencer. " << endl;
		calcultest();
	}
	if (pcttotal == 100)
	{
		void calculmacro();
		calculmacro();
	}
}

void proprevaleurs()
{
	system("CLS");
	cout << "Veuillez choisir votre montant de calories : " << endl;
	cin >> montantcaloriesproprevaleurs;
	if (montantcaloriesproprevaleurs < 0)
	{
		cout << "Vous n'avez pas indique de bonnes valeurs. Ressayez. " << endl;
		Sleep(1000);
		proprevaleurs();
	}
	if (montantcaloriesproprevaleurs > 0)
	{
		void activitechoix();
		activitechoix();
	}
}

void sechepgm()
{
	system("CLS");
	pourcentage = totalcalories / 100 * 20;
	seche2 = totalcalories - pourcentage;

	cout << "Pour perdre du poids, vous devez manger : " << seche2 << "calories par jour." << endl;
	system("PAUSE");
	void calcultest();
	calcultest();
}
void pdm()
{
	system("CLS");
	pourcentage = totalcalories / 100 * 20;
	pdm2 = totalcalories + pourcentage;

	cout << "Pour prendre de la masse, vous devez manger : " << pdm2 << "calories par jour." << endl;
	system("PAUSE");
	void calcultest();
	calcultest();
}
void stagner()
{
	system("CLS");
	cout << "Ne changez rien !\nMangez " << totalcalories << " calories par jour pour garder votre poids. " << endl;
	system("PAUSE");
	void calcultest();
	calcultest();
}


void activitechoix()
{
	system("CLS");
	cout << "Choisissez votre niveau d'activité :\n1- Sedentaire, aucun exercice physique quotidien ou presque\n2- Legerement actif, sport 1 a 3 fois par semaine\n3- Actif, vous faites du sport 3 a 5 fois par semaine\n4- Tres actif, vous faites quotidiennement du sport ou des exercices physiques soutenus\n5- Extremement, votre travail est tres physique ou vous vous considerez comme un sportif de haut niveau" << endl;
	cin >> choixactivite;
	if (choixactivite >= 1 && choixactivite <= 5)
	{
		if (choixactivite == 1)
		{
			activite = 1.2;
		}
		if (choixactivite == 2)
		{
			activite = 1.375;
		}
		if (choixactivite == 3)
		{
			activite = 1.55;
		}
		if (choixactivite == 4)
		{
			activite = 1.725;
		}
		if (choixactivite == 5)
		{
			activite = 1.9;
		}
		system("CLS");
	}
	totalcalories = calculmetabolisme * activite;
	cout << "Avec votre activite, votre total metabolique est de : " << totalcalories << " calories. Voulez vous ? :\n1- Perdre du poids\n2- Prendre du poids\n3- Garder votre poids\n4- TEST CALCUL POURCENTAGES !" << endl;
	cin >> sechepdmchoix;
	if (sechepdmchoix >= 1 && sechepdmchoix <= 4)
	{
		if (sechepdmchoix == 3)
		{
			stagner();
		}
		if (sechepdmchoix == 2)
		{
			pdm();
		}
		if (sechepdmchoix == 1)
		{
			sechepgm();
		}
		if (sechepdmchoix == 4)
		{
			calcultest();
		}
	}
}

void calculs()
{
	system("CLS");
	cout << "Nous calculons votre metabolisme de base...\n" << endl;
	calculmetabolisme = 13.707 * kilo + 492.3 * taille - 6.673 * age + 77.607;
	cout << "Votre metabolisme de base est de : " << calculmetabolisme << " calories." << endl;
	system("PAUSE");
	system("CLS");
	activitechoix();
}

void calculsechepdm()
	{
		cout << "Voulez vous :\n1-Saisir mon poids, ma taille, mon age, pour un calcul precis\n2-Rentrer ma propre valeur de calories " << endl;
		cin >> choixcalculsechepdm;
		if (choixcalculsechepdm >= 1 && choixcalculsechepdm <= 2)
		{
			if (choixcalculsechepdm == 1)
			{
				system("CLS");
				void prisemesure();
				prisemesure();
			}
			if (choixcalculsechepdm == 2)
			{
				proprevaleurs();
			}
		}
	

}


void prisemesure()
{
	system("CLS");
	cout << "Ecrivez votre taille : " << endl;
	cin >> taille;

	if (taille > 3)
	{
		taille = taille / 100;
	}
	system("CLS");
	cout << "Ecrivez votre poids en KG : " << endl;
	cin >> kilo;
	system("CLS");
	cout << "Ecrivez votre age : " << endl;
	cin >> age;
	system("CLS");
	cout << "Pour rappel, vous avez " << age << " ans, vous mesurez " << taille << " metres, et vous pesez : " << kilo << "kg." << endl;
	system("PAUSE");
	calculs();
}








