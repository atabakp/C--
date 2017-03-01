#include "stdafx.h"
#include "Home.h"

Home::Home()
{
	array<Soldier ^> ^sold = gcnew array<Soldier ^>(4);
	array<bool>^ occupation = gcnew array<bool>(4);
	this->soldier = sold;
	this->isOccupied = occupation;
	for (int i = 0; i < 4; i++) {
		sold[i] = gcnew Soldier();
		this->setSoldier(sold[i], i);
		this->setIsOccupied(false, i);
	}
}

void Home::newHome()
{
	array<Soldier ^> ^sold = gcnew array<Soldier ^>(4);
	array<bool>^ occupation = gcnew array<bool>(4);
	this->soldier = sold;
	this->isOccupied = occupation;
	for (int i = 0; i < 4; i++) {
		sold[i] = gcnew Soldier();
		this->setSoldier(sold[i], i);
		this->setIsOccupied(false, i);
	}
}

void Home::setSoldier(Soldier ^sol, Int32 location)
{
	
		this->soldier[location] = sol;
		this->isOccupied[location] = true;
	
}

Soldier^ Home::getSoldier(Int32 location)
{
	return this->soldier[location];
}

void Home::setIsOccupied(bool val, Int32 location)
{
	this->isOccupied[location] = val;
}

bool Home::getIsOccupied(Int32 location)
{
	if (location >= 4)
		location = location - 4;
	return this->isOccupied[location];
}

void Home::update(Player^ player)
{
	this->newHome();

		for (int i = 0; i < 4; i++)
			if (player->getSoldier(i)->isInHome)
				this->setSoldier(player->getSoldier(i), player->getSoldier(i)->getLocation());
}