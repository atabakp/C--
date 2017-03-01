#include "Soldier.h"
#include "PlayTime.h"
#include "BirthDate.h"
using namespace System;

ref class Player
{
private:

	String^ name;
	array<Soldier^>^ soldier;
	PlayTime startTime;
	BirthDate ^ DOB;
	void setSoldier(array<Soldier^>^ obj);
public:
	int playerNo;
	int initLoc;
	int baseloc;
	Player();
	
	~Player();
	Player(String^ name, String^color, Int32 playerNo, Int32 initloc);
	void setName(String^ val);
	String^ getName();

	BirthDate^ getDOB();
	void setDOB(BirthDate^ obj);

	Soldier^ getSoldier(int i);

	void setColor(String^ val);
	String^ getColor();
	void SetColorAndPlayerNo(String^ val, Int32 player);
};
