#include "CircleNoInheritance.h"
#include <iostream>
using namespace std;
CircleNoInheritance::CircleNoInheritance()
{
	x = 0;
	y = 0;
}
CircleNoInheritance::CircleNoInheritance(int xvar, int yvar, int rvar)
{
	x = xvar;
	y = yvar;
	Radious = rvar;
}
void CircleNoInheritance::setx(int xvar)
{
	x = xvar;
}
int CircleNoInheritance::getx()
{
	return x;
}

void CircleNoInheritance::sety(int yvar)
{
	y = yvar;
}
int CircleNoInheritance::gety()
{
	return y;
}

void CircleNoInheritance::setRadious(int rvar)
{
	Radious = rvar;
}
int CircleNoInheritance::getRadious()
{
	return Radious;
}
void CircleNoInheritance::Print()
{
	cout << "[" << x << "," << y << "]" << endl << "Radious:" << Radious << endl;
}