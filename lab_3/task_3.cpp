// 3 -  Работа с различными треугольниками.cpp 

#include <iostream>
#include <math.h>

using namespace std;

void Treygol(double a) //расчет площади равностороннего треугольника
{
    double p = (a * 3)/2;
    double S = sqrt(p*(p-a)*(p-a)*(p-a));
    cout << "Площадь равностороннего треугольника равна " << S;
}

void Treygol(double a, double b, double c) //расчет площади любого треугольника
{
    double p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Площадь треугольника равна " << S;
}

int main()
{
    string name;
    cout << "Площадь какого треугольника вы хотите посчитать? ";
    cin >> name;
    
    if (name == "равносторонний")
    {
        double a;
        cout << "Введите сторону треугольника: ";
        cin >> a;

        Treygol(a);
    }
    else
    {
        double a, b, c;
        cout << "Введите первую сторону треугольника: ";
        cin >> a;
        cout << "Введите вторую сторону треугольника: ";
        cin >> b;
        cout << "Введите третью сторону треугольника: ";
        cin >> c;

        Treygol(a, b, c);
    }
}
