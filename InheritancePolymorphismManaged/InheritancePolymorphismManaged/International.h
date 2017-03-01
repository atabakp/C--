#pragma once
#include "Student.h"
ref class International :
	public Student
{
	String^ proofOfEnglish;
	String^ IDType;
	String^ IDNumber;
	Int32 registrationFee;
	String^ programName;
	Double programTuition;
	MyDate StartDate;
public:
	International();
};

