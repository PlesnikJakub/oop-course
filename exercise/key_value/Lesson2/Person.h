#pragma once
#include <string>

using namespace std;

class Person
{
	private:
		string name;
		int age;
	public:
		Person(string n, int a);
		string GetName();
		int GetAge();
		void SetAge(int a);
};

