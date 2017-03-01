// InheritancePolymorphismManaged.cpp : main project file.

#include "stdafx.h"


using namespace System;

int main(array<System::String ^> ^args)
{
	array<Student^>^ studentArr = gcnew array<Student ^>(10);
	studentArr[0] = gcnew Local();
	studentArr[1] = gcnew OnLoan();
	studentArr[2] = gcnew SelfFunded();
	studentArr[3] = gcnew ExtendedPayment();
	studentArr[4] = gcnew Quarterly();
	studentArr[5] = gcnew Monthly();
	studentArr[6] = gcnew International();
	
    return 0;
}
