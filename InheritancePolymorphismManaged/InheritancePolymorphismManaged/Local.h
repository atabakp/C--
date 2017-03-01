#pragma once
#include "Student.h"

ref class Local :
	public Student
{
protected:
	String^ proofOfEnglish;
	String^ IDType;
	String^ IDNumber;
	Int32 registerationFee;
	String^ programName;
	double programTuition;
	MyDate startDate;
public:
	Local();
};

