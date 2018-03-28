#pragma once
#include "Donnees.h"
#include "stdafx.h"
class EnsembleDonnees1 :
	public Donnees
{
public:
	EnsembleDonnees1() : Donnees(5, 7, 10, 4, 3) {};
	virtual ~EnsembleDonnees1();
};

