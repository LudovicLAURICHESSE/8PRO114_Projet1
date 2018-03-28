#pragma once
#include "stdafx.h"
#include "R1.h"
#include "R2.h"
#include "R3.h"
#include "R4.h"
#include "R5.h"
#include "R6.h"
#include "RegleDebut.h"
#include "RegleFin.h"
class ConteneurRegles
{
public:
	ConteneurRegles(Regle* regle);
	ConteneurRegles(Regle* regle, ConteneurRegles* pos, ConteneurRegles* neg);
	ConteneurRegles(Regle* regle, ConteneurRegles* pos);
	~ConteneurRegles();
	Regle* getRegleCourante()const { return courante; };
	ConteneurRegles* getConteneurSuivantPositif()const {
		return suivantPositif;
	};
	ConteneurRegles* getConteneurSuivantNegatif()const {
		return suivantNegatif;
	};
	void setConteneurSuivant(ConteneurRegles* pos, ConteneurRegles* neg);
private:
	Regle *courante;
	ConteneurRegles *suivantPositif, *suivantNegatif;
};

