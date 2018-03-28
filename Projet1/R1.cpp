#include "stdafx.h"
#include "R1.h"


R1::~R1()
{
	Resultat::setNbDestructeurs();
}

bool R1::executerRegle()
{
	if (donnees->getD1() % 2 != 0)
	{
		resultat->reussite(getId(), "D1 pair");
		return true;
	}
	resultat->echec(getId(), "D1 impair");
	return false;
}
