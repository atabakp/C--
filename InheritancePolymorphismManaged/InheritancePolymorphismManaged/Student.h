#pragma once
#include "stdafx.h"
ref class Student abstract
{
protected:
	String^ Name;
	String^ Surname;
	String^ email;
	Phone phoneNumber;
	Phone cellNumber;
	MyDate birth;
	Address address;
	
public:
	Student();
	virtual double payment();
};

