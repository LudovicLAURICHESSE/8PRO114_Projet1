#pragma once
#include "RegleModification.h"
class R6 :
	public RegleModification
{
public:
	R6() : RegleModification("R6") { Resultat::setNbConstructeurs(); };
	~R6();
protected:
	void executerRegleModification();
};

