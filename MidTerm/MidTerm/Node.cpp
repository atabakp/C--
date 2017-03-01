#include "Node.h"
#include <stdint.h>
using namespace std;


Node::Node()
{
	this->data = NULL;
	this->next = NULL;
	this->prev = NULL;
}


Node::~Node()
{

}

void Node::setData(Car *val)
{
	this->data = val;
}

Car* Node::getData()
{
	return this->data;
}

void Node::setNext(Node* next)
{
	this->next = next;
}

Node* Node::getNext()
{
	return this->next;
}

void Node::setPrev(Node* prev)
{
	this->prev = prev;
}

Node* Node::getPrev()
{
	return this->prev;
}
