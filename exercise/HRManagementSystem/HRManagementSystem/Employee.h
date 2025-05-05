#pragma once
#include <string>

class Employee // Ciste abstraktni tridu
{
public:
	virtual double calculatePay() = 0; // ciste virtualni metoda
};


class Employee // Abstraktni trida
{
private:
	std::string name;
public:
	virtual double calculatePay() = 0; // ciste virtualni metoda
	std::string GetName();
};
