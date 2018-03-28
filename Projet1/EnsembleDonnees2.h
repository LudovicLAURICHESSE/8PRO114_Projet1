#pragma once
#include "Donnees.h"
#include"stdafx.h"
class EnsembleDonnees2 :
	public Donnees
{
public:
	EnsembleDonnees2() :Donnees(10, 15, 18, 20, 2) {};
	virtual ~EnsembleDonnees2();
};

