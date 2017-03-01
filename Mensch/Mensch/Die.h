#pragma once
ref class Die : Random
{
private:
	int face;
public:
	Die();
	~Die();

	int roll();
};
