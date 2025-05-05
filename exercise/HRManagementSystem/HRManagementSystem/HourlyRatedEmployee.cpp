#include "HourlyRatedEmployee.h"

HourlyRatedEmployee::HourlyRatedEmployee(int hours, double rate)
{
	this->hours = hours;
	this->rate = rate;
}

double HourlyRatedEmployee::calculatePay()
{
	return this->hours * this->rate;
}
