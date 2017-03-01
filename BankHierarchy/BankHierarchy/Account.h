#pragma once 
using namespace System;
#include "stdafx.h"
ref class Account abstract :public Bank  
{
protected:
	Int32 AccNo;
public:
	Int32 GetAccNo();
	virtual void SetAccNo(Int32) ;
};