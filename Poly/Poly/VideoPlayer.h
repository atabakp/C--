#pragma once
#include "Player.h"
class VideoPlayer: public Player
{
private:
	string videoFile;
public:
	VideoPlayer();
	~VideoPlayer();

	virtual string ServiceName();

};

