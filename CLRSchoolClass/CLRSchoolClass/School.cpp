#include "stdafx.h"

using namespace System;

School::School()
{

}
School::~School()
{

}
void School::SetSchoolName(String ^ Var)
{
	SchoolName = Var;
}
String ^ School::GetSchoolName()
{
	return SchoolName ;
}
void School::SetSchoolNumber(Int32 Var)
{
	SchoolNumber = Var;
}
Int32 School::GetSchoolNumber()
{
	return SchoolNumber;
}



