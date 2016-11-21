#pragma once
#include "Services.h"
class DayPlanner :
	public Services
{
public:
	DayPlanner();
	~DayPlanner();
	virtual string ServiceName();
	void AddEntry();
	void ModifyEntry();
	void DeleteEntry();
};

