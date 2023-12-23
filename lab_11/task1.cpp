// 1 - Перегрузка операторов в классе Time.cpp 

#include <iostream>

using namespace std;

class Time
{
private:
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

	Time(const int & hours, const int & minutes, const int & seconds)
	{
		c_seconds = seconds % 60;
		c_minutes = (minutes % 60) + (seconds / 60);
		c_hours = (hours + minutes / 60) % 24;
	}

	void ShowTime()
	{
		cout << c_hours << ":" << c_minutes << ":" << c_seconds;
	}

	Time operator+(const Time & t2)
	{
		Time time;

		time.c_seconds = (c_seconds + t2.c_seconds) % 60;
		time.c_minutes = (c_minutes + t2.c_minutes) % 60 + (c_seconds + t2.c_seconds) / 60;
		time.c_hours = (c_hours + t2.c_hours) + (c_minutes + t2.c_minutes) / 60;

		return time;
	}

	Time operator-(const Time & t2)
	{
		Time time;

		int t_1 = c_hours * 3600 + c_minutes * 60 + c_seconds;
		int t_2 = t2.c_hours * 3600 + t2.c_minutes * 60 + t2.c_seconds;

		time.c_seconds = (abs)(t_1 - t_2) % 60;
		time.c_minutes = (abs)((t_1 - t_2) % 3600) / 60;
		time.c_hours = (abs)(t_1 - t_2) / 3600;

		return time;

	}

	Time operator+(const double& value1)
	{
		Time time;

		int h = (int)(value1 * 3600);

		time.c_seconds = (c_seconds + h) % 60;
		time.c_minutes = (c_minutes + (c_seconds + h) / 60) % 60;
		time.c_hours = (c_hours + (c_minutes + (c_seconds + h) / 60) / 60) % 24;

		return time;
	}

	friend Time operator+(double& value1, const Time & t2);

	bool operator>(const Time & t2)
	{
		if (c_hours > t2.c_hours)
		{
			return true;
		}
		else if (c_hours == t2.c_hours && c_minutes > t2.c_minutes)
		{
			return true;
		}
		else if (c_hours == t2.c_hours && c_minutes == t2.c_minutes && c_seconds > t2.c_seconds)
		{
			return true;
		}
		else return false;
	}
};

Time operator+(double& value1, const Time& t2) 
{
	Time time;

	int h = (int)(value1 * 3600);

	time.c_seconds = (t2.c_seconds + h) % 60;
	time.c_minutes = (t2.c_minutes + (t2.c_seconds + h) / 60) % 60;
	time.c_hours = (t2.c_hours + (t2.c_minutes + (t2.c_seconds + h) / 60) / 60) % 24;

	return time;

}


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

	Time t3 = t1 + t2;
	cout << "\nСумма двух интервалов времени: ";
	t3.ShowTime();

	Time t4 = t1 - t2;
	cout << "\nРазность двух интервалов времени: ";
	t4.ShowTime();

	double value1;
	cout << "\nВведите вещественное число, чтобы увеличить первый интервал времени: ";
	cin >> value1;

	Time t5 = t1 + value1;
	cout << "\nСумма t1 и первеменной вещественного типа: ";
	t5.ShowTime();

	Time t6 = value1 + t2;
	cout << "\nСумма вещественного числа и t2: ";
	t6.ShowTime();

	bool result = t1 > t2;
	cout << "\nРезультат сравнения времени (0: t2 > t1; 1: t1 > t2): " << result << endl;
}
