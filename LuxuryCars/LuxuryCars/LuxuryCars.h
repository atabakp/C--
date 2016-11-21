#pragma once 
#include <string>
using namespace std;
class LuxuryCars
{
protected:
	int vin;
	string Make;
	string Model;
	string Color;
	int Year;
	int MSRP;
	int InterestRate;
	string PaymentMethod;
public:
	virtual void Payment(string) = 0;
	virtual void SetVin(int);
	virtual int GetVin();
	virtual void SetMake(string);
	virtual string GetMake();
	virtual void SetModel(string);
	virtual string GetModel();
	virtual void SetColor(string);
	virtual string GetColor();
	virtual void SetYear(int);
	virtual int GetYear();
	virtual void SetMSRP(int);
	virtual int GetMSRP();
	virtual void SetInterestRate(int);
	virtual int GetInterestRate();
	virtual void SetPaymentMethod(string);
	virtual string GetPaymentMethod();
};