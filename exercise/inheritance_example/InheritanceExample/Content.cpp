#include "Content.h"

Content::Content(string n, double d)
{
	this->name = n;
	this->durationInSeconds = d;
}

string Content::GetName()
{
	return this->name;
}

double Content::GetDurationInSeconds()
{
	return this->durationInSeconds;
}