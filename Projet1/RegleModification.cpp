#include "stdafx.h"
#include "RegleModification.h"


RegleModification::~RegleModification()
{
	Resultat::setNbDestructeurs();
}

bool RegleModification::executerRegle()
{
	executerRegleModification();
	return true;
}

void RegleModification::executerRegleModification()
{
}
