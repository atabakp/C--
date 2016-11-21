#include "X.h"
#include <iostream>
using namespace std;

X::X()
{
	Type = "";
}
X::~X()
{

}
void X::SetType(string t)
{
	Type = t;
}
string X::GetType()
{
	return Type;
}
void X::Payment(string PT)
{

	if (PT == "Purchase")
	{
		cout << "Purchase Price: " << MSRP << endl;
	}
	if (PT == "Lease")
	{
		double price;
		price = (((InterestRate / 100.0) * MSRP) + MSRP) / 36.0;
		cout << "Monthly Lease Price: " << price << endl;
	}
	if (PT == "Finance")
	{
		double price;
		price = (((InterestRate / 100.0) * MSRP) + MSRP) / 48.0;
		cout << "Monthly Finance Price: " << price << endl;
	}
}