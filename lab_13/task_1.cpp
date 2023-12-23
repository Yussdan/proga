// 1 - Полиморфизм в системе классов.cpp 
#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"

using namespace std;

int main()
{
	int k;
	cout << "Чьи данные вы хотите ввести? 1 - студент, 2 - учитель: ";
	cin >> k;

	if (k == 1)
	{
		string last_name;
		string name;
		string second_name;
		cout << "Введите ФИО студента: ";
		cin >> last_name;
		cin >> name;
		cin >> second_name;

		vector<int> scores;
		int n;
		cout << "Введите оценки студента: ";
		for (int i = 0; i < 5; i++) {
			cin >> n;
			scores.push_back(n);
		}
		student* stud = new student(last_name, name, second_name, scores);
		stud->show_full_name();
	}
	else
	{
		string last_name;
		string name;
		string second_name;
		cout << "Введите ФИО учителя: ";
		cin >> last_name;
		cin >> name;
		cin >> second_name;
		int teacher_work_time;
		cout << "Введите количество часов работы: ";
		cin >> teacher_work_time;
		teacher* tch = new teacher(last_name, name, second_name, teacher_work_time);
		tch->show_full_name();
	}
}