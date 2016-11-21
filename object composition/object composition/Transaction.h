#include "SoheilsTime.h"
#include "TrsDate.h"
#pragma once 
class Transaction
{
private:
	 double CAmount;
	SoheilsTime CTrTime;
	TrsDate CTrDate;
	bool CheckAmount();
public:
	Transaction();
	Transaction(int, SoheilsTime,TrsDate);
	Transaction(int, int, int, int, string, int ,int ,int);
	~Transaction();
	int GetAmount();
	void SetAmount(int);
	SoheilsTime GetTrTime();
	void SetTrTime(SoheilsTime);
	void SetTrTime(int, int, int);
	TrsDate GetTrDate();
	void setTrDate(TrsDate);
	void setTrDate(string, int, int, int);

};