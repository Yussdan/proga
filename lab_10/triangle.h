#pragma once
#include "dot.h"

using namespace std;

class Triangle
{
public:
	Triangle(Dot*, Dot*, Dot*);
	void show() const;
	double P();
	double S();
private:
	Dot* d1;
	Dot* d2;
	Dot* d3;
};