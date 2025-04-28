#include "Circle.h"

Circle::Circle(double a)
{
	this->r = a;
}

double Circle::Area()
{
	return this->r*this->r*3.14;
}

double Circle::Perimeter()
{
	return 2*3.14*this->r;
}
