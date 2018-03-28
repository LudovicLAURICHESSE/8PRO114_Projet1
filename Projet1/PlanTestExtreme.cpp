#include "stdafx.h"
#include "PlanTestExtreme.h"
#include "R2.h"
#include "R6.h"
#include "R1.h"
#include "R4.h"
#include "R5.h"
#include "R3.h"

PlanTestExtreme::PlanTestExtreme()
{
	Resultat::setNbConstructeurs();
}

PlanTestExtreme::~PlanTestExtreme()
{
	Resultat::setNbDestructeurs();
}

ConteneurRegles * PlanTestExtreme::chargerRegles()
{
	return new ConteneurRegles(new R1(),
		new ConteneurRegles(new R4()),
		new ConteneurRegles(new R2(),
			new ConteneurRegles(new R5()),
			new ConteneurRegles(new R6())));
}
