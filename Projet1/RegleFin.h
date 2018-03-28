#pragma once
#include "RegleModification.h"
class RegleFin :
	public RegleModification
{
public:
	RegleFin() : RegleModification("FIN") { Resultat::setNbConstructeurs(); };
	~RegleFin();
protected:
	void executerRegleModification();
};

