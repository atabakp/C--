#pragma once
using namespace System;
ref class Soldier

{
private:
	String ^color;
	Int32 location;
	bool isOnBoard;
	Int32 playerNo;
	
public:
	int initLoc;
	int baseloc = initLoc -1;
	bool isInHome;
	Soldier();
	Soldier(Int32 initLoc);

	void setColor(String ^val);
	String^ getColor();

	void setLocation(Int32 val);
	Int32 getLocation();

	Soldier^ operator+(Int32 i);
	Soldier% operator+=(Int32 i);
	void setIsOnBoard(bool val);
	bool getIsOnBoard();

	void setPlayerNo(Int32 val);
	Int32 getPlayerNo();
};
