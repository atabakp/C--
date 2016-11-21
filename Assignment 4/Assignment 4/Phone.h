#pragma once
#include "PhoneDate.cpp"
class Phone
{
private:
	int ID;
	char* make;
	char* model;
	double price;
	char* feature;
	PhoneDate soldDate;
	PhoneDate builtDate;
public:
	Phone();
	~Phone();


	int getID();
	void setID(int val) { ID = val; }
	char* getMake() const { return make; }
	void setMake(char* val) { make = val; }
	char* getModel() const { return model; }
	void setModel(char* val) { model = val; }
	double getPrice() const { return price; }
	void setPrice(double val) { price = val; }
	char* getFeature() const { return feature; }
	void setFeature(char* val) { feature = val; }
	PhoneDate getSoldDate() const { return soldDate; }
	void setSoldDate(PhoneDate val) { soldDate = val; }
	PhoneDate getBuiltDate() const { return builtDate; }
	void setBuiltDate(PhoneDate val) { builtDate = val; }
};

