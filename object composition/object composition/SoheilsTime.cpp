#include "SoheilsTime.h"


bool SoheilsTime::CheckSeconds(int s)
{
	if (s >= 0 && s < 60)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool SoheilsTime::CheckMinutes(int m)
{
	if (m >= 0 && m < 60)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool SoheilsTime::CheckHours(int h)
{
	if (h >= 0 && h < 24)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool SoheilsTime::CheckSoheilsTime(int h, int m, int s)
{
	if (CheckHours(h)== true && CheckMinutes(m) == true && CheckSeconds(s)== true)
	{
		return true;
	}
	else
	{
		return false;
	}
}
SoheilsTime::SoheilsTime()
{
	CHours = 0;
	CMinutes = 0;
	CSeconds = 0;
}
SoheilsTime::~SoheilsTime()
{
}
SoheilsTime::SoheilsTime(int h,int m, int s)
{
	if (CheckHours(h)==true )
	{
		CHours = h;
	}
	else
	{
		CHours = 0;
	}
	if (CheckMinutes(m) == true)
	{
		CMinutes = m;
	}
	else
	{
		CMinutes = 0;
	}
	if (CheckSeconds(s) == true)
	{
		CSeconds = s;
	}
	else
	{
		CSeconds = 0;
	}
}
int SoheilsTime::GetHours()
{
	return CHours;
}
void SoheilsTime::SetHours(int h)
{
	if (CheckHours(h) == true)
	{
		CHours = h;
	}
	else
	{
		CHours = 0;
	}
}
int SoheilsTime::GetMinutes()
{
	return CMinutes;
}
void SoheilsTime::SetMinutes(int m)
{
	if (CheckMinutes(m) == true)
	{
		CMinutes = m;
	}
	else
	{
		CMinutes = 0;
	}
}
int SoheilsTime::GetSeconds()
{
	return CSeconds;
}
void SoheilsTime::SetSeconds(int s)
{
	if (CheckSeconds(s) == true)
	{
		CSeconds = s;
	}
	else
	{
		CSeconds = 0;
	}
}