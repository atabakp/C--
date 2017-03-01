// Mensch.cpp : main project file.

#include "stdafx.h"
#include <windows.h> 
using namespace System;


void printBoard(array<Player^> ^players, Board^ board, array<Home^>^ home);
void play(Player ^player, Die^ die, Board^ board, Home^ home);
bool bringNewSoldier(Player^ player, Int32 newsol, Board^ board);
int isCellEmpty(Board^ board, int newloc, Player^ player);
void writeToFile(Board^ board);


int main(array<System::String ^> ^args)
{
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 150);
	Board ^board = gcnew Board();
	array<Home^>^ home = gcnew array<Home^>(4);
	home[0] = gcnew Home();
	home[1] = gcnew Home();
	home[2] = gcnew Home();
	home[3] = gcnew Home();

	array<Player ^> ^players = gcnew array <Player^>(4);

	players[0] = gcnew Player("player 1", "Yellow", 1, 0);
	players[1] = gcnew Player("player 2", "Red", 2, 10);
	players[2] = gcnew Player("player 3", "Blue", 3, 20);
	players[3] = gcnew Player("player 4", "Green", 4, 30);

	//position of the player 1's first soldier to start the game
	//set 0 as the base of the first player, 10 for 2nd and so on...
	players[1]->getSoldier(0)->setIsOnBoard(true);
	for (int i = 0; i < 4; i++)
	{	// set on the board
		board->setSoldier(players[i]->getSoldier(0), players[i]->initLoc);
		board->setIsOccupied(true, players[i]->initLoc);
		players[i]->getSoldier(0)->setLocation(players[i]->initLoc);
		players[i]->getSoldier(0)->setIsOnBoard(true);
	}

	Die ^die = gcnew Die;
	int face = 0;
	int startingPlayer = -1;
	while (face != 6) // toss the die till shows 6
	{
		face = die->roll();
		if (startingPlayer >= 3)
			startingPlayer = -1;
		startingPlayer++;
	}// startingPlayer player will start the game

	while (true) {
		if (startingPlayer > 3)
			startingPlayer = startingPlayer - 4;

		printBoard(players, board, home);
		play(players[startingPlayer], die, board, home[startingPlayer]);

		startingPlayer++;
	}



	return 0;
}

