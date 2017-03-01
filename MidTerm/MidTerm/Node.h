#pragma once
#include "Car.h"
class Node
{
public:
	Car *data;
	Node *next;
	Node *prev;
public:
	Node();
	~Node();

	void setData(Car *val);
	Car *getData();
	void setNext(Node* next);
	Node* getNext();

	void setPrev(Node* Prev);
	Node* getPrev();

};

