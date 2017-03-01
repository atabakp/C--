#pragma once
#include "Local.h"
ref class OnLoan :
	public Local
{
	
public:
	OnLoan();
	double payment() override;
};

