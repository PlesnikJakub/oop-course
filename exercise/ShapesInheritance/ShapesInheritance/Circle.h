#pragma once
#include "Shape.h"
class Circle :
    public Shape
{
private:
	double r;
public:
	Circle(double a);
	double Area();
	double Perimeter();
};

