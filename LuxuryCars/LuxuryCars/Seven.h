#include "BMW.h"
#include <string>
using namespace std;
#pragma once

class Seven : public BMW
{
protected:
	string Type;
public:
	Seven();
	~Seven();
	void Payment(string);
	string GetType();
	void SetType(string);
};