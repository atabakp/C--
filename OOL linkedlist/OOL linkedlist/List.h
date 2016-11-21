#pragma once
#include "Node.h"
#include <iostream>
using namespace std;
class List
{

	friend ostream& operator<<(ostream&,  List);
public:
	Node *head;
	Node *tail;
public:
	List();
	~List();

	void setHead(Node* head);
	Node* getHead();

	void setTail(Node* tail);
	Node* getTail();

	//add to end (create new tail)
	void append(Node* newNode);
	void append(int val);
	//add to beginning (create new head)
	void prepend(Node* newNode);
	void prepend(int val);
	
	void deleteNode(Node* node);
	void print();
	
	int nodeCount();
	void operator=(List right);
	bool operator==(List right);
	bool operator!=(List right);
	List operator++();
	List operator++(int);
	List operator-(List right);
	List operator+(List right);
};
