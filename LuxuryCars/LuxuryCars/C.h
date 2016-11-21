#include "Mercedes.h"
#include <string>
using namespace std;
#pragma once

class C : public Mercedes
{
protected:
	string Type;
public:
	C();
	~C();
	void Payment(string);
	string GetType();
	void SetType(string);
};