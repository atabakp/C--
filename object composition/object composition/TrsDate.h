#pragma once
#include <string>
using namespace std;
class TrsDate
{
private:
	string dayweek;
	int day = 0;
	int month = 0;
	int year = 1700;
	bool isLeap();
	bool weekdayCompare(string, string);
public:
	TrsDate();
	TrsDate(string, int, int, int);
	~TrsDate();

	void setDayweek(string);
	string getDayweek();

	void setDay(int);
	int getDay();

	void setMonth(int);
	int getMonth();

	void setYear(int);
	int getYear();

	void print();
	string toString();
};


