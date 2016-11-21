#include "PointNoInheritance.h"
#include "CircleNoInheritance.h"
#include "CircleWithInheritance.h"
#include <iostream>
using namespace std;


void main()
{
	cout << "Presentation of a point class" << endl;
	cout << "Creating a point object" << endl;
	PointNoInheritance aPoint(5, 10);
	aPoint.Print();
	cout << "Presentation of a Circle class without using inheritance" << endl;
	cout << "Creating a Circle object" << endl;
	CircleNoInheritance aCircleNI(10, 10, 10);
	aCircleNI.Print();
	cout << "Presentation of a Circle class using inheritance" << endl;
	cout << "Creating a Circle object" << endl;
	cout << "As a side effect a point object is also going to be created" << endl;
	CircleWithInheritance anInheritedCircle(1, 1, 1);
	anInheritedCircle.Print();

}