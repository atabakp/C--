#pragma once
#include "Cell.h"
#include <vector>
using namespace std;
class Grid
{
public:

	Cell *cell[16][16];
public:
	Grid();
	~Grid();
};
