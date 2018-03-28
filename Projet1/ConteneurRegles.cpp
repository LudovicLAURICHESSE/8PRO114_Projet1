#include "stdafx.h"
#include "ConteneurRegles.h"


ConteneurRegles::ConteneurRegles(Regle * regle)
{
	courante = regle;
	suivantNegatif = nullptr;
	suivantPositif = nullptr;
	Resultat::setNbConstructeurs();
}

ConteneurRegles::ConteneurRegles(Regle * regle, ConteneurRegles * pos, ConteneurRegles * neg)
{
	courante = regle;
	suivantNegatif = neg;
	suivantPositif = pos;
	Resultat::setNbConstructeurs();
}

ConteneurRegles::ConteneurRegles(Regle * regle, ConteneurRegles * pos)
{
	courante = regle;
	suivantNegatif = nullptr;
	suivantPositif = pos;
	Resultat::setNbConstructeurs();
}

ConteneurRegles::~ConteneurRegles()
{
	if (suivantNegatif != nullptr)
		delete suivantNegatif;
	if (suivantPositif != nullptr)
		delete suivantPositif;
	delete courante;
	Resultat::setNbDestructeurs();
}

void ConteneurRegles::setConteneurSuivant(ConteneurRegles * pos, ConteneurRegles * neg)
{
	suivantNegatif = neg;
	suivantPositif = pos;
}
