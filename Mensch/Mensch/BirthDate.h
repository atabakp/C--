#pragma once
ref class BirthDate
{
	Int32 year;
	Int32 month;
	Int32 day;
public:
	BirthDate();
	~BirthDate();

	Int32 getYear();
	void setYear(Int32 value);

	Int32 getMonth();
	void setMonth(Int32 value);

	Int32 getDay();
	void setDay(Int32 value);

	BirthDate^ operator++();
	BirthDate^ operator++(Int32);
};
