#include "stdafx.h"
#include "R4.h"


R4::~R4()
{
	Resultat::setNbDestructeurs();
}

void R4::executerRegleModification()
{
	if (donnees->setD1(donnees->getD1() - 3))
	{
		resultat->reussite(getId(), "reussite de modification D1 = D1 - D3 :"+to_string(donnees->getD1()));
	}
	else {
		resultat->echec(getId(), "D1 n'est pas modifié");
	}
}
