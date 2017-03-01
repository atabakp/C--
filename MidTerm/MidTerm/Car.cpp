#include "Car.h"
#include <iostream>

using namespace std;
Car::Car()
{
}


Car::~Car()
{
}

void Car::setVIN(int val)
{
	this->VIN = val;
}

int Car::getVIN()
{
	return this->VIN;
}

void Car::setModel(string val)
{
	this->model = val;
}

std::string Car::getModel()
{
	return this->model;
}

void Car::setMake(string val)
{
	this->make = val;
}

std::string Car::getMake()
{
	return this->make;
}

void Car::setColor(string val)
{
	this->color = val;
}

std::string Car::getColor()
{
	return this->color;
}

void Car::setYear(int val)
{
	this->year = val;
}

int Car::getYear()
{
	return this->year;
}

void Car::setTechInfo(TechInfo info)
{
	this->techInfo = info;
}

TechInfo Car::getTechInfo()
{
	return this->techInfo;
}

void Car::print()
{
	
	cout << "1-" << this->getVIN() << endl;
	cout << "2-" << this->getMake() << endl;
	cout << "3-" << this->getModel() << endl;
	cout << "4-" << this->getColor() << endl;
	cout << "5-" << this->getYear() << endl;
	
}
