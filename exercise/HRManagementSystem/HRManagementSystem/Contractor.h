#pragma once
#include "Employee.h"
class Contractor :
    public Employee
{
public:
    virtual double calculatePay();
};

