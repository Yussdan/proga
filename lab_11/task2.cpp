// 2 - Реализация сортировки точек в векторе.cpp

#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm> // для алгоритма сортировки

using namespace std;

class Point
{
private:
	double x, y;

public:
	Point() 
	{
		this->x = 0;
		this->y = 0;
	}
	Point(double x, double y) 
	{
		this->x = x;
		this->y = y;
	}

	double distanceTo(const Point & point) 
	{
		return sqrt(pow(x - point.x, 2) + pow(y - point.y, 2));
	}

	bool operator< (Point & point)  
	{
		Point start_point;
		if (distanceTo(start_point) < point.distanceTo(start_point))
		{
			return true;
		}
		return false;
	}

	friend ostream& operator<< (ostream&, Point&);
};

ostream& operator<< (ostream& s, Point& point)
{
	s << '(' << point.x << ", " << point.y << ')';
	return s;
}

int main()
{
	vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	sort(v.begin(), v.end()); // требуется перегрузка оператора < для класса Point

	for (auto & point : v)
		cout << point << '\n'; // требуется перегрузка оператора << для класса Point

	return 0;
}
