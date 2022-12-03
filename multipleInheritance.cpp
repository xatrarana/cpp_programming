#include <iostream>

using namespace std;

class Area
{
	public:
		int getArea(int l, int b)
		{
			return l * b;
		}
};

class Perimeter
{
	public:
		int getPerimeter(int l, int b)
		{
			return 2*(l + b);
		}
};

class Rectangle : public Area, public Perimeter
{
	int length;
	int breadth;
	public:
		Rectangle()
		{
			length = 7;
			breadth = 4;
		}
		int area()
		{
			return Area::getArea(length, breadth);
		}
		int perimeter()
		{
			return Perimeter::getPerimeter(length, breadth);
		}
};

int main()
{
	Rectangle rt;
	cout << "Area : " << rt.area() << endl;
	cout << "Perimeter : " << rt.perimeter() << endl;
	return 0;
}