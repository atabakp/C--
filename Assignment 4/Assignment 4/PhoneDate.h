#pragma once
class PhoneDate
{
private:
	char* dayweek;
	int day;
	int month;
	int year;
	
public:
	PhoneDate();
	~PhoneDate();

	void setDayweek(char*);
	char* getDayweek();

	void setDay(int);
	int getDay();

	void setMonth(int);
	int getMonth();

	void setYear(int);
	int getYear();

	void print();
};

