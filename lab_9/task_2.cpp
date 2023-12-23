// 2 - Безопасная реализация класса Time.cpp 

#include <iostream>

using namespace std;

class SmsError
{
public:
	SmsError() : message("Такого формата времени не существует") { }
	void printMessage() const { cout << message << endl; }
private:
	string message;
};


class Time
{
	int c_hours;
	int c_minutes;
	int c_seconds;

public:
	Time()
	{
		c_hours = 0;
		c_minutes = 0;
		c_seconds = 0;
	}

	Time(int hours, int minutes, int seconds)
	{
		c_seconds = seconds;
		c_minutes = minutes;
		c_hours = hours;

	}

	void ShowTime()
	{
		if ((c_seconds > 60 || c_minutes > 60 || c_hours > 24) || (c_seconds < 0 || c_minutes < 0 || c_hours < 0))
		{
			throw SmsError();
		}
		else
		{
			c_seconds = c_seconds % 60;
			c_minutes = (c_minutes % 60) + (c_seconds / 60);
			c_hours = (c_hours + c_minutes / 60);

			cout << c_hours << ":" << c_minutes << ":" << c_seconds;
		}
	}

	void SlogTime(Time t1, Time t2)
	{
		c_seconds = (t1.c_seconds + t2.c_seconds) % 60;
		c_minutes = (t1.c_minutes + t2.c_minutes) % 60 + (t1.c_seconds + t2.c_seconds) / 60;
		c_hours = ((t1.c_hours + t2.c_hours) + (t1.c_minutes + t2.c_minutes) / 60) % 24;
	}
};

int main()
{
	int hours, minutes, seconds;
	cout << "Введите время для первого интервала в формате часы, минуты, секунды через пробел без специальных знаков: ";
	cin >> hours >> minutes >> seconds;

	Time t1(hours, minutes, seconds);
	try
	{
		t1.ShowTime();
	}
	catch (SmsError& error)
	{
		cout << "ОШИБКА: ";
		error.printMessage();
		return 1;
	}

	cout << "\nВведите время для второго интервала в формате часы, минуты, секунды через пробел без специальных знаков: ";
	cin >> hours >> minutes >> seconds;

	Time t2(hours, minutes, seconds);
	try
	{
		t2.ShowTime();
	}
	catch (SmsError& error)
	{
		cout << "ОШИБКА: ";
		error.printMessage();
		return 1;
	}

	Time t3;
	t3.SlogTime(t1, t2);
	cout << "\nСумма двух интервалов времени: ";
	t3.ShowTime();
}