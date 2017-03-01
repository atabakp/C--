#pragma 
#include "Exception.h"
#include <time.h>
#include <string>
using namespace std;
template <typename T>
class MyDate 
{
	string charMonth[12] = {
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"
	};
private:

	T day;
	T month;
	T year;

	
public:

	MyDate();
	~MyDate();

	void setDay(int value);
	int getDay();

	void setMonth(int value);
	int getMonth();

	void setYear(int value);
	int getYear();
	void setMonth(string value);



};

template <typename T>
void MyDate<T>::setMonth(string value)
{
	
	for (int i = 0; i < 12; i++) {
		if (tolower(charMonth[i]) == value) {
			this->month = i + 1;
			return;
		}
	}
		throw InvalidMonthEntryException();
	
}

template <typename T>
 int MyDate<T>::getYear()
{
	return year;
}


using namespace std;
template <typename T>
MyDate<T>::MyDate()
{
}

template <typename T>
MyDate<T>::~MyDate()
{
}

template <typename T>
void MyDate<T>::setDay(int value)
{
	if (value < 0)
		throw NegativeEntryException();
	if (value < 0 || value > 31)
		throw InvalidDayEntryException();
	this->day = value;
}

template <typename T>
int MyDate<T>::getDay()
{
	return this->day;
}

template <typename T>
void MyDate<T>::setMonth(int value)
{
	if (value < 0)
		throw NegativeEntryException();
	if (value > 12 || value < 1)
		throw InvalidMonthEntryException();
	this->month = value;
}

template <typename T>
int MyDate<T>::getMonth()
{
	return this->month;
}

time_t rawtime;
struct tm * timeinfo;

template <typename T>
void MyDate<T>::setYear(int value)
{
	time(&rawtime);
	timeinfo = localtime(&rawtime);

	if (value < 0)
		throw NegativeEntryException();
	if (value - 1900 > timeinfo->tm_year)
		throw InvalidYearEntryException();
	this->month = value;
}



