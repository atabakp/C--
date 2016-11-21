#include "Transaction.h"
#include "TrsDate.h"

bool Transaction::CheckAmount()
{
	if (this->CAmount <= 0) {
		return false;
	}
	else {
		return true;
	}
}

Transaction::Transaction()
{
	CAmount = 0;
	this->CTrTime.SetHours(0);
	this->CTrTime.SetMinutes(0);
	this->CTrTime.SetSeconds(0);
// If CTrTime was a pointer and not a real object
// SoheilsTime CTrTime * = new SoheilsTime();
// then in Destructor I should have had 
//  Delete (CTrTime);
}
Transaction::Transaction(int a, SoheilsTime t,TrsDate date)
{
	CAmount = a;
	CTrTime = t;
	CTrDate = date;

}
Transaction::Transaction(int a, int h, int m, int s, string weekday, int day,int month, int year)
{
	CAmount = a;
	this->CTrTime.SetHours(h);
	this->CTrTime.SetMinutes(m);
	this->CTrTime.SetSeconds(s);
	this->CTrDate.setDayweek(weekday);
	this->CTrDate.setDay(day);
	this->CTrDate.setMonth(month);
	this->CTrDate.setYear(year);
}
Transaction::~Transaction()
{
}
int Transaction::GetAmount()
{
	return CAmount;
}
void Transaction::SetAmount(int a)
{
	if (a > 0)
	{
		CAmount = a;
	}
	else
	{
		CAmount = 0;
	}
}
SoheilsTime Transaction::GetTrTime()
{
	return CTrTime;
}
void Transaction::SetTrTime(SoheilsTime t)
{
	CTrTime.SetHours(t.GetHours());
	CTrTime.SetMinutes(t.GetMinutes());
	CTrTime.SetSeconds(t.GetSeconds());
}
void Transaction::SetTrTime(int h, int m, int s)
{
	CTrTime.SetHours(h);
	CTrTime.SetMinutes(m);
	CTrTime.SetSeconds(s);
}

TrsDate Transaction::GetTrDate()
{
	return CTrDate;

}

void Transaction::setTrDate(TrsDate date)
{
	this->CTrDate = date;
}

void Transaction::setTrDate(string weekday, int day, int month, int year)
{
	this->CTrDate.setDayweek(weekday);
	this->CTrDate.setDay(day);
	this->CTrDate.setMonth(month);
	this->CTrDate.setYear(year);
}
