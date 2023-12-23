#include <string>
#include <sstream>

using namespace std;
#pragma once /* Защита от двойного подключения заголовочного файла */

class human {
private:
	string name; // имя
	string last_name; // фамилия
	string second_name; // отчество
public:
	// Конструктор класса human
	human(string last_name, string name, string
		second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}

	virtual void show_full_name()
	{
		cout << "Фамилия: " << last_name << " Имя: " << name << " Отчество: " << second_name << endl;
	}
};