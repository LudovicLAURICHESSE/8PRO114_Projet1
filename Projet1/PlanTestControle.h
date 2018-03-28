#pragma once
#include "PlanTestExtreme.h"
class PlanTestControle :
	public PlanTestExtreme
{
public:
	PlanTestControle();
	~PlanTestControle();
protected:
	ConteneurRegles* chargerRegles();
};

