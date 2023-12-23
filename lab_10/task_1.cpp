// 1 - Реализация класса Triangle.cpp 

#include <iostream>
#include "triangle.h"
#include "dot.h"

using namespace std;

int main()
{
	double x, y;
	cout << "Введите, пожалуйста, координаты x, y для трех точек A, B и C:\n";
	cout << "A (x, y): ";
	cin >> x >> y;
	Dot A = Dot(x, y);

	cout << "B (x, y): ";
	cin >> x >> y;
	Dot B = Dot(x, y);

	cout << "C (x, y): ";
	cin >> x >> y;
	Dot C = Dot(x, y);

	Triangle T = Triangle(&A, &B, &C);

	double perimeter = T.P();
	double square = T.S();

	T.show();
	cout << "P = " << perimeter << ", S = " << square << endl;

}