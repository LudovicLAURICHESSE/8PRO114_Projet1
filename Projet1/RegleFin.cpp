#include "stdafx.h"
#include "RegleFin.h"

RegleFin::~RegleFin()
{
	Resultat::setNbDestructeurs();
}

void RegleFin::executerRegleModification()
{
	if (donnees->setD5(donnees->getD5() + 10))
	{
		resultat->reussite(getId(), "reussite de modification D5=D5+10 :"+to_string(donnees->getD5()));
	}
	else
	{
		resultat->echec(getId(),"echec de modification D5");
	}
}
