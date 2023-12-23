// 1 -  Передача массива в функцию.cpp 

#include <iostream>

using namespace std;

int sum_array(int n, int mas[]) //сумма элементов массива
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
	return s;
}

int sum_otr_array(int n, int mas[]) //сумма отрицательных элементов массива
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0)
		{
			s += mas[i];
		}
	}
	return s;
}

int sum_pol_array(int n, int mas[]) //сумма положительных элементов массива
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0)
		{
			s += mas[i];
		}
	}
	return s;
}

int sum_odd_idex(int n, int mas[]) //сумма элементов массива с нечетными индексами
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0) {
			s += mas[i];
		}
	}
	return s;
}
int sum_honest_idex(int n, int mas[]) //сумма элементов массива с четтными индексами
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0) {
			s += mas[i];
		}
	}
	return s;
}


void sort_array(int n, int mas[]) //сортировка массива
{
	int min = 0; // для записи минимального значения
	int buf = 0; // для обмена значениями

	for (int i = 0; i < n; i++)
	{
		min = i; // номер текущей ячейки, как ячейки с минимальным значением
		// в цикле найдем реальный номер ячейки с минимальным значением
		for (int j = i + 1; j < n; j++)
			min = (mas[j] < mas[min]) ? j : min;
		// перестановка этого элемента, поменяв его местами с текущим
		if (i != min)
		{
			buf = mas[i];
			mas[i] = mas[min];
			mas[min] = buf;
		}
	}
	cout << "{";
	for (int i = 0; i < n; i++)
	{
		cout << mas[i];
		if (mas[i] != mas[n - 1]) 
		{
			cout << ", ";
		}
	}
		
	cout << "}";
}

int main()
{
	const int n = 10;
	int mas[n];

	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]=";
		cin >> mas[i];
	}

	cout << "Cумма элементов массива: " << sum_array(n, mas) << endl;
	cout << "Cумма отрицательных элементов массива: " << sum_otr_array(n, mas) << endl;
	cout << "Cумма положительных элементов массива: " << sum_pol_array(n, mas) << endl;
	cout << "Cумма элементов массива с нечетными индексами " << sum_odd_idex(n, mas) << endl;
	cout << "Cумма элементов массива с четными индексами " << sum_honest_idex(n, mas) << endl;
	cout << "Сортированный массив ";
	sort_array(n, mas);
}

