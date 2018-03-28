#pragma once
#include <string>
using namespace std;
class Regle
{
public:
	Regle(string id);
	virtual ~Regle();
	string getId()const { return id; };
	bool executer(Donnees* data, Resultat* res);
	Donnees* getDonneesCourante()const { return donnees; };
	Resultat* getResultatCourante()const { return resultat; };
private:
	string id;
	bool prevalidation();
	void postvalidation();
protected:
	Donnees * donnees;
	Resultat *resultat;
	virtual bool executerRegle();

};