// Lesson2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "KeyValue.h"
#include "Person.h"

int main()
{
    std::cout << "Hello World!\n";

    Person* p1 = new Person("Jakub", 25);

    std::cout << p1->GetName() << std::endl;

    Person* p2 = new Person("Eliska", 25);

    std::cout << p2->GetName() << std::endl;

    p2->SetAge(26);

    std::cout << p2->GetAge() << std::endl;
















    /*KeyValue* firstKV = new KeyValue(0, 1.5);
    KeyValue* last = firstKV;
    for (int i = 1; i < 1000; i++)
    {
        last = last->CreateNext(i, 2.5);
    }

    KeyValue* current = firstKV;
    for (int i = 1; i < 1000; i++)
    {
        std::cout << current->GetKey() << std::endl;
        current = current->GetNext();
    }

    delete firstKV;*/
}
