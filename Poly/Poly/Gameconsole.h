#pragma once
#include "Services.h"
class Gameconsole :
	public Services
{
private:

public:
	Gameconsole();
	~Gameconsole();

	virtual string ServiceName();
	void play();
	void stop();
	void saveGame();
	void loadGame();
};

