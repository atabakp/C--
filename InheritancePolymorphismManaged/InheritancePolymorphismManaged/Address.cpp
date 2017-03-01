#include "stdafx.h"

using namespace std;
Address::Address()
{
}

void Address::setCountry(String^ value)
{
	this->country = value;
}

System::String^ Address::getCountry()
{
	return this->country;
}

void Address::setProvince(String^ value)
{
	this->province = value;
}

System::String^ Address::getProvince()
{
	return this->province;
}

void Address::setCity(String^ value)
{
	this->city = value;
}

System::String^ Address::getCity()
{
	return this->city;
}

void Address::setStreetName(String^ value)
{
	this->streetName = value;
}

System::String^ Address::getStreetName()
{
	return this->streetName;
}

void Address::setStreetNo(Int32 value)
{
	this->streetNo = value;
}

System::Int32 Address::getStreetNo()
{
	return this->streetNo;
}

void Address::setUnitNo(Int32 val)
{
	this->unitNo = val;
}

System::Int32 Address::getUnitNo()
{
	return this->unitNo;
}

void Address::printASC()
{
	Console::Write(this->getCountry() + ", " + this->getProvince() + ", " + this->getCity() + ", "
		+ this->getStreetName() + ", " + this->getStreetNo() + ", " + this->getUnitNo());
}

void Address::printDES()
{
	Console::Write((this->unitNo + ", " + this->streetName + ", " + this->streetNo + ", " +
		this->city + ", " + this->province + ", " + this->country));
}
