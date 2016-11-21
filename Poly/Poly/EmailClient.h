#pragma once
#include "Services.h"
class EmailClient :
	public Services
{
public:
	EmailClient();
	~EmailClient();

	virtual string ServiceName();
	void send();
	void recieve();
	void forward();
	void replay();
};

