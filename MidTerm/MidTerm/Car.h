#pragma once
#include "TechInfo.h"
#include <string>
using namespace std;
class Car
{
private:
	int VIN;
	string model;
	string make;
	string color;
	int year;
	TechInfo techInfo;



public:
	Car();
	~Car();

	void setVIN(int val);
	int getVIN();

	void setModel(string val);
	string getModel();

	void setMake(string val);
	string getMake();

	void setColor(string val);
	string getColor();

	void setYear(int val);
	int getYear();

	void setTechInfo(TechInfo info);
	TechInfo getTechInfo();

	void print();

};

