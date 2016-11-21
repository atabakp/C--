#include "CircleWithInheritance.h"
#include <iostream>
using namespace std;
CircleWithInheritance::CircleWithInheritance()
{
	x = 0;
	y = 0;
	Radious = 0;
}
CircleWithInheritance::CircleWithInheritance(int xvar, int yvar, int rvar)
{
	x = xvar;
	y = yvar;
	Radious = rvar;
}
void CircleWithInheritance::setRadious(int rvar)
{
	Radious = rvar;
}
int CircleWithInheritance::getRadious()
{
	return Radious;
}
void CircleWithInheritance::Print()
{
	cout << "[" << x << "," << y << "]" << endl << "Radious:" << Radious << endl;
}