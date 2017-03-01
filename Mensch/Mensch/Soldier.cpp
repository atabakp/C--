#include "stdafx.h"

Soldier::Soldier()
{
	this->isInHome = false;
	this->isOnBoard = false;
	this->location = -1;
}
Soldier::Soldier(Int32 initloc)
{
	this->initLoc = initloc;
	this->baseloc = initloc - 1;
	this->isInHome = false;
	this->isOnBoard = false;
	this->location = -1;
}

void Soldier::setColor(String ^val)
{
	this->color = val;
}

System::String^ Soldier::getColor()
{
	return this->color;
}

void Soldier::setLocation(Int32 val)
{
	if (val >= 40) // board has 40 place
		val = val - 40;
	this->location = val;
}

System::Int32 Soldier::getLocation()
{
	return this->location;
}

Soldier^ Soldier::operator+(Int32 i)
{
	this->location += i;
	if (this->location >= 40)
		this->location = this->location - 40;
	return this;
}
Soldier% Soldier::operator+=(Int32 i)
{
	this->location += i;
	return *this;
}

void Soldier::setIsOnBoard(bool val)
{
	this->isOnBoard = val;
}

bool Soldier::getIsOnBoard()
{
	return this->isOnBoard;
}

void Soldier::setPlayerNo(Int32 val)
{
	this->playerNo = val;
}

System::Int32 Soldier::getPlayerNo()
{
	return this->playerNo;
}