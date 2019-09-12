#include <iostream>

using namespace std;

class Shape
{
public:
	Shape(double w, double h): width(w), height(h){}
	virtual double area() = 0;
	
protected:
	double width;
	double height;
};

class Rectangle : public Shape
{
public:
	Rectangle(double w, double h): Shape(w, h){}
	
	double area()
	{
		return width * height;
	}
};

class Triangle : public Shape
{
public:
	Triangle(double w, double h): Shape(w, h){}

	double area()
	{
		return width * height / 2;
	}
};

void print_area(Shape* shape)
{
	cout << shape->area() << endl;
}

int main()
{
	Rectangle r(20.0, 5.0);
	Triangle t(20.0, 5.0);
	print_area(&r);
	print_area(&t);
	

	return 0;
}