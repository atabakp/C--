#pragma once 
using namespace System;
#include "stdafx.h"
ref class Checking :public Account
{
private:
	String ^ AccType;
	double Balance;
public:
	Checking();
	~Checking();
	String^ GetAccType();
	void SetAccType(String ^);
	double GetBalance();
	void SetBalance(double);
	double CalcInterest();
};












