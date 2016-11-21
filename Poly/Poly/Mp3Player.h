#pragma once
#include "Player.h"
class Mp3Player :
	public Player
{
private:
	string MP3File;
public:
	Mp3Player();
	~Mp3Player();
	virtual string ServiceName();
};

