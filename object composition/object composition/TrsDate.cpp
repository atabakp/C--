#include "TrsDate.h"
#include <string>
#include <iostream>

using namespace std;

bool TrsDate::isLeap() {

	if (year % 4 != 0) {
		return false;
	}
	else if (year % 100 != 0) {
		return true;
	}
	else if (year % 400 != 0) {
		return false;
	}
	else {
		return true;
	}
}


TrsDate::TrsDate()
{
	dayweek = "Monday";
	day = 1;
	month = 1;
	year = 1700;
}
TrsDate::TrsDate(string weekday, int year, int month, int day) {
	this->setDayweek(weekday);
	this->setYear(year);
	this->setMonth(month);
	this->setDay(day);
}

TrsDate::~TrsDate()
{
}
bool TrsDate::weekdayCompare(string str1, string str2) {
	for (int i = 0; i < str1.length(); i++) {
		str1[i]=tolower(str1[i]);
	}
	
	if (str1.compare(str2) == 0) {
		return true;
	}
	else
		return false;

}
void TrsDate::setDayweek(string value) {
	if (weekdayCompare(value, "sunday") || weekdayCompare(value, "monday") ||
		weekdayCompare(value, "tuesday") || weekdayCompare(value, "wednesday") ||
		weekdayCompare(value, "thursday") || weekdayCompare(value, "friday") ||
		weekdayCompare(value, "saturday")) {
		dayweek = value;
	}
	else {
		dayweek = "Monday";
	}

}

string TrsDate::getDayweek()
{
	return dayweek;
}

void TrsDate::setDay(int value)
{
	if (month == 1 || month == 3 ||
		month == 5 || month == 7 ||
		month == 8 || month == 10 ||
		month == 12) {

		if (value < 1 || value >31) { day = 0; }
		else { day = value; }

	}
	else if (month == 2) {
		if (this->isLeap()) {
			if (value < 1 || value >29) { day = 0; }
			else { day = value; }
		}
		else {
			if (value < 1 || value >28) { day = 0; }
			else { day = value; }
		}
		return;
	}
	else {
		if (value < 1 || value >30) { value = 0; }
		else { day = value; }
	}
}

int TrsDate::getDay()
{
	return day;
}

void TrsDate::setMonth(int value)
{
	if (value > 12 || value < 1) {
		value = 0;
	}
	else
		month = value;
}

int TrsDate::getMonth()
{
	return month;
}

void TrsDate::setYear(int value)
{
	year = value;
}

int TrsDate::getYear()
{
	return year;
}

void TrsDate::print()
{
	cout << this->dayweek << "-" << this->day << "/" << this->month << "/" << this->year << endl;
}

string TrsDate::toString() {
	string out = this->getDayweek() + " - " + to_string(this->getDay()) + "/" + to_string(this->getMonth()) + "/" + to_string(this->getYear());
	return out;
}



