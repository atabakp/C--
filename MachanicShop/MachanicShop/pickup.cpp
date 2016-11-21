#include "Pickup.h"
Pickup::Pickup(int vin, std::string make, std::string model, std::string color, std::string cab, int power, bool haswinch, string usage, int lenght)
{
	Truck(vin, make, model, color, cab, power, haswinch);
	this->usage = usage;
	this->lenght = lenght;
}
Pickup::Pickup()
{

}

Pickup::~Pickup()
{

}

void Pickup::setUsage(string val)
{
	this->usage = val;
}

std::string Pickup::getUsage()
{
	return usage;
}

void Pickup::setLenght(int val)
{
	this->lenght = val;
}

int Pickup::getLenght()
{
	return this->lenght;
}

