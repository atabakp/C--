#pragma once
ref class Home
{
private:
	array<bool>^ isOccupied;
	array<Soldier^>^ soldier;
public:
	Home();
	void newHome();
	void setSoldier(Soldier ^sol, Int32 location);
	Soldier^ getSoldier(Int32 location);

	void setIsOccupied(bool val, Int32 location);
	bool getIsOccupied(Int32 location);

	void update(Player^ player);
};

