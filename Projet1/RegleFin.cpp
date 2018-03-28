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
		resultat->reussite(getId(), to_string(donnees->getD1()) + "reussite de modification D5=D5+10");
	}
	else
	{
		resultat->echec(getId(),"echec de modification D5");
	}
}
