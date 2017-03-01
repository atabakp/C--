#pragma once
#include "stdafx.h"
ref class PlayTime
{
private:
	int second;
	int minute;
	int hour;
public:
	PlayTime();
	~PlayTime();

	void setSecond(int val);
	int getSecond();

	void setMinute(int val);
	int getMinute();

	void setHour(int val);
	int getHour();

	PlayTime^ operator++();
	PlayTime^ operator++(Int32);
};
