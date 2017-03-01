#include "stdafx.h"

Saving::Saving()
{
}
Saving::~Saving()
{
}
String ^ Saving::GetAccType()
{
	return AccType;
}
void Saving::SetAccType(String ^ AT)
{
	AccType = AT;
}
double Saving::GetBalance()
{
	return Balance;
}
void Saving::SetBalance(double B)
{
	Balance = B;
}
double  Saving::CalcInterest()
{
	return Balance * .04;
}

