#pragma once
#include "Truck.h"
#include <string>
class Pickup :public Truck {
private:
	string usage;
	int lenght;

public:
	Pickup(int vin, std::string make, std::string model, std::string color, std::string cab, int power, bool haswinch, string usage,int lenght);
	Pickup();
	~Pickup();
	void setUsage(string val);
	string getUsage();

	void setLenght(int val);
	int getLenght();



};