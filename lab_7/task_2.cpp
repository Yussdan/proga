// 2 -  Решение квадратного уравнения.cpp 

#include <iostream>
#include <math.h>

using namespace std;

struct root
{
	double x1;
	double x2;
};

root MyRoot(double a, double b, double c, bool &status) //фунция подсчета корней квадратного уравнениия
{
	root myroots;
	double D = b * b - 4 * a * c;

	if (D < 0)
	{
		status = false;
		myroots.x1 = -1;
		myroots.x2 = -1;
	}
	else
	{
		myroots.x1 = (-b + sqrt(D)) / (2 * a);
		myroots.x2 = (-b - sqrt(D)) / (2 * a);
	}
	return myroots;
}

int main()
{
	double a, b, c;
	cout << "Введите коэффициенты квадратного уравнения: ";
	cin >> a >> b >> c;

	bool status = true;

	root result = MyRoot(a, b, c, status); 
	if (status == false)
	{
		cout << "Корней нет.";
	}
	else
	{
		cout << "В результате " << result.x1 << " " << result.x2 << " корни уравнения";
	}
}
