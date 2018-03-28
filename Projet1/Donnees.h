#pragma once
#include <string>
#include "stdafx.h"
using namespace std;

class Donnees
{
public:
	Donnees(int,int,int, int, int);
	virtual ~Donnees();
	int getD1()const {
		return d1;
	};
	int getD2()const {
		return d2;
	};
	int getD3()const {
		return d3;
	};
	int getD4()const {
		return d4;
	};
	int getD5()const {
		return d5;
	};
	bool setD1(int);
	bool setD2(int);
	bool setD3(int);
	bool setD4(int);
	bool setD5(int);
	string toString()const { return "D(" + to_string(d1) + "/" + to_string(d2) + "/" + to_string(d3) + "/" + to_string(d4) + "/" + to_string(d5) + ")"; };
	bool valide();
private:
	int d1;
	int d2;
	int d3;
	int d4;
	int d5;
};

