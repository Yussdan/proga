#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x[5], y[5];

    for (int i = 0; i < 5; ++i)
    {
        cout << "Введите значение X и Y для вершины " << i + 1 << ": ";
        cin >> x[i] >> y[i];
    }

    double area = abs((x[0] * y[1] + x[1] * y[2] + x[2] * y[3] + x[3] * y[4] + x[4] * y[0] -
                      y[0] * x[1] - y[1] * x[2] - y[2] * x[3] - y[3] * x[4] - y[4] * x[0]) / 2);

    cout.precision(2);
    cout << "Площадь пятиугольника = " << area << endl;

    return 0;
}
