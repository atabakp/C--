#pragma once
ref class Board
{
private:
	array<bool>^ isOccupied;
	array<Soldier^>^ soldier;
public:
	Board();
	void newBoard();
	void setSoldier(Soldier ^sol, Int32 location);
	Soldier^ getSoldier(Int32 location);

	void setIsOccupied(bool val, Int32 location);
	bool getIsOccupied(Int32 location);

	void update(array<Player^>^ players);
};
