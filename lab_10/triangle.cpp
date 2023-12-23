#include "triangle.h"
#include <iostream>
#include <math.h>

using namespace std;

double Triangle::P() 
{
	double a1 = Triangle::d1->distanceTo(*d2);
	double a2 = Triangle::d2->distanceTo(*d3);
	double a3 = Triangle::d3->distanceTo(*d1);

	return a1 + a2 + a3;
}

double Triangle::S() 
{
	double a1 = Triangle::d1->distanceTo(*d2);
	double a2 = Triangle::d2->distanceTo(*d3);
	double a3 = Triangle::d3->distanceTo(*d1);
	double p = (a1 + a2 + a3) / 2;
	double S = sqrt(p * (p - a1) * (p - a2) * (p - a3));

	return S;
}

void Triangle::show() const
{
	double a1 = Triangle::d1->distanceTo(*d2);
	double a2 = Triangle::d2->distanceTo(*d3);
	double a3 = Triangle::d3->distanceTo(*d1);
	cout << "Стороны: a1 = " << a1 << ", a2 = " << a2 << ", a3 = " << a3 << endl;
}

Triangle::Triangle(Dot* d1, Dot* d2, Dot* d3)
{
	this->d1 = d1;
	this->d2 = d2;
	this->d3 = d3;
}

