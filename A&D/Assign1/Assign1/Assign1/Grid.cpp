#include "Grid.h"

Grid::Grid()
{
	for (int j = 0; j < 16; j++) {
		for (int i = 0; i < 16; i++) {
			cell[j][i] = new Cell();
		}
	}
}

Grid::~Grid()
{
}