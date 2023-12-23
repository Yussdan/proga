// 1 - Класс Time.cpp 

#include <iostream>

using namespace std;

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
		c_seconds = seconds % 60;
		c_minutes = (minutes % 60) + (seconds / 60);
		c_hours = (hours + minutes / 60) % 24;
	}

	void ShowTime()
	{
		cout << c_hours << ":" << c_minutes << ":" << c_seconds;
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
	cout << "Правильный формат времени: ";
	t1.ShowTime();

	cout << "\nВведите время для второго интервала в формате часы, минуты, секунды через пробел без специальных знаков: ";
	cin >> hours >> minutes >> seconds;

	Time t2(hours, minutes, seconds);
	cout << "Правильный формат времени: ";
	t2.ShowTime();

	Time t3;
	t3.SlogTime(t1, t2);
	cout << "\nСумма двух интервалов времени: ";
	t3.ShowTime();
}
