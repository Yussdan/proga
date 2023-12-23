// Лаба2_Контрольное задание_1.cpp - Определение супер простого числа

#include <iostream>

using namespace std;

bool ItsSimple(int n) //функция проверки числа на то, что оно простое
{
	for (int i = 2; i <= n/2; i++)
	{
		if (n % i == 0)
			return false;
	}
	return n > 1;
}

bool ItsSuperSimple(int n) //функция проверки числа на то, что оно суперпростое
{
	int number = 0;
	if (ItsSimple(n))
	{
		for (int i = 1; i <= n; i++)
		{
			if (ItsSimple(i)) 
				number++;
		}
		return ItsSimple(number);
	}
	return ItsSimple(number);
}

int main()
{
	int x;
	cout << "Введите число для проверки: ";
	cin >> x;
	if (ItsSuperSimple(x))
		cout << "Число " << x << " суперспростое!" << endl;
	else cout << "Число " << x << " не суперспростое!" << endl;
}
