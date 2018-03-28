#pragma once
#include "Donnees.h"
#include "stdafx.h"
#include "Resultat.h"
#include "ConteneurRegles.h"
class PlanTest
{
public:
	PlanTest();
	virtual ~PlanTest();
	Resultat* getResultat()const { return resultat; };
	void initialiserRegles();
	void appliquer(Donnees *donnees);
protected:
	virtual ConteneurRegles* chargerRegles();
private:
	Resultat* resultat;
	ConteneurRegles* conteneurReglesDepart;


};

