#include "C.h"
#include <iostream>
using namespace std;

C::C()
{
	Type = "";
}
C::~C()
{

}
void C::SetType(string t)
{
	Type = t;
}
string C::GetType()
{
	return Type;
}
void C::Payment(string PT)
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