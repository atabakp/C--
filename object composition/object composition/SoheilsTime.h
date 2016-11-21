#ifndef TIME_CLASS
#define TIME_CLASS
class SoheilsTime
{
private:
	int CSeconds;
	int CMinutes;
	int CHours;
	bool CheckSeconds(int);
	bool CheckMinutes(int);
	bool CheckHours(int);
	bool CheckSoheilsTime(int,int,int);
public:
	SoheilsTime();
	SoheilsTime(int, int, int);
	~SoheilsTime();
	int GetSeconds();
	void SetSeconds(int);
	int GetMinutes();
	void SetMinutes(int);
	int GetHours();
	void SetHours(int);

};
#endif 