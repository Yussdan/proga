#include "human.h"
#include <string>

using namespace std;

class teacher : public human {
	// Конструктор класса teacher
private:
	// Учебные часы
	unsigned int work_time;
public:
	teacher(
		string last_name,
		string name,
		string second_name,
		// Количество учебных часов за семестр у преподавателя
		unsigned int work_time
	) : human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	// Получение количества учебных часов
	unsigned int get_work_time()
	{
		return this->work_time;
	}
	void show_full_name()
	{
		human::show_full_name();
		cout << "Количество учебных часов: " << get_work_time() << endl;
	}
};