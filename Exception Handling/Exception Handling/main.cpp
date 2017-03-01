
#include <stdio.h>
#include <iostream>
#include "MyDate.h"
#include "Exception.h"
using namespace std;
int main ()
{


MyDate<string> myDate;

int day;
string month;
int year;

try {
	cout << "enter day:" << endl;
	cin >> day;
	myDate.setDay(day);
	cout << "enter month:" << endl;
	cin >> month;
	myDate.setMonth(month);
	cout << "enter year:" << endl;
	cin >> year;
	myDate.setYear(year);
}
catch (exception &ex)
{

	cout << ex.what() << endl;

}



  return 0;
}