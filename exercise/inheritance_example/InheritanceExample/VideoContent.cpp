#include "VideoContent.h"

VideoContent::VideoContent(string n, double d) : Content(n,d)
{
	this->views = 0;
}

int VideoContent::GetViews()
{
	return this->views;
}

void VideoContent::View()
{
	this->views++;
}
