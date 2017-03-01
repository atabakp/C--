#pragma once
template <typename T>
class Node
{
public:
	T data;
	Node<T> *next;
	Node<T> *prev;
public:
	Node();
	~Node();

	void setData(T val);
	T getData();
	void setNext(Node* next);
	Node<T>* getNext();

	void setPrev(Node* Prev);
	Node<T>* getPrev();
};

#pragma once
#include "Node.h"
#include <stdint.h>
using namespace std;

template <class T>
Node<T>::Node()
{
	this->data = 0;
	this->next = NULL;
	this->prev = NULL;
}

template <typename T>
Node<T>::~Node()
{
}
template <typename T>
void Node<T>::setData(T val)
{
	this->data = val;
}
template <typename T>
T Node<T>::getData()
{
	return this->data;
}
template <typename T>
void Node<T>::setNext(Node* next)
{
	this->next = next;
}
template <typename T>
Node<T>* Node<T>::getNext()
{
	return this->next;
}
template <typename T>
void Node<T>::setPrev(Node* prev)
{
	this->prev = prev;
}
template <typename T>
Node<T>* Node<T>::getPrev()
{
	return this->prev;
}
