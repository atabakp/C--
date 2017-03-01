#pragma once
#include "SelfFunded.h"
ref class ExtendedPayment :
	public SelfFunded
{
public:
	ExtendedPayment();
	double payment() override;
};

