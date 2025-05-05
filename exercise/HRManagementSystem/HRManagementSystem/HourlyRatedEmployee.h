#pragma once
#include "Employee.h"
class HourlyRatedEmployee : public Employee
{
private:
	int hours;
	double rate;
public:
	HourlyRatedEmployee(int hours, double rate);
	virtual double calculatePay();
};

