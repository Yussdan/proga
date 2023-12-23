
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string snils;
    cout << "Введите номер СНИЛС полностью без раздедителей и специальных знаков: ";
    cin >> snils;

    string  main = snils.substr(0, 9); 
    string dop_num = snils.substr(9, 11); 

    int sum = 0; 

    for (int i = 1; i < 9; i++)
    {
        sum += ((int)main[i] - 48) * (9 - i);
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
    if ((sum == 100) || (sum == 101))
    {
        control_num = "00";
    }
    if (sum > 101)
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
        if (sum == 100)
        {
            control_num = "00";
        }
            
    }
    if (dop_num.compare(control_num) == 0)
    {
        cout << "True" << endl;
    }
    else cout << "False" << endl;
}