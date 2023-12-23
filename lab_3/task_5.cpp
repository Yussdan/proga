// 5 - Перевод в двоичный код.cpp 

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int Recursion(int num) //перевод из десятичной системы в двоичную
{
    if (num > 1)
    {
        Recursion(num / 2);
    }
    cout  << num % 2;
    return num;
}

int main()
{
    int n;
    cout << "Введите число: ";
    cin >> n;
    cout << "Двочиный код: ";
    Recursion(n);
}
