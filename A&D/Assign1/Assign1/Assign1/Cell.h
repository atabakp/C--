#pragma once
class Cell
{
private:
	bool filled;
public:
	Cell();
	~Cell();

	bool isFull();
	bool isEmpty();
	void fill();
	void empty();
};
