#include "SoheilsTime.h"
#include "Transaction.h"
#include <iostream>
using namespace std;
void PrintSoheilsTime(SoheilsTime *);
void PrintTransaction(Transaction *);
void main()
{
	SoheilsTime * TimeObj1, *TimeObj2;
	// Creating a Time Object using Default Constructor
	TimeObj1 = new SoheilsTime();
	// At this point TimeObj1 has 0,0,0 in it 
	cout << "The content of TimeObj1 right after instantiation by Default constructor" << endl;
	PrintSoheilsTime(TimeObj1);
	TimeObj2 = new SoheilsTime(12, 0, 0);
	cout << "The content of TimeObj2 right after instantiation by Default constructor" << endl;
	PrintSoheilsTime(TimeObj2);
	cout << "Attempting to Set TimeObj1 with wrong values" << endl;
	TimeObj1->SetHours(87);
	TimeObj1->SetMinutes(30);
	TimeObj1->SetSeconds(-87);
	cout << "The content of TimeObj1 right after setting the wrong values" << endl;
	PrintSoheilsTime(TimeObj1);
	cout << "------------------------------------------------------------" << endl;
	TrsDate * dateObj1, *dateObj2;
	// Creating a Date Object using Default Constructor
	dateObj1 = new TrsDate();
	cout << "The content of TimeObj1 right after instantiation by Default constructor" << endl;
	dateObj1->print();
	dateObj2 = new TrsDate("monday",1, 1, 1990);
	cout << "The content of TimeObj2 right after instantiation by Default constructor" << endl;
	dateObj2->print();
	cout << "Attempting to Set dateObj1 with wrong values" << endl;
	dateObj1->setDayweek("sausage");
	dateObj1->setDay(31);
	dateObj1->setMonth(13);
	cout << "The content of dateObj1 right after setting the wrong values" << endl;
	dateObj1->print();

	cout << "Demonstrating Transaction Objects" << endl;
	cout << "Creating Transaction Object Using Default Constructor" << endl;
	Transaction *TrObj1, *TrObj2;
	TrObj1 = new Transaction();
	cout << "Printing the newly created Transaction Object using default constructor" << endl;
	PrintTransaction(TrObj1);
	cout << "Attempting to put values in Transaction Object" << endl;
	TrObj1->SetAmount(200);
	TrObj1->SetTrTime(10, 30, 20);
	TrObj1->setTrDate("friday", 4, 11, 2016);
	cout << "Printing the Transaction Object after modifying it's data" << endl;
	PrintTransaction(TrObj1);
}
void PrintSoheilsTime(SoheilsTime *TimeObject)
{
	cout << "Hours: " << TimeObject->GetHours() << endl;
	cout << "Minutes: " << TimeObject->GetMinutes() << endl;
	cout << "Seconds: " << TimeObject->GetSeconds() << endl;
}
void PrintTransaction(Transaction *TrObj)
{
	cout << "Amount: " << TrObj->GetAmount() << endl;
	cout << "Hours: " << TrObj->GetTrTime().GetHours()  << endl;
	cout << "Minutes: " << TrObj->GetTrTime().GetMinutes() << endl;
	cout << "Seconds: " << TrObj->GetTrTime().GetSeconds() << endl;
	cout << "Date: " << TrObj->GetTrDate().toString() << endl;

}


