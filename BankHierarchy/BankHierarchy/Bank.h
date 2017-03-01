#pragma once 
using namespace System;
ref class Bank abstract 
{
protected: 
	String ^BankName;
public:
	void SetBankName(String ^);
	String ^GetBankName();
};