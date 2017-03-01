#pragma once
#include "LinkedList.h"
template <class T>
class Queue
{
private:

	List <T> lst;

public:
	Queue();
	~Queue();
	void enqueue(T data);
	T dequeue();
};

/////////////////////////////////

template <class T>
Queue<T>::Queue()
{
}

template <class T>
Queue<T>::~Queue()
{
}

template <class T>
T Queue<T>::dequeue()
{
	T val;
	val = lst.getTail()->getData();
	lst.deleteNode(lst.getTail());
	return val;
}

template <class T>
void Queue<T>::enqueue(T data)
{
	lst.append(data);
}
