// 1 - Вычисление корней квадратного уравнения.cpp 

#include <iostream>
#include <math.h>

using namespace std;

int MyRoot(double a, double b, double c, double& x1, double& x2) //фунция подсчета корней квадратного уравнениия
{
	double D = b * b - 4 * a * c;
	if (D == 0)
	{
		x1 = -b / (2 * a);
		x2 = x1;
		return 0;
	}
	else if (D > 0)
	{
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		return 1;
	}
	else 
	{
		return -1;
	}
}


int main()
{
	double a, b, c;
	cout << "Введите коэффициенты квадратного уравнения: ";
	cin >> a >> b >> c;
	double x1, x2;
	int result = MyRoot(a, b, c, x1, x2); //вызов функции и вывод результата на экран
	if (result == 0)
	{
		cout << "Корень уравнения один x1 = x2 = " << x1 << endl;
	}
	if (result == 1)
	{
		cout << "Корни уравнения x1 = " << x1 << ", x2 = " << x2 << endl;
	}
	if (result == -1)
	{
		cout << "Корней уравнения нет" << endl;
	}
}