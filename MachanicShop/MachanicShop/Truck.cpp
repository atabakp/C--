
#include "Truck.h"
#include <string>
Truck::Truck()
{

}



Truck::Truck(int vin, string make, string model, string color, string cab, int power, bool haswinch)
{
	Vehicle::Vehicle(vin, make, model,color);
	this->cabSize = cab;
	this->horsepower = power;
	this->hasWinch = haswinch;
}

Truck::~Truck()
{

}

void Truck::setCabSize(string val)
{
	this->cabSize = val;
}

std::string Truck::getCabSize()
{
	return this->cabSize;
}

void Truck::setHorsepower(int val)
{
	this->horsepower = val;
}

int Truck::getHorsepower()
{
	return horsepower;
}

void Truck::setHasWinch(bool val)
{
	this->hasWinch = val;
}

bool Truck::getHasWinch()
{
	return hasWinch;
}

