#pragma once
#include "RegleModification.h"
class RegleDebut :
	public RegleModification
{
public:
	RegleDebut() : RegleModification("DEB") { Resultat::setNbConstructeurs(); };
	~RegleDebut();
protected:
	void executerRegleModification();
};

