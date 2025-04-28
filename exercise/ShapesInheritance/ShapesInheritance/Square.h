#pragma once
#include "Shape.h"
class Square : public Shape
{
private:
	double a;
public:
	Square(double a);
	double Area();
	double Perimeter();
};

