#include "Vehicle.h"
#include <string>
using namespace std ;

Vehicle::Vehicle()
{


}

Vehicle::Vehicle(int vin, string make, string model, string color)
{
	this->setVin(vin);
	this->setMake(make);
	this->setModel(model);
	this->setColor(color);
}

Vehicle::~Vehicle()
{

}

void Vehicle::setVin(int val)
{
	this->vin = val;
}

int Vehicle::getVin()
{
	return this->vin;
}

void Vehicle::setMake(string val)
{
	this->make = val;
}

std::string Vehicle::getMake()
{
	return this->make;
}

void Vehicle::setModel(string val)
{
	this->model = val;
}

std::string Vehicle::getModel()
{
	return this->model;
}

void Vehicle::setColor(string val)
{
	this->color = val;
}

std::string Vehicle::getColor()
{
	return this->color;
}

