#pragma once
#include "PointWithInheritance.h"

class  CircleWithInheritance:PointWithInheritance
{
private:
	int Radious;
public:
	CircleWithInheritance();
	CircleWithInheritance(int, int, int);
	void setRadious(int);
	int getRadious();
	void Print();
};