#include "GLE.h"
#include <iostream>
using namespace std;

GLE::GLE()
{
	Type = "";
}
GLE::~GLE()
{
	
}
void GLE::SetType(string t)
{
	Type = t;
}
string GLE::GetType()
{
	return Type;
}
void GLE::Payment(string PT)
{

	if (PT == "Purchase")
	{
		cout << "Purchase Price: " << MSRP << endl;
	}
	if (PT == "Lease")
	{
		double price;
		price = (((InterestRate/100.0) * MSRP ) + MSRP)/ 36.0;
		cout << "Monthly Lease Price: " << price << endl;
	}
	if (PT == "Finance")
	{
		double price;
		price = (((InterestRate/100.0) * MSRP) + MSRP) / 48.0;
		cout << "Monthly Finance Price: " << price << endl;
	}
}