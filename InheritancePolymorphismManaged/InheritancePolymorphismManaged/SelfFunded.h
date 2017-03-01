#pragma once
#include "Local.h"
ref class SelfFunded :
	public Local
{
protected:
	String^ payment;
public:
	SelfFunded();
};

