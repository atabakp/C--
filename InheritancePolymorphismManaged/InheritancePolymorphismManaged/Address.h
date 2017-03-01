#pragma once
ref class Address
{
private:
	String^ country;
	String^ province;
	String^ city;
	Int32 streetNo;
	String^ streetName;  
	Int32 unitNo;
	
public:
	Address();

	void setCountry(String^ value);
	String^ getCountry();

	void setProvince(String^ value);
	String^ getProvince();

	void setCity(String^ value);
	String^ getCity();

	void setStreetName(String^ value);
	String^ getStreetName();

	void setStreetNo(Int32 value);
	Int32 getStreetNo();

	void setUnitNo(Int32 val);
	Int32 getUnitNo();

	void printASC();
	void printDES();
};

