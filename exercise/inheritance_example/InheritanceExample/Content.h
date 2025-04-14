#pragma once
#include "string"

using namespace std;

class Content
{
private:
	string name;
	double durationInSeconds;
	// binary format blob
public:
	Content(string n, double d);
	virtual string GetName();
	double GetDurationInSeconds();
	string PrintPost();
};

