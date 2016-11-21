#include "HDtruck.h"

HDTruck::HDTruck(int vin, std::string make, std::string model, std::string color, std::string cab, int power, bool haswinch, double tonnage, int noOfWheels)
{
	Truck(vin, make, model, color, cab, power, haswinch);
	this->tonnage = tonnage;
	this->noOfWheels = noOfWheels;
}
HDTruck::HDTruck()
{

}

HDTruck::~HDTruck()
{

}

void HDTruck::setTonnage(double val)
{
	this->tonnage = val;
}

double HDTruck::getTonnage()
{
	return this->tonnage;
}

void HDTruck::setNoOfWheels(int val)
{
	this->noOfWheels = val;
}

int HDTruck::getNoOfWheels()
{
	return this->noOfWheels;
}

