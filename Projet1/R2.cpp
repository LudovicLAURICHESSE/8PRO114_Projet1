#include "stdafx.h"
#include "R2.h"



R2::~R2()
{
	Resultat::setNbDestructeurs();
}

bool R2::executerRegle()
{
	if ((donnees->getD1() - donnees->getD4()) % 2 == 0)
	{
		resultat->reussite(getId(), "D1-D4 pair");
		return true;
	}
	resultat->echec(getId(), "D1-D4 impair");
	return false;
}
