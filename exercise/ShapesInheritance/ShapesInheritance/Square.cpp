#include "Square.h"

Square::Square(double a)
{
	this->a = a;
}

double Square::Area()
{
	return a*a;
}

double Square::Perimeter()
{
	return 4*a;
}
