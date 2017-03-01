#pragma once 
using namespace System;
#include "stdafx.h"
ref class Saving :public Account
{
private:
	String ^ AccType;
	double Balance;
public:
	Saving();
	~Saving();
	String^ GetAccType();
	void SetAccType(String ^);
	double GetBalance();
	void SetBalance(double);
	double CalcInterest();
};












