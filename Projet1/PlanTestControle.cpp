#include "stdafx.h"
#include "PlanTestControle.h"
#include "RegleModification.h"
#include "RegleDebut.h"
#include "RegleFin.h"
#include "R2.h"
#include "R6.h"
#include "R1.h"
#include "R4.h"
#include "R5.h"
#include "R3.h"


PlanTestControle::PlanTestControle()
{
	Resultat::setNbConstructeurs();
}


PlanTestControle::~PlanTestControle()
{
	Resultat::setNbDestructeurs();
}

ConteneurRegles * PlanTestControle::chargerRegles()
{
	return new ConteneurRegles(new R3(),
			new ConteneurRegles(new RegleDebut(),
				new ConteneurRegles(new R1(),
					new ConteneurRegles(new R4()),
					new ConteneurRegles(new R2(),
						new ConteneurRegles(new R5()),
						new ConteneurRegles(new R6())))),
			new ConteneurRegles(new RegleFin()));
}
