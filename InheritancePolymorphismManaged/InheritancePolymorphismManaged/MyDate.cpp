#include "stdafx.h"
#include <time.h>
#include <iostream>

MyDate::MyDate()
{
}



MyDate::~MyDate()
{
}

int MyDate::getYear()
{
	return this->year;
}

time_t rawtime;
struct tm * timeinfo;

void MyDate::setYear(Int32 value)
{
	time(&rawtime);
	timeinfo = localtime(&rawtime);

	if (value < 0)
		throw NegativeEntryException();
	if (value - 1900 > timeinfo->tm_year)
		throw InvalidYearEntryException();
	this->year = value;
}

int MyDate::getMonth()
{
	return this->month;
}

void MyDate::setMonth(Int32 value)
{
	if (value < 0)
		throw NegativeEntryException();
	if (value > 12 || value < 1)
		throw InvalidMonthEntryException();
	this->month = value;
}

int MyDate::getDay()
{
	return this->day;
}

void MyDate::setDay(Int32 value)
{
	if (value < 0)
		throw NegativeEntryException();
	if (value < 0 || value > 31)
		throw InvalidDayEntryException();
	this->day = value;
}

MyDate^ MyDate::operator++()
{
	this->day++;
	return this;
}

MyDate^ MyDate::operator++(Int32)
{
	this->day++;
	return this;
}

void MyDate::printMDY()
{
	cout << this->getMonth() << "/"
		<< this->getDay() << "/"
		<< this->getYear();
}

void MyDate::printDMY()
{
	cout << this->getDay() << "/"
		<< this->getMonth() << "/"
		<< this->getYear();
}

void MyDate::printMonthDY()
{
	String^ month;
	switch (this->month)
	{
	case 1:
		month = "January";
		break;
	case 2:
		month = "February";
		break;
	case 3:
		month = "March";
		break;
	case 4:
		month = "April";
		break;
	case 5:
		month = "May";
		break;
	case 6:
		month = "June";
		break;
	case 7:
		month = "July";
		break;
	case 8:
		month = "August";
		break;
	case 9:
		month = "September";
		break;
	case 10:
		month = "October";
		break;
	case 11:
		month = "November";
		break;
	case 12:
		month = "December";
		break;
	}
	Console::Write(this->month + "," + this->getDay() + "/" + this->getYear());


}
