#pragma once
#include "Regle.h"
class R1 :
	public Regle
{
public:
	R1() : Regle("R1") { Resultat::setNbConstructeurs(); };
	~R1();

protected:
	bool executerRegle();
};

