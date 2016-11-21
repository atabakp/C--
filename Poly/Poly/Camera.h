#pragma once
#include "Services.h"
class Camera :
	public Services
{
public:
	Camera();
	~Camera();

	virtual string ServiceName();
	void save();
	void load();
};

