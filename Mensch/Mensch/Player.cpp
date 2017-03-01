#include "stdafx.h"

using namespace System;
Player::Player()
{
	array<Soldier ^> ^soldj = gcnew array<Soldier ^>(4);
	this->setSoldier(soldj);
	for (int i = 0; i < 4; i++)
		soldj[i] = gcnew Soldier();
}

Player::Player(String^ name, String^color, Int32 playerNo, Int32 initializeloc)
{
	array<Soldier ^> ^soldj = gcnew array<Soldier ^>(4);
	this->setSoldier(soldj);
	for (int i = 0; i < 4; i++) {
		soldj[i] = gcnew Soldier(initializeloc);
		
	}
	this->SetColorAndPlayerNo(color, playerNo);
	this->setName(name);
	this->initLoc = initializeloc;
	this->baseloc = initLoc - 1;
}

Player::~Player()
{
}

void Player::setName(String^ val)
{
	this->name = val;
}

System::String^ Player::getName()
{
	return this->name;
}

BirthDate^ Player::getDOB()
{
	return this->DOB;
}

void Player::setDOB(BirthDate^ obj)
{
	this->DOB = obj;
}

Soldier^ Player::getSoldier(int i)
{
	return this->soldier[i];
}

void Player::setSoldier(array<Soldier^>^ obj)
{
	this->soldier = obj;
}

void Player::setColor(String^ val)
{
	this->soldier[0]->setColor(val);
	this->soldier[1]->setColor(val);
	this->soldier[2]->setColor(val);
	this->soldier[3]->setColor(val);
}

System::String^ Player::getColor()
{
	return this->soldier[0]->getColor();
}

void Player::SetColorAndPlayerNo(String^ val, Int32 player)
{
	this->playerNo = player;
	this->soldier[0]->setColor(val);
	this->soldier[0]->setPlayerNo(player);
	this->soldier[1]->setColor(val);
	this->soldier[1]->setPlayerNo(player);
	this->soldier[2]->setColor(val);
	this->soldier[2]->setPlayerNo(player);
	this->soldier[3]->setColor(val);
	this->soldier[3]->setPlayerNo(player);
}