// 4 - Рекурсивная функция суммы ряда.cpp 

#include <iostream>

using namespace std;

int Recursion(int n, int S = 0) //вычисление суммы ряда
{
    if (n > 1)
    {
       return S = 5 * n + Recursion((n-1), S);
    }
    else return 5;
}



int main()
{
    int k;
    cout << "Введите номер элемента до которого Вы хотите посчитать сумму ряда: ";
    cin >> k;
    cout << "Ответ: " << Recursion(k) << endl;
}
