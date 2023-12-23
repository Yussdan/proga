// 2 -  Применение итерации реализации функции.cpp

#include <iostream>
#include <math.h>

using namespace std;

double cub_stand_pow(int n)
{
	return (pow(n, 1.0 / 3));
}

double cub_function(int n) //функция вычисления кубического корня с помощью итерационной формулы
{
	int minus = 1;
	if (n < 0)
	{
		n = abs(n);
		minus *= -1;
	}
	double* a = new double[n + 1];
	a[0] = 1; // кубический корень из 1 = 1 *первый элемент массива*
	for (int i = 1; i < n + 1; i++)
	{
		a[i] = (double) 1 / 3 * (n / (a[i - 1] * a[i - 1]) + 2 * a[i - 1]);
	}
	return a[n]*minus;
}

int main()
{
	int n;
	cout << "Введите значение для вычислени кубического корня: ";
	cin >> n;
	cout << "с помощью pow: " << cub_stand_pow(n) << endl;
	cout.precision(10);
	cout << "с помощью итерационной формулы: " << cub_function(n) << endl;
}
