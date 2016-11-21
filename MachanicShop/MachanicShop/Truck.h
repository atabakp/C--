#pragma once
#include "Vehicle.h"

class Truck: public Vehicle {
protected:
	std::string cabSize;
	int horsepower;
	bool hasWinch;
public:
	Truck(int vin, string make, string model, string color, string cab, int power, bool haswinch);
	Truck();
	~Truck();
	void setCabSize(std::string);
	std::string getCabSize();

	void setHorsepower(int);
	int getHorsepower();

	void setHasWinch(bool);
	bool getHasWinch();

};