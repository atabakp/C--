#pragma once
using namespace System;
ref class School
{
public:
	School();
	~School();
	String ^GetSchoolName();
	void SetSchoolName(String ^);
	Int32  GetSchoolNumber();
	void SetSchoolNumber(Int32);
private: 
	String ^SchoolName;
	Int32 SchoolNumber;

};
