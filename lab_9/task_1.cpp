// 1 - Безопасная реализация класса Triangle.cpp 
#include <iostream>
#include <math.h>

using namespace std;

class SmsError
{
public:
    SmsError() : message("Треугольника с такими сторонами не существует") { }
    void printMessage() const { cout << message << endl; }
private:
    string message;
};

class Triangle
{
    int x;
    int y;
    int z;

public:
    Triangle(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    double Sqrt_Triangle(int x, int y, int z)
    {
        if (x + y > z && x + z > y && z + y > x)
        {
            double p = (x + y + z) / 2;
            double S = sqrt(p * (p - x) * (p - y) * (p - z));
            return S;
        }
        else throw SmsError();
    }
};

int main()
{
    int a, b, c;
    cout << "Введите стороны треугольника: ";
    cin >> a >> b >> c;

    Triangle t1(a, b, c);
    try
    {
        cout << "Площадь треугольника равна " << t1.Sqrt_Triangle(a, b, c) << endl;
    }
    catch (SmsError& error)
    {
        cout << "ОШИБКА: ";
        error.printMessage();
        return 1;
    }
    return 0;
}
