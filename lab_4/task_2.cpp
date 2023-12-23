// 2 - Реализация ввода данных.cpp

#include <iostream>

using namespace std;

bool Input(int& a, int& b) //функция проверяет делимость каждого числа на 7
{
    cout << "Введите числа a и b такие, что каждое из них делилось на 7: ";
    cin >> a >> b;
    return (a % 7 == 0) && (b % 7 == 0);
}

int main()
{
    int a, b;
    if (Input(a, b) == false) 
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    cout << "Сумма a и b равна " << s << endl;
    return 0;
}
