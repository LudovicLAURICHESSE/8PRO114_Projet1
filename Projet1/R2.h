#pragma once
#include "Regle.h"
class R2 :
	public Regle
{
public:
	R2() : Regle("R2") { Resultat::setNbConstructeurs(); };
	~R2();

protected:
	bool executerRegle();
};

