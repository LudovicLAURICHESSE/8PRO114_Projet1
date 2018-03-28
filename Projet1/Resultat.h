#pragma once
#include <string>

using namespace std;
class Resultat
{
public:
	
	Resultat(Donnees const&data);
	virtual ~Resultat();
	void reussite(string id, string operation);
	void echec(string id, string operation);
	void info(string id, string operation);
	string getInformations()const { return informations; };
	void completerTest(Donnees const&data);
	static int getNbConstructeurs() { return nbConstructeur; };
	static int getNbDestructeurs() { return nbDestructeur; };
	static void setNbConstructeurs() {  Resultat::nbConstructeur++; };
	static void setNbDestructeurs() { Resultat::nbDestructeur++; };
	friend ostream& operator<<(ostream& os, const Resultat& info);
private: 
	static int nbConstructeur, nbDestructeur;
	string informations;
	void ajouterInformation(string info);
};