void printBoard(array<Player^> ^players, Board^ board, array<Home^>^ home) {
	board->update(players);
	home[0]->update(players[0]);
	home[1]->update(players[1]);
	home[2]->update(players[2]);
	home[3]->update(players[3]);
	array<String^>^ boardSymbol = gcnew array<String^>(40);
	array<String^, 2>^ homeSymbol = gcnew array<String ^, 2>(4, 4);
	for (int i = 0; i < 40; i++) {
		if (board->getIsOccupied(i)) {
			switch (board->getSoldier(i)->getPlayerNo())
			{
			case 1:
				boardSymbol[i] = "[Y]";
				break;
			case 2:
				boardSymbol[i] = "[R]";
				break;
			case 3:
				boardSymbol[i] = "[B]";
				break;
			case 4:
				boardSymbol[i] = "[G]";
				break;
			}
		}
		else
			boardSymbol[i] = "[*]";
	}
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 4; i++) {
			if (home[j]->getIsOccupied(i)) {
				switch (home[j]->getSoldier(i)->getPlayerNo())
				{
				case 1:
					homeSymbol[j, i] = " Y ";
					break;
				case 2:
					homeSymbol[j, i] = " R ";
					break;
				case 3:
					homeSymbol[j, i] = " B ";
					break;
				case 4:
					homeSymbol[j, i] = " G ";
					break;
				}
			}
			else
				homeSymbol[j, i] = "   ";
		}
	}
	Console::WriteLine("            " + boardSymbol[18] + boardSymbol[19] + boardSymbol[20] + "            ");
	Console::WriteLine("            " + boardSymbol[17] + homeSymbol[2, 0] + boardSymbol[21] + "            ");
	Console::WriteLine("            " + boardSymbol[16] + homeSymbol[2, 1] + boardSymbol[22] + "            ");
	Console::WriteLine("            " + boardSymbol[15] + homeSymbol[2, 2] + boardSymbol[23] + "            ");
	Console::WriteLine(boardSymbol[10] + boardSymbol[11] + boardSymbol[12] + boardSymbol[13] + boardSymbol[14] + homeSymbol[2, 3] + boardSymbol[24] + boardSymbol[25] + boardSymbol[26] + boardSymbol[27] + boardSymbol[28]);
	Console::WriteLine(boardSymbol[9] + homeSymbol[1, 0] + homeSymbol[1, 1] + homeSymbol[1, 2] + homeSymbol[1, 3] + "   " + homeSymbol[3, 3] + homeSymbol[3, 2] + homeSymbol[3, 1] + homeSymbol[3, 0] + boardSymbol[29]);
	Console::WriteLine(boardSymbol[8] + boardSymbol[7] + boardSymbol[6] + boardSymbol[5] + boardSymbol[4] + homeSymbol[0, 3] + boardSymbol[34] + boardSymbol[33] + boardSymbol[32] + boardSymbol[31] + boardSymbol[30]);
	Console::WriteLine("            " + boardSymbol[3] + homeSymbol[0, 2] + boardSymbol[35] + "            ");
	Console::WriteLine("            " + boardSymbol[2] + homeSymbol[0, 1] + boardSymbol[36] + "            ");
	Console::WriteLine("            " + boardSymbol[1] + homeSymbol[0, 0] + boardSymbol[37] + "            ");
	Console::WriteLine("            " + boardSymbol[0] + boardSymbol[39] + boardSymbol[38] + "            ");
}

void play(Player ^player, Die^ die, Board^ board, Home^ home) {
	bool moved = false;
	int soldier;
	int face;
	int newloc;
	int homeloc;
	Console::WriteLine("\"" + player->getName() + "\"" + "(" + player->getColor() + ")" + " Turn:");

	int newsol = -1;
	for (int i = 0; i < 4; i++) {
		if (!(player->getSoldier(i)->getIsOnBoard())&& !(player->getSoldier(i)->isInHome)) {
			newsol = i;
			break;
		}
	}
	//determine the no of soldiers on the board
	Console::WriteLine("List of your soldiers on board:");
	int noSoldOnBoard = 0;
	for (int i = 0; i < 4; i++)
		if (player->getSoldier(i)->getIsOnBoard()) {
			noSoldOnBoard++;
			Console::WriteLine(i + ":" + player->getSoldier(i)->getLocation());
		}

	if (noSoldOnBoard == 0) {
		bringNewSoldier(player, newsol, board);
		for (int i = 0; i < 4; i++)
			if (player->getSoldier(i)->getIsOnBoard()) {
				noSoldOnBoard++;
				Console::WriteLine(i + ":" + player->getSoldier(i)->getLocation());
			}
	}
	face = die->roll();
	Console::WriteLine("\nDie: " + face);

	if (face == 6 && newsol != -1) {
		String ^choice = "n";
		Console::Write("Do you want to bring new soldier?(y/N): ");
		choice = Console::ReadLine();
		if (choice == "y" || choice == "Y") {
			moved = bringNewSoldier(player, newsol, board);	
		}
	}

	while (!moved) {
		

		Console::WriteLine("you have " + noSoldOnBoard + " soldier(s) on the board which one you want to move?");
		soldier = -1;
		while (soldier <0 || soldier >noSoldOnBoard - 1) {
			Console::Write(":");
			soldier = int::Parse(Console::ReadLine());
			if (!(player->getSoldier(soldier)->getIsOnBoard()))
				soldier = -1;
		}

		newloc = player->getSoldier(soldier)->getLocation() + face;

		if (player->getSoldier(soldier)->baseloc - player->getSoldier(soldier)->getLocation() > 0 &&
			player->getSoldier(soldier)->baseloc - player->getSoldier(soldier)->getLocation() < 6) {
			if (newloc > player->getSoldier(soldier)->baseloc) {
				int homeloc = newloc - player->baseloc;
				if (homeloc > 4)
					homeloc = 4;
				player->getSoldier(soldier)->setLocation(homeloc - 1);
				player->getSoldier(soldier)->setIsOnBoard(false);
				player->getSoldier(soldier)->isInHome = true;
				break;
			}
		}

		int CellEmpty = isCellEmpty(board, newloc, player);
		if (CellEmpty == 1)//occupied by own soldier
		{
			Console::WriteLine("Can't Move! new location is occupied,please select another soldier to move");
		}
		else if (CellEmpty == -1)//occupied by enemy
		{
			Console::WriteLine("You KICKED \"player " + board->getSoldier(newloc)->getPlayerNo() + "'s\" soldier to his base");
			board->getSoldier(newloc)->setLocation((board->getSoldier(newloc)->getPlayerNo() - 1) * 10);
			player->getSoldier(soldier)->setLocation(newloc);
			moved = true;
		}
		else if (CellEmpty == 0) //cell is empty
		{
			player->getSoldier(soldier)->setLocation(newloc);
			moved = true;
		}
	}
}

