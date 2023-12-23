

#include <iostream>


using namespace std;

int main()
{
    int n;
    cout << "Сколько баллов Вы хотите набрать? ";
    cin >> n;

    int sum = 0;
    int col = 0;

    while (sum < n)
    {
            double x, y;
            cout << "Введите координаты выстрела: ";
            cin >> x >> y;

            if (x * x + y * y <= 1)
            {
                sum += 10;
                col += 1;
            }
            else if ((x * x + y * y > 1) && (x * x + y * y <= 4))
            {
                sum += 5;
                col += 1;
            }
            else
            {
                sum += 0;
                col += 1;
            }        
    }
    if (sum < 25)
    {
        cout << "Вы совершили  " << col << " выстрелов. Ваш уровень - новичок";
    }
    if ((sum >= 25) && (sum < 50))
    {
        cout << "Вы совершили  " << col << " выстрелов. Ваш уровень - простой стрелок";
    }
    if (sum >= 50)
    {
        cout << "Вы совершили  " << col << " выстрелов. Ваш уровень - снайпер";
    }
   
}
