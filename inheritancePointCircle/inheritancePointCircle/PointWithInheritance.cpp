#include "PointWithInheritance.h"
#include <iostream>
using namespace std;
PointWithInheritance::PointWithInheritance()
{
	x = 0;
	y = 0;
}
PointWithInheritance::PointWithInheritance(int xvar, int yvar)
{
	x = xvar;
	y = yvar;
}
void PointWithInheritance::setx(int xvar)
{
	x = xvar;
}
int PointWithInheritance::getx()
{
	return x;
}

void PointWithInheritance::sety(int yvar)
{
	y = yvar;
}
int PointWithInheritance::gety()
{
	return y;
}
void PointWithInheritance::Print()
{
	cout << "[" << x << "," << y << "]" << endl;
}