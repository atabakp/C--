#include "stdafx.h"

Die::Die()
{
}

Die::~Die()
{
}

int Die::roll()
{
	this->face = Next(6) + 1;
	return this->face;
}