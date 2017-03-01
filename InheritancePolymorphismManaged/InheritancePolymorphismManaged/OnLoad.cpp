#include "stdafx.h"
#include "OnLoan.h"


OnLoan::OnLoan()
{
}

double OnLoan::payment()
{
	return registerationFee + (programTuition / 2);
}
