#include "stdafx.h"
#include <iostream>
#include "PhoneDate.h"
using namespace std;

PhoneDate::PhoneDate()
{
	dayweek = "";
	day = 0;
	month = 0;
	year = 0;
}


PhoneDate::~PhoneDate()
{
}

void PhoneDate::setDayweek(char* value) {
	char* dayweek = value;
}

char* PhoneDate::getDayweek()
{
	return dayweek;
}

void PhoneDate::setDay(int value)
{
	if (value < 1 || value >31) {
		value = 0;
	}else
	int day = value;
}

int PhoneDate::getDay()
{
	return day;
}

void PhoneDate::setMonth(int value)
{ 
	if (value > 12 || value < 1) {
		value = 0;
	}else
	month = value;
}

int PhoneDate::getMonth()
{
	return month;
}

void PhoneDate::setYear(int value)
{
	year = value;
}

int PhoneDate::getYear()
{
	return year;
}

void PhoneDate::print()
{
	cout << "%s, %d/%d/%d"<<this->dayweek , this->day, this->month , this->year;
}

