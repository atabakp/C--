#pragma once
ref class Phone
{

	Int32 countryCode;
	Int32 areaCode;
	Int32 line;
	Int32 Ext;
	Int32 internalExt;

public:
	Phone();

	void print();
	void printDot();
};

