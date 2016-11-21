#pragma once
#include "EmailClient.h"
class Yahoo :
	public EmailClient
{
private:
	string POP;
	string SMTP;
	string IMAP;

public:
	virtual string ServiceName();
	Yahoo();
	~Yahoo();
};

