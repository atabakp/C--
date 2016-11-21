#pragma once
#include "EmailClient.h"
class Gmail :
	public EmailClient
{
private:
	string POP;
	string SMTP;
	string IMAP;
public:
	virtual string ServiceName();
	Gmail();
	~Gmail();
};

