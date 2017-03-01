#include "stdafx.h"

Checking::Checking()
{
}
Checking::~Checking()
{
}
String ^ Checking::GetAccType()
{
	return AccType;
}
void Checking::SetAccType(String ^ AT)
{
	AccType = AT;
}
double Checking::GetBalance()
{
	return Balance;
}
void Checking::SetBalance(double B)
{
	Balance = B;
}
double  Checking::CalcInterest()
{
	return Balance * .03;
}

