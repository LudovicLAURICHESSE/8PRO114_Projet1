#include "stdafx.h"
#include "R6.h"
#include <algorithm>


R6::~R6()
{
	Resultat::setNbDestructeurs();
}

void R6::executerRegleModification()
{
	if (donnees->setD4(min(donnees->getD4() - 10, donnees->getD2())))
	{
		resultat->reussite(getId(), to_string(donnees->getD1()) + "reussite de modification D4 min entre D4-10 et D2");
	}
	else
	{
		resultat->echec(getId(), "echec de modification D4");
	}
}
