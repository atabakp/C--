#pragma once
#include <iostream>

#define SIZE 100
using namespace std;

template <class T>
class Stack
{
private:
	T array[SIZE];
	int top = -1;

	bool isEmpty();
	bool isFull();
public:
	Stack();
	~Stack();
	void push(T data);
	T pop();
};

/////////////////////////////////////////

template <class T>
Stack<T>::Stack()
{
}

template <class T>
Stack<T>::~Stack()
{
}

template <class T>
void Stack<T>::push(T data)
{
	if (!isFull()) {
		top = top + 1;
		this->array[top] = data;
	}
	else {
		cout << "Could not insert data, Stack is full.\n";
	}
}

template <class T>
T Stack<T>::pop()
{
	int data;

	if (!isEmpty()) {
		data = this->array[top];
		top = top - 1;
		return data;
	}
	else {
		cout << "Could not retrieve data, Stack is empty.\n";
	}
}

template <class T>
bool Stack<T>::isFull()
{
	if (top == SIZE)
		return 1;
	else
		return 0;
}

template <class T>
bool Stack<T>::isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}