bool bringNewSoldier(Player^ player, Int32 newsol, Board^ board) {
	int CellEmpty = isCellEmpty(board, player->initLoc, player);
	if (CellEmpty == 0)//empty
	{
		player->getSoldier(newsol)->setLocation(player->initLoc);
		player->getSoldier(newsol)->setIsOnBoard(true);
		return true;
	}
	else if (CellEmpty == 1)// occupied by own
	{
		Console::WriteLine("Can't Move! new location is not empty");
		return false;
	}
	else if (CellEmpty == -1)//occupied by enemy
	{
		Console::WriteLine("You KICKED \"player " + board->getSoldier(player->initLoc)->getPlayerNo() + "'s\" soldier to his base");
		board->getSoldier(player->initLoc)->setLocation((board->getSoldier(player->initLoc)->getPlayerNo() - 1) * 10);
		player->getSoldier(newsol)->setLocation(player->initLoc);
		player->getSoldier(newsol)->setIsOnBoard(true);
		return true;
	}
}

//************************************
// Method:    isCellEmpty
// FullName:  isCellEmpty
// Access:    public
// Returns:   int
// Qualifier: return 0 : if not occupied
//			  return 1 : if occupied by own soldier
//			 return -1 : if occupied by other player's soldier
//************************************
int isCellEmpty(Board^ board, int newloc, Player^ player) {
	if (board->getIsOccupied(newloc)) {
		if (board->getSoldier(newloc)->getPlayerNo() == player->playerNo)
			return 1;
		else
			return -1;
	}

	return 0;
}
void writeToFile(Board^ board) {

	////board.size = 1;

	//ifstream::pos_type size = sizeof(board);
	//Board ^ memblock;
	//memblock = board;

	//ofstream save1;
	//save1.open("saved", ios::binary);
	//save1.seekp(0, ios::beg);
	//save1.write((char*)&memblock, size);
	//save1.close();



	//ofstream myfile;
	//string COMMA_DELIMITER = ",";
	//string NEW_LINE_SEPARATOR = "\n";

	//std::ifstream ifs("test.txt", std::ifstream::in);
	//ifstream in;
	//in >> board;
	////if you want to use read: 
	////in.read(reinterpret_cast<const char*>(&e),sizeof(e));
	//in.close();
	//myfile.open("boad.csv", fstream::app);
	//for (int i = 0; i < 40; i++) {
	//	myfile << board->getIsOccupied(i);
	//	myfile << COMMA_DELIMITER;
	//}

	//for (int i = 0; i < 40; i++) {
	//	myfile << board->getSoldier(i);
	//	myfile << COMMA_DELIMITER;
	//}
	//
	//myfile.close();
	
}