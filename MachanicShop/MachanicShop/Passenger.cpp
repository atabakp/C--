#include "Passenger.h"
Passenger::Passenger(int vin, string make, string model, string color, string type, int noOfPassengers)
	
{
	Vehicle(vin, make, model, color);
	this->type = type;
	this->noOfPassengers = noOfPassengers;
}
Passenger::Passenger()
{

}

Passenger::~Passenger()
{

}

void Passenger::setType(string val)
{
	this->type = val;
}

std::string Passenger::getType()
{
	return this->type;
}

void Passenger::setNoOfPassengers(int val)
{
	this->noOfPassengers = val;
}

int Passenger::getNoOdPassengers()
{
	return this->noOfPassengers;
}

