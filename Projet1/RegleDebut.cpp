#include "stdafx.h"
#include "RegleDebut.h"
#include <algorithm>

RegleDebut::~RegleDebut()
{
	Resultat::setNbDestructeurs();
}

void RegleDebut::executerRegleModification()
{
	if (donnees->setD1(min(10, donnees->getD1())))
	{
		resultat->reussite(getId(), "reussite de modification D1 min entre 10 et D1 précedent : " +to_string(donnees->getD1()));
	}
	else
	{
		resultat->echec(getId(), "echec de modification D1");

	}
}
