// Projet1.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include "EnsembleDonnees1.h"
#include "EnsembleDonnees2.h"
#include "PlanTest.h"
#include "PlanTestControle.h"
#include "PlanTestExtreme.h"
using namespace std;


int main()
{
	
	Donnees ** donnees = new Donnees*[2];
	donnees[0] = new EnsembleDonnees1();
	donnees[1] = new EnsembleDonnees2();

	PlanTest** plansTest = new PlanTest*[3];
	plansTest[0] = new PlanTest();
	plansTest[1] = new PlanTestExtreme();
	plansTest[2] = new PlanTestControle();
	
	for (int p = 0; p < 3; p++)
	{
		plansTest[p]->initialiserRegles();
	}

	for (int d = 0; d < 2; d++)
	{
		for (int p = 0; p < 3; p++)
		{
			cout << "Plan de test " << p << " donnees " << d << endl;
			plansTest[p]->appliquer(donnees[d]);
			//cout << plansTest[p]->getResultat()->getInformations() << endl;
			//Bonus2
			cout<<*(plansTest[p]->getResultat())<<endl;
		}
	}
	for (int d = 0; d < 2; d++)
	{
		delete donnees[d];
	}
	for (int p = 0; p < 3; p++)
	{
		delete plansTest[p];
	}
	delete plansTest;
	delete donnees;

	//bonus1
	cout<<"Nombre Constructeurs :"<<Resultat::getNbConstructeurs()<<endl;
	cout<<"Nombre Destructeurs :"<<Resultat::getNbDestructeurs()<<endl;

	string s;
	cin >> s;
	return 0;
}

