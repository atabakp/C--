#include "stdafx.h"
#include "Board.h"

Board::Board()
{
	array<Soldier ^> ^sold = gcnew array<Soldier ^>(40);
	array<bool>^ occupation = gcnew array<bool>(40);
	this->soldier = sold;
	this->isOccupied = occupation;
	for (int i = 0; i < 40; i++) {
		sold[i] = gcnew Soldier();
		this->setSoldier(sold[i], i);
		this->setIsOccupied(false, i);
	}
}

void Board::newBoard()
{
	array<Soldier ^> ^sold = gcnew array<Soldier ^>(40);
	array<bool>^ occupation = gcnew array<bool>(40);
	this->soldier = sold;
	this->isOccupied = occupation;
	for (int i = 0; i < 40; i++) {
		sold[i] = gcnew Soldier();
		this->setSoldier(sold[i], i);
		this->setIsOccupied(false, i);
	}
}

void Board::setSoldier(Soldier ^sol, Int32 location)
{
	this->soldier[location] = sol;
	this->isOccupied[location] = true;
}

Soldier^ Board::getSoldier(Int32 location)
{
	return this->soldier[location];
}

void Board::setIsOccupied(bool val, Int32 location)
{
	this->isOccupied[location] = val;
}

bool Board::getIsOccupied(Int32 location)
{
	if (location >= 40)
		location = location - 40;
	return this->isOccupied[location];
}

void Board::update(array<Player^>^ players)
{
	this->newBoard();

	for (int j = 0; j < 4; j++)
		for (int i = 0; i < 4; i++)
			if (players[j]->getSoldier(i)->getIsOnBoard())
				this->setSoldier(players[j]->getSoldier(i), players[j]->getSoldier(i)->getLocation());
}