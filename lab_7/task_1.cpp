// 1 - Структура Time.cpp 

#include <iostream>

using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;

	int TimeInSecond()
	{
		return hours * 3600 + minutes * 60 + seconds;
	}
};

Time slog(Time t1, Time t2)
{
	Time time;

	time.seconds = (t1.seconds + t2.seconds) % 60;
	time.minutes = (t1.minutes + t2.minutes) % 60 + (t1.seconds + t2.seconds) / 60;
	time.hours = (t1.hours + t2.hours) + (t1.minutes + t2.minutes) / 60;

	return time;
}

Time razn(Time t1, Time t2)
{
	Time time;

	int t_1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	int t_2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

	time.seconds = (abs)(t_1 - t_2) % 60;
	time.minutes = (abs)((t_1 - t_2) % 3600)/60;
	time.hours = (abs)(t_1 - t_2) / 3600;

	return time;
}



int main()
{
	Time t1;
	cout << "Введите время для первого интервала в формате часы, минуты, секунды через пробел без специальных знаков: ";
	cin >> t1.hours >> t1.minutes >> t1.seconds;

	Time t2;
	cout << "Введите время для второго интервала в формате часы, минуты, секунды через пробел без специальных знаков: ";
	cin >> t2.hours >> t2.minutes >> t2.seconds;

	cout << "Первое время в секундах: " << t1.TimeInSecond() << "\n";
	cout << "Второе время в секундах: " << t2.TimeInSecond() << "\n";

	Time t3 = slog(t1, t2);
	cout << "Сложение двух интервалов времени равняется: " << t3.hours << " час. " << t3.minutes << " мин. " << t3.seconds << " сек.\n";

	t3 = razn(t1, t2);
	cout << "Вычитание двух интервалов времени равняется: " << t3.hours << " час. " << t3.minutes << " мин. " << t3.seconds << " сек. ";

}
