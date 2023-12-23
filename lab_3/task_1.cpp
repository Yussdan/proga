// 1 - Проверка номера СНИЛС.cpp 


#include <iostream>
#include <string>

using namespace std;

bool Proverka(string snils, string dop_num)
{
    string  main1 = snils.substr(0, 3); //основная часть номера СНИЛС игнорируя дополнительные знаки
    string  main2 = snils.substr(4, 3);
    string  main3 = snils.substr(8, 3);
    string main = main1 + main2 + main3; //объединение всех подстрок в один номер без пробелов
    dop_num; //дополнительная часть номера СНИЛС

    int sum = 0; // переменная для подсчета контрольного числа

    for (int i = 0; i < 9; i++)
    {
        sum += (main[i] - 48) * (9 - i);
    }

    string control_num;
    if (sum < 100)
    {
        if (sum < 10)
        {
            control_num = "0" + to_string(sum);
        }
        else
        {
            control_num = to_string(sum);
        }

    }
    else if ((sum == 100) || (sum == 101))
    {
        control_num = "00";
    }
    else if (sum > 101)
    {
        sum = sum % 101;
        if (sum < 100)
        {
            if (sum < 10)
            {
                control_num = "0" + to_string(sum);
            }
            else
            {
                control_num = to_string(sum);
            }
        }
        else 
        {
            control_num = "00";
        }

    }
    if (dop_num.compare(control_num) == 0)
    {
        return true;
    }
    else return false;
}


int main()
{
    string s, s2;
    cout << "Введите номер СНИЛС полностью: ";
    cin >> s >> s2;
    cout << Proverka(s, s2) << endl; 
}

    