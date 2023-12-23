// Лаба2-Контрольное задание 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Введите сумму, которую Вы хотите разменять: ";
    cin >> x;

    int nominal[4] = { 10, 5, 2, 1 };

    for (int i : nominal)
    {
        int sum = x / i;
        x -= sum * i;

        if (sum != 0)
        {
            if (sum % 10 == 1)
            {
                cout << i << " руб. " << sum << " монета\n";
            }
            if ((sum % 10 >= 2) && (sum % 10 <= 4))
            {
                cout << i << " руб. " << sum << " монеты\n";
            }
            if ((sum % 10 == 0) || (sum % 10 >= 5))
            {
                cout << i << " руб. " << sum << " монет\n";
            }
        }
    }
}
