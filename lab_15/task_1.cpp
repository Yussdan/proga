// 1 - Организация хранения данных в контейнере.cpp 

#include <iostream>
#include <map>
#include <string>

using namespace std;

struct StudentGrade
{
	StudentGrade(string name_student, char grade_student)
	{
		name = name_student;
		grade = grade_student;
	}

	string name;
	char grade;
};

int main()
{
	int group_size;
	cout << "Введите количество студентов в группе: ";
	cin >> group_size;

	map<string, char> group_table;
	int i = 0;
	while (i < group_size)
	{
		string name;
		cout << "Имя студента " << i + 1 << ": ";
		cin >> name;

		char grade;
		cout << "Оценка студента " << i + 1 << ": ";
		cin >> grade;

		StudentGrade studentgrade = StudentGrade(name, grade);

		group_table[studentgrade.name] = studentgrade.grade;
		i++;
	}

	for (const auto& student : group_table)
	{
		cout << "Студент: " << student.first << ", оценка: " << student.second << endl;
	}
}
