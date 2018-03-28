#pragma once
#include "PlanTest.h"
class PlanTestExtreme :
	public PlanTest
{
public:
	PlanTestExtreme();
	~PlanTestExtreme();
protected:
	ConteneurRegles* chargerRegles();
};

