#pragma once
#include "Services.h"
class Messaging :
	public Services
{
public:
	Messaging();
	~Messaging();

	virtual string ServiceName();
	void send();
	void recieve();
};

