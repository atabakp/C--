#include "Grid.h"
#include <iostream>
#include <iomanip>
using namespace std;
void printBoard(Grid *board);
int noOfNeighbours(Grid *board, int x, int y);
void placeStones(int stone, Grid *board);

void main() {
	Grid *board = new Grid();

	placeStones(100, board);
	printBoard(board);
	bool gameover = false;
	int onboard = 0;

	while (!gameover) {
		int x, y;
		int dx, dy;
		char eater;

		do
		{
			std::cout << "Enter stone coordinates (x,y):";
			std::cin >> x >> eater >> y;
		} while (board->cell[x][y]->isEmpty());

		bool des = false;
		do
		{
			std::cout << "Enter destination coordinates (x,y):";
			std::cin >> dx >> eater >> dy;
			if ((abs(dx - x) == 2) && (abs(dy - y) == 0) ||
				(abs(dx - x) == 0) && (abs(dy - y) == 2))
				des = true;
		} while (board->cell[dx][dy]->isFull() || !des);

		if (abs(dx - x) == 2)
		{
			board->cell[(x + dx) / 2][y]->empty();
			board->cell[x][y]->empty();
			board->cell[dx][dy]->fill();
		}
		if (abs(dy - y) == 2)
		{
			board->cell[x][(y + dy) / 2]->empty();
			board->cell[x][y]->empty();
			board->cell[dx][dy]->fill();
		}

		cout << "(" << x << "," << y << ") -> (" << dx << "," << dy << ")" << endl;
		printBoard(board);
		gameover = true;
		for (int j = 0; j < 16; j++) {
			for (int i = 0; i < 16; i++) {
				if (board->cell[i][j]->isFull())
				{
					onboard++;
					if (noOfNeighbours(board, i, j) != 0)
					{
						gameover = false;
					}
				}
			}
		}
	}
	cout << "Game over..." << endl << onboard <<"pieces left on the board" << endl;
}

void printBoard(Grid *board) {
	cout << "  ";
	for (int i = 0; i < 16; i++)
		cout << setw(2) << i;
	cout << endl;
	for (int j = 0; j < 16; j++) {
		cout << setw(2) << j << " ";
		for (int i = 0; i < 16; i++) {
			if (board->cell[i][j]->isFull())
				cout << "x" << " ";
			else
				cout << "." << " ";
		}
		cout << endl;
	}
}

int noOfNeighbours(Grid *board, int x, int y)
{
	int n = 0;
	if ((x == 0) & (y == 0))
	{
		if (board->cell[x][y + 1]->isFull()) n++;
		if (board->cell[x + 1][y]->isFull()) n++;
	}
	else if ((x == 15) & (y == 15))
	{
		if (board->cell[x][y - 1]->isFull()) n++;
		if (board->cell[x - 1][y]->isFull()) n++;
	}
	else if ((x == 0) & (y == 15))
	{
		if (board->cell[x + 1][y]->isFull()) n++;
		if (board->cell[x][y - 1]->isFull()) n++;
	}
	else if ((x == 15) & (y == 0))
	{
		if (board->cell[x][y + 1]->isFull()) n++;
		if (board->cell[x - 1][y]->isFull()) n++;
	}
	else if (y == 0)
	{
		if (board->cell[x][y + 1]->isFull()) n++;
		if (board->cell[x + 1][y]->isFull()) n++;
		if (board->cell[x - 1][y]->isFull()) n++;
	}
	else if (x == 0)
	{
		if (board->cell[x][y + 1]->isFull()) n++;
		if (board->cell[x + 1][y]->isFull()) n++;
		if (board->cell[x][y - 1]->isFull()) n++;
	}
	else if (x == 15)
	{
		if (board->cell[x][y + 1]->isFull()) n++;
		if (board->cell[x][y - 1]->isFull()) n++;
		if (board->cell[x - 1][y]->isFull()) n++;
	}
	else if (y == 15)
	{
		if (board->cell[x + 1][y]->isFull()) n++;
		if (board->cell[x][y - 1]->isFull()) n++;
		if (board->cell[x - 1][y]->isFull()) n++;
	}
	
	else
	{
		if (board->cell[x][y + 1]->isFull()) n++;
		if (board->cell[x + 1][y]->isFull()) n++;
		if (board->cell[x][y - 1]->isFull()) n++;
		if (board->cell[x - 1][y]->isFull()) n++;
	}
	return n;
}

void placeStones(int stone, Grid* board)
{
	srand(time(NULL));
	int n = 0;
	while (n < stone) {
		int x, y;
		x = (rand() % 14) + 1;
		y = (rand() % 14) + 1;

		if (board->cell[x][y]->isEmpty())
		{
			board->cell[x][y]->fill();
			n++;

			bool flag = false;
			int loop = 0;
			while (!flag || (loop < 4)) {
				loop++;
				int direction;
				direction = rand() % 4;
				switch (direction)
				{
				case 0:      //up
					if (board->cell[x][y - 1]->isEmpty())
					{
						board->cell[x][y - 1]->fill();
						n++;
						flag = true;
					}
					break;
				case 1:      //down
					if (board->cell[x][y + 1]->isEmpty())
					{
						board->cell[x][y + 1]->fill();
						n++;
						flag = true;
					}
					break;
				case 2:      //right
					if (board->cell[x + 1][y]->isEmpty())
					{
						board->cell[x + 1][y]->fill();
						n++;
						flag = true;
					}
					break;
				case 3:      //left
					if (board->cell[x - 1][y]->isEmpty())
					{
						board->cell[x - 1][y]->fill();
						n++;
						flag = true;
					}
					break;
				}//switch
			}//while(flag loop)
		}//if
	}//while
}