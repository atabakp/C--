// BankHierarchy.cpp : main project file.

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	Visa ^VisaObj = gcnew Visa();
	VisaObj->SetAccNo(451400);
	VisaObj->SetAccType("Visa");
	VisaObj->SetBankName("RoyalBank");
	VisaObj->SetBalance(1212.67);
	Console::WriteLine(L"Visa Object:");
	Console::Write(L"Bank Name: ");
	Console::WriteLine(VisaObj->GetBankName());
	Console::Write(L"Account Number: ");
	Console::WriteLine(VisaObj->GetAccNo());
	Console::Write(L"Balance: ");
	Console::WriteLine(VisaObj->GetBalance());
	Console::Write(L"Interest: ");
	Console::WriteLine(VisaObj->CalcInterest());
	Checking ^CheckingObj = gcnew Checking();
	CheckingObj->SetAccNo(431201);
	CheckingObj->SetAccType("Checking ");
	CheckingObj->SetBankName("CIBC");
	CheckingObj->SetBalance(10000.67);
	Console::WriteLine(L"Checking Object:");
	Console::Write(L"Bank Name: ");
	Console::WriteLine(CheckingObj->GetBankName());
	Console::Write(L"Account Number: ");
	Console::WriteLine(CheckingObj->GetAccNo());
	Console::Write(L"Balance: ");
	Console::WriteLine(CheckingObj->GetBalance());
	Console::Write(L"Interest: ");
	Console::WriteLine(CheckingObj->CalcInterest());
	Saving ^SavingObj = gcnew Saving();
	SavingObj->SetAccNo(543322);
	SavingObj->SetAccType("Saving ");
	SavingObj->SetBankName("TD");
	SavingObj->SetBalance(20.67);
	Console::WriteLine(L"Saving Object:");
	Console::Write(L"Bank Name: ");
	Console::WriteLine(SavingObj->GetBankName());
	Console::Write(L"Account Number: ");
	Console::WriteLine(SavingObj->GetAccNo());
	Console::Write(L"Balance: ");
	Console::WriteLine(SavingObj->GetBalance());
	Console::Write(L"Interest: ");
	Console::WriteLine(SavingObj->CalcInterest());
	Console::WriteLine("Showing Dynamic Binding");
	array<Bank ^> ^BankObjs = gcnew array <Bank^> (3);
	BankObjs[0] = VisaObj;
	BankObjs[1] = CheckingObj;
	BankObjs[2] = SavingObj;
	for (int i = 0; i < 3; i++)
	{
		Console::WriteLine( BankObjs[i]->GetBankName());
	}

	array<Account ^> ^AccObjs = gcnew array <Account ^>(3);
	AccObjs[0] = VisaObj;
	AccObjs[1] = CheckingObj;
	AccObjs[2] = SavingObj;
	for (int i = 0; i < 3; i++)
	{
		Console::WriteLine(AccObjs[i]->GetType());
	}



  
    return 0;
}
