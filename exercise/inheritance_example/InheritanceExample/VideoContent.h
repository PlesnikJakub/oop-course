#pragma once
#include "Content.h"

class VideoContent : public Content
{
private:
	int views;
public:
	VideoContent(string n, double d);
	int GetViews();
	void View();
};

