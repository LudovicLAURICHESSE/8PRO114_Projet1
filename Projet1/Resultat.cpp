#include "stdafx.h"
#include "Resultat.h"
#include <ctime>
#pragma warning(disable : 4996)


int Resultat::nbConstructeur = 0;
int Resultat::nbDestructeur = 0;
Resultat::Resultat(Donnees const&  data)
{
	time_t temps;
	struct tm dateActuel;
	char  format[32];

	time(&temps);
	dateActuel = *localtime(&temps);
	strftime(format, 32, "%d %m %Y %H:%M:%S", &dateActuel);
	ajouterInformation(format);
	ajouterInformation(data.toString());
	Resultat::setNbConstructeurs();
}

Resultat::~Resultat()
{
	Resultat::setNbDestructeurs();
}

void Resultat::reussite(string id, string operation)
{
	string info = "REUSSITE -" + id + ":" + operation;
	ajouterInformation(info);
}

void Resultat::echec(string id, string operation)
{
	string info = "ECHEC -" + id + ":" + operation ;
	ajouterInformation(info);
}

void Resultat::info(string id, string operation)
{
	string info = "INFO -" + id + ":" + operation;
	ajouterInformation(info);
}

void Resultat::completerTest(Donnees const& data)
{
	ajouterInformation(data.toString());
}


void Resultat::ajouterInformation(string info)
{
	informations += info + "\n";
}

ostream & operator<<(ostream & os, const Resultat& res)
{
	os << res.informations;
	return os;
}
