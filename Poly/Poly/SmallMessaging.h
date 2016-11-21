#pragma once
#include "Messaging.h"
class SmallMessaging :
	public Messaging
{
private:
	string text;
public:
	SmallMessaging();
	~SmallMessaging();

	virtual string ServiceName();
};

