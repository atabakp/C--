#pragma once
#include "Truck.h"
class HDTruck:public Truck {
private:
	double tonnage;
	int noOfWheels;

public:
	HDTruck(int vin, string make, string model, string color, string cab, int power, bool haswinch, double tonnage,int noOfWheels);
	
	HDTruck();
	~HDTruck();

	void setTonnage(double val);
	double getTonnage();

	void setNoOfWheels(int val);
	int getNoOfWheels();
};