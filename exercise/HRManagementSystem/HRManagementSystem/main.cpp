// HRManagementSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
#include "Contractor.h"
#include "HourlyRatedEmployee.h"
#include "FixedSalaryEmployee.h"

int main()
{
    std::cout << "Hello World!\n";

    // Employee* tst = new Employee();
    Contractor* contractor1 = new Contractor();
    HourlyRatedEmployee* employee1 = new HourlyRatedEmployee(160, 500);
    FixedSalaryEmployee* employee2 = new FixedSalaryEmployee();

    std::cout << contractor1->calculatePay() << std::endl;
}