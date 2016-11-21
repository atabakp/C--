#include "PointNoInheritance.h"
#include <iostream>
using namespace std;
PointNoInheritance::PointNoInheritance()
{
	x = 0;
	y = 0;
}
PointNoInheritance::PointNoInheritance(int xvar, int yvar)
{
	x = xvar;
	y = yvar;
}
void PointNoInheritance::setx(int xvar)
{
	x = xvar;
}
int PointNoInheritance::getx()
{
	return x;
}

void PointNoInheritance::sety(int yvar)
{
	y = yvar;
}
int PointNoInheritance::gety()
{
	return y;
}
void PointNoInheritance::Print()
{
	cout << "[" << x << "," << y << "]" << endl;
}