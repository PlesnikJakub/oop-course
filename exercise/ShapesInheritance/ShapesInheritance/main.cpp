// ShapesInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Square.h"
#include <vector>
#include "Circle.h"

int main()
{

    // 7. Dědičnost bude obsahovat a používat jak rozšíření (dat i metod)
// tak změnu chování s využitou pozdní vazbou.
//    8. Dědičná hierarchie bude obsahovat čistě abstraktní třídu.
//    9. Projekt bude využívat polymorfismus(polymorfní přiřazení i polymorfní datovou strukturu).


    std::cout << "Hello Shapes!\n";

    Shape* a = new Shape();
    a->Area();

    Square* s = new Square(5);

    std::cout << s->Area() << std::endl;
    std::cout << s->Perimeter() << std::endl;

    Shape* squareAsShape = s;
    std::cout << squareAsShape->Area() << std::endl;
    std::cout << squareAsShape->Perimeter() << std::endl;

    std::cout << "----------------------------" << std::endl;

    std::vector<Shape*> shapes;

    Circle* c = new Circle(3);

    shapes.push_back(new Square(3));
    shapes.push_back(new Square(5));
    shapes.push_back(new Circle(2));
    shapes.push_back(new Circle(8));

    for (Shape* shape : shapes) {
        std::cout << "Area: " << shape->Area() << " Perimeter: " << shape->Perimeter() << std::endl;
    }
}