#pragma once
#include "Employee.h"
class FixedSalaryEmployee :
    public Employee
{
public:
    virtual double calculatePay();
};

