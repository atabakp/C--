#pragma once
#include "Services.h"
class Player :
	public Services
{
public:
	Player();
	~Player();
	virtual string ServiceName();
	void play();
	void stopPlaying();
};

