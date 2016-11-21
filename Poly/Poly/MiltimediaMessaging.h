#pragma once
#include "Messaging.h"
class MiltimediaMessaging :
	public Messaging
{
private:
	string MMFilename;
public:
	MiltimediaMessaging();
	~MiltimediaMessaging();

	virtual string ServiceName();
};

