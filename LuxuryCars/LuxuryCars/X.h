#include "BMW.h"
#include <string>
using namespace std;
#pragma once

class X : public BMW
{
protected:
	string Type;
public:
	X();
	~X();
	void Payment(string);
	string GetType();
	void SetType(string);
};
