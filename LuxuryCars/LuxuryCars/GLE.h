#include "Mercedes.h"
#include <string>
using namespace std;
#pragma once

class GLE : public Mercedes 
{
protected:
	string Type;
public:
	GLE();
	~GLE();
	void Payment(string);
	string GetType();
	void SetType(string);
};
