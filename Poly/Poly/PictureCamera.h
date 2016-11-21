#pragma once
#include "Camera.h"
class PictureCamera :
	public Camera
{
public:
	PictureCamera();
	~PictureCamera();

	virtual string ServiceName();
	void TakePicture();
};

