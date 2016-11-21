#pragma once 
class PointNoInheritance
{
private:
	int x;
	int y;
public:
	PointNoInheritance();
	PointNoInheritance(int, int);
	void setx(int);
	int getx();
	void sety(int);
	int gety();
	void Print();
};