// 2 - Сохранение данных в текстовый файл.cpp 

#include <iostream>
#include <fstream>

using namespace std;

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
}

int main()
{
	const int n = 10;

    int mas[n] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };

    ofstream out("test", ios::out | ios::binary);
    if (!out.is_open()) 
    {
        cout << "Файл открыть невозможно\n";
        return 1;
    }
	else
	{
		out << "Изначальный массив: ";
		out << "{ ";
		for (int i = 0; i < n; i++)
		{
			out << mas[i];
			if (i == 9)
			{
				out << " ";
			}
			else 
			{
				out << ", ";
			}
			
		}
		out << "}" << "\n";

		out << "Отсортированный массив: ";

		sort_array(n, mas);

		out << "{ ";
		for (int i = 0; i < n; i++)
		{
			out << mas[i];
			if (mas[i] != mas[n - 1])
			{
				out << ", ";
			}
		}
		out << " }";
    }
    out.close();
}
