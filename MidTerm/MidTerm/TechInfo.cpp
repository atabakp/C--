#include "TechInfo.h"
#include <iostream>
using namespace std;


TechInfo::TechInfo()
{
}


TechInfo::~TechInfo()
{
}

void TechInfo::setNoOfCylinders(int val)
{
	this->noOfCylinders = val;
}

int TechInfo::getNoOfCylinders()
{
	return this->noOfCylinders;
}

void TechInfo::setHorsepower(int val)
{
	this->noOfCylinders = val;
}

int TechInfo::getHorsepower()
{
	return this->noOfCylinders;
}

void TechInfo::setVolume(int val)
{
	this->volume = val;
}

int TechInfo::getVolume()
{
	return this->volume;
}

void TechInfo::print()
{
	
	cout << "1-" << this->getNoOfCylinders() << endl;
	cout << "2-" << this->getHorsepower() << endl;
	cout << "3-" << this->getVolume() << endl;
}
