#pragma once
class Node
{
public:
	int data;
	Node *next;
	Node *prev;
public:
	Node();
	~Node();

	void setData(int val);
	int getData();
	void setNext(Node* next);
	Node* getNext();

	void setPrev(Node* Prev);
	Node* getPrev();

};

