#include "stdafx.h"
#include "Regle.h"


Regle::Regle(string id)
{
	this->id = id;
	Resultat::setNbConstructeurs();
}

Regle::~Regle()
{
	Resultat::setNbDestructeurs();
}

bool Regle::executer(Donnees *donnees, Resultat *resultat)
{
	bool resultatExecution = false;
	this->donnees = donnees;
	this->resultat = resultat;

	resultat->info(id, "Debut de la regle");

	prevalidation();
	resultatExecution = executerRegle();
	postvalidation();

	resultat->info(id, "Fin de la regle");

	return resultatExecution;
}

bool Regle::prevalidation()
{
	if (this->donnees->valide())
	{
		resultat->reussite(id, "Prevalidation réussie");
		return true;
	}
	resultat->echec(id,"Prevalidation en echec");
	return false;
}

void Regle::postvalidation()
{
	if (this->donnees->valide())
	{
		resultat->reussite(id, "Postvalidation reussie");
	}
	else 
	{
		resultat->echec(id, "Postvalidation en echec");
	}

}

bool Regle::executerRegle()
{
	return true;
}
