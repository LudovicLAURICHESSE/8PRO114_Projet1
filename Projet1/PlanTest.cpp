#include "stdafx.h"
#include "PlanTest.h"
#include "R1.h"
#include "R5.h"
#include "R4.h"
#include "Regle.h"

PlanTest::PlanTest()
{
	Resultat::setNbConstructeurs();
}


PlanTest::~PlanTest()
{
	delete resultat;
	delete conteneurReglesDepart;
	Resultat::setNbDestructeurs();
}

void PlanTest::initialiserRegles()
{
	conteneurReglesDepart = chargerRegles();
}

void PlanTest::appliquer(Donnees *donnees)
{
	if (resultat != nullptr)
	{
		delete resultat;
	}
	resultat = new Resultat(*donnees);
	ConteneurRegles* conteneur = this->conteneurReglesDepart;
	while (conteneur != nullptr)
	{
		if (conteneur->getRegleCourante()->executer(donnees, resultat))
			conteneur = conteneur->getConteneurSuivantPositif();
		else
			conteneur = conteneur->getConteneurSuivantNegatif();
	}
	resultat->completerTest(*donnees);
}

ConteneurRegles * PlanTest::chargerRegles()
{
	return new ConteneurRegles(new R1(),
				new ConteneurRegles(new R4()),
				new ConteneurRegles(new R5()));
}
