#pragma once
#include <string>
using namespace std;

class Vehicle {
protected:

	int vin;
	string make;
	string model;
	string color;

public:
	Vehicle();
	Vehicle(int vin, string make, string model, string color);
	~Vehicle();
	void setVin(int);
	int getVin();

	void setMake(string);
	string getMake();

	void setModel(string);
	string getModel();

	void setColor(string);
	string getColor();
};
