#include "stdafx.h"
#include "R5.h"



R5::~R5()
{
	Resultat::setNbDestructeurs();
}

void R5::executerRegleModification()
{
	if (donnees->setD5(donnees->getD5() + (donnees->getD4() + donnees->getD1())))
	{
		resultat->reussite(getId(), "reussite de modification D5 += D4 + D1 :"+to_string(donnees->getD5()));
	}
	else
	{
		resultat->echec(getId(), "echec de modification D5 = D1 - D3");
	}
}
