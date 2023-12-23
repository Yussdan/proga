// 4 - Передача параметров в программу.cpp 

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc >= 4) 
	{
		if (strncmp(argv[1], "-a", 2) == 0) 
		{
			cout << argv[2] << " + " << argv[3] << " = " << atoi(argv[2]) + atoi(argv[3]) << endl;
		}
		else if (strncmp(argv[1], "-m", 2) == 0)
		{
			cout << argv[2] << " * " << argv[3] << " = " << atoi(argv[2]) * atoi(argv[3]) << endl;
		}
		else 
		{
			cout << "Введите правильный параметр-флаг." << endl;
		}
	}
	else
	{
		cout << "Не хватает вводимых аргуметов." << endl;
	}
}

