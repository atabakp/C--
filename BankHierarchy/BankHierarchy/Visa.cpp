#include "stdafx.h"

Visa::Visa()
{
}
Visa::~Visa()
{
}
String ^ Visa::GetAccType()
{
	return AccType;
}
void Visa::SetAccType(String ^ AT)
{
	AccType = AT;
}
double Visa::GetBalance()
{
	return Balance;
}
void Visa::SetBalance(double B)
{
	Balance = B;
}
double  Visa::CalcInterest()
{
	return Balance * .20;
}

