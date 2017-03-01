// CLRSchoolClass.cpp : main project file.

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{

    Console::WriteLine(L"Hello World");
	Console::Write("Demonstrating My School Class ");
	Console::WriteLine("in Action");
	School ^ITD = gcnew School() ;
	ITD->SetSchoolName("ITD Canada");
	ITD->SetSchoolNumber(2572);
	Console::Write("The School Name is: ");
	Console::WriteLine(ITD->GetSchoolName());
	Console::Write("The School Number is: ");
	Console::WriteLine(ITD->GetSchoolNumber());
    return 0;
}
