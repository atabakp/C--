#pragma once
using namespace System;
ref class MyDate

{
	
private:
	Int32 year;
	Int32 month;
	Int32 day;
public:
	MyDate();
	~MyDate();

	Int32 getYear();
	void setYear(Int32 value);

	Int32 getMonth();
	void setMonth(Int32 value);

	Int32 getDay();
	void setDay(Int32 value);

	MyDate^ operator++();
	MyDate^ operator++(Int32);
	void printMDY();
	void printDMY();
	void printMonthDY();
};

