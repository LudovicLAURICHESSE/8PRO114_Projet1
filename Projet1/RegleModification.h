#pragma once
#include "Regle.h"
#include <string>
class RegleModification :
	public Regle
{
public:
	RegleModification(string id) : Regle(id) { Resultat::setNbConstructeurs(); };
	~RegleModification();
	bool executerRegle();
	virtual void executerRegleModification();
};

