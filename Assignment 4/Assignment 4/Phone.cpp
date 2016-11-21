#include "stdafx.h"
#include "Phone.h"


Phone::Phone()
{
}


Phone::~Phone()
{
}

int Phone::getID() { 
	return ID;
}
void Phone::setID(int val) { 
	ID = val;
	 }
char* Phone::getMake() const { 
	return make; 
}
void Phone::setMake(char* val) { 
	make = val;
	 }
char* Phone::getModel() const { 
	return model;
	 }
void Phone::setModel(char* val) { 
	model = val; 
}
double Phone::getPrice() const { 
	return price; 
}
void Phone::setPrice(double val) { 
	price = val;
	 }
char* Phone::getFeature() const { 
	return feature; 
}
void Phone::setFeature(char* val) { 
	feature = val; 
}
PhoneDate Phone::getSoldDate() const { 
	return soldDate; 
}
void Phone::setSoldDate(PhoneDate val) { 
	soldDate = val; 
}
PhoneDate Phone::getBuiltDate() const { 
	return builtDate; 
}
void Phone::setBuiltDate(PhoneDate val) { 
	builtDate = val; 
}
