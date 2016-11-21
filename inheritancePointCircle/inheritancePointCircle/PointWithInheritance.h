#pragma once

class PointWithInheritance
{
protected:
	int x;
	int y;
public:
	PointWithInheritance();
	PointWithInheritance(int, int);
	void setx(int);
	int getx();
	void sety(int);
	int gety();
	void Print();
};