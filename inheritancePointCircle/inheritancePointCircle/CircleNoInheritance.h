#pragma once

class CircleNoInheritance
{
private:
	int x;
	int y;
	int Radious;
public:
	CircleNoInheritance();
	CircleNoInheritance(int, int, int);
	void setx(int);
	int getx();
	void sety(int);
	int gety();
	void setRadious(int);
	int getRadious();
	void Print();
};