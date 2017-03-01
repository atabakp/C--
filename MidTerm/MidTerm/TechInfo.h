#pragma once
class TechInfo
{
private:
	int noOfCylinders;
	int horsepower;
	int volume;
public:
	TechInfo();
	~TechInfo();

	void setNoOfCylinders(int val);
	int getNoOfCylinders();

	void setHorsepower(int val);
	int getHorsepower();

	void setVolume(int val);
	int getVolume();


	void print();

};

