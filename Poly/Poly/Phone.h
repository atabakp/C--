#pragma once
#include "Services.h"
class Phone :
public Services
{

	int volume;
public:
	Phone();
	~Phone();
	void PlaceCall(int number);
	void ReceiveCall();
	void setVoicevolume(int val);
	void Declinecall();
	virtual string ServiceName();

};

