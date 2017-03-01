#include "stdafx.h"

PlayTime::PlayTime()
{
}

PlayTime::~PlayTime()
{
}

void PlayTime::setSecond(int val)
{
	if (val < 0)
		throw NegativeEntryException();
	if (val > 59)
		throw InvalidSecondEntryException();
	this->second = val;
}

int PlayTime::getSecond()
{
	return this->second;
}

void PlayTime::setMinute(int val)
{
	if (val < 0)
		throw NegativeEntryException();
	if (val > 60)
		throw InvalidMinuteEntryException();
	this->minute = val;
}

int PlayTime::getMinute()
{
	return this->minute;
}

void PlayTime::setHour(int val)
{
	if (val < 0)
		throw NegativeEntryException();
	if (val > 24)
		throw InvalidHourEntryException();
	this->hour = val;
}

int PlayTime::getHour()
{
	return this->hour;
}

PlayTime^ PlayTime::operator++()
{
	this->minute++;
	return this;
}

PlayTime^ PlayTime::operator++(Int32)
{
	this->minute++;
	return this;
}