#pragma once
#include "Services.h"
class WebBrowser :
	public Services
{
private:
	string URL;
public:
	WebBrowser();
	~WebBrowser();

	virtual string ServiceName();
	void go(string URL);
	void cache();
	void openNewTab();
};

