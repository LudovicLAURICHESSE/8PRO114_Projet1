#pragma once
#include "RegleModification.h"
class R5 :
	public RegleModification
{
public:
	R5() : RegleModification("R5") { Resultat::setNbConstructeurs(); };
	~R5();
protected:
		void executerRegleModification();
};

