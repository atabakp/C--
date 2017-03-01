#include "stdafx.h"
using namespace System;
void Bank::SetBankName(String ^BN)
{
	BankName = BN;
}
String ^ Bank::GetBankName()
{
	return BankName;
}