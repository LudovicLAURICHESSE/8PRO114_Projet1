#pragma once
#include "Regle.h"
class R3 :
	public Regle
{
public:
	R3() : Regle("R3") { Resultat::setNbConstructeurs(); };
	~R3();
protected:
	bool executerRegle();
};

