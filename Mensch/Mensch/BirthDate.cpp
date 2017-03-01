#include "stdafx.h"
#include "BirthDate.h"
#include <time.h>

BirthDate::BirthDate()
{
}

BirthDate::~BirthDate()
{
}

int BirthDate::getYear()
{
	return this->year;
}

time_t rawtime;
struct tm * timeinfo;

void BirthDate::setYear(Int32 value)
{
	time(&rawtime);
	timeinfo = localtime(&rawtime);

	if (value < 0)
		throw NegativeEntryException();
	if (value - 1900 > timeinfo->tm_year)
		throw InvalidYearEntryException();
	this->year = value;
}

int BirthDate::getMonth()
{
	return this->month;
}

void BirthDate::setMonth(Int32 value)
{
	if (value < 0)
		throw NegativeEntryException();
	if (value > 12 || value < 1)
		throw InvalidMonthEntryException();
	this->month = value;
}

int BirthDate::getDay()
{
	return this->day;
}

void BirthDate::setDay(Int32 value)
{
	if (value < 0)
		throw NegativeEntryException();
	if (value < 0 || value > 31)
		throw InvalidDayEntryException();
	this->day = value;
}

BirthDate^ BirthDate::operator++()
{
	this->day++;
	return this;
}

BirthDate^ BirthDate::operator++(Int32)
{
	this->day++;
	return this;
}