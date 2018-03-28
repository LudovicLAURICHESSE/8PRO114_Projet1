#include "stdafx.h"
#include "R3.h"




R3::~R3()
{
	Resultat::setNbDestructeurs();
}

bool R3::executerRegle()
{
	if (donnees->getD1() % 2 == 0 && donnees->getD3() % 2 == 0)
	{
		resultat->reussite(getId(), "D1 et D3 pair");
		return true;
	}
	resultat->echec(getId(), "D1 et D3 ne sont pas pair tous les deux");
	return false;
}
