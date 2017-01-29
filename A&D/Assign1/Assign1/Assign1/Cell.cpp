#include "Cell.h"

Cell::Cell()
{
	filled = false;
}

Cell::~Cell()
{
}

bool Cell::isFull()
{
	return this->filled;
}

bool Cell::isEmpty()
{
	return !this->filled;
}

void Cell::fill()
{
	filled = true;
}

void Cell::empty()
{
	filled = false;
}