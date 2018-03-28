#pragma once
#include "RegleModification.h"
class R4 :
	public RegleModification
{
public:
	R4() : RegleModification("R4") { Resultat::setNbConstructeurs(); };
	~R4();
protected:
	void executerRegleModification();
};

