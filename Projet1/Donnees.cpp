#include "stdafx.h"
#include "Donnees.h"

Donnees::Donnees(int d1, int d2, int d3, int d4, int d5)
{
	this->d1 = 1;
	this->d2 = 2;
	this->d3 = 3;
	this->d4 = 4;
	this->d5 = 5;
	setD1(d1);
	setD2(d2);
	setD3(d3);
	setD4(d4);
	setD5(d5);
	Resultat::setNbConstructeurs();
}

Donnees::~Donnees()
{
	Resultat::setNbDestructeurs();
}

bool Donnees::setD1(int d)
{
	if (d > 0) 
	{
		d1 = d;
		return true;
	}
	return false;
}

bool Donnees::setD2(int d)
{
	if (d > d1 && d < d3)
	{
		d2 = d;
		return true;
	}
	return false;
}

bool Donnees::setD3(int d)
{
	if (d > d1)
	{
		d3 = d;
		return true;
	}
	return false;
}

bool Donnees::setD4(int d)
{
	if (d % 2 == 0)
	{
		d4 = d;
		return true;
	}
	return false;
}

bool Donnees::setD5(int d)
{
	if (d != d1 && d != d2 && d != d3 && d != d4)
	{
		d5 = d;
		return true;
	}
	return false;
}

bool Donnees::valide()
{
	return setD2(d2) && setD3(d3) && setD5(d5);
}
