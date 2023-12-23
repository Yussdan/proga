// 1 - Шаблонная функция обработки массива.cpp 

#include <iostream>
#include <math.h>

using namespace std;

template <class T>
double sred(T* a, int b) 
{
    {
        double n = 0;
        for (int i = 0; i < b; i++) {
            n += a[i];
        }
        return (n / b);
    }
}

int main()
{
    int const raz = 5;
    int a1[raz] = { 1, 2, 3, 4, 5 };
    cout << "int[5] = ";
    cout << sred(a1, raz) << endl;

    long a2[raz] = { 100, 2000, 30000, 400000, 5000000 };
    cout << "long[5] = ";
    cout  << sred(a2, raz) << endl;

    double a3[raz] = { 1.7, 2.089, 0.3, -1.8, 5.98 };
    cout << "double[5] = ";
    cout << sred(a3, raz) << endl;

    char a4[raz] = "5720";
    cout << "char[5] = ";
    cout << sred(a4, raz) << endl;;
}