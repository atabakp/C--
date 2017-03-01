#pragma once 
using namespace System;
#include "stdafx.h"
ref class Visa :public Account
{
private:
	String ^ AccType;
	double Balance;
public:
	Visa();
	~Visa();
	String^ GetAccType();
	void SetAccType(String ^);
	double GetBalance();
	void SetBalance(double);
	double CalcInterest();
};












