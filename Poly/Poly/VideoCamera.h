#pragma once
#include "Camera.h"
class VideoCamera :
	public Camera
{
public:
	VideoCamera();
	~VideoCamera();

	virtual string ServiceName();
	void Recording();
	void StopRecording();
};

