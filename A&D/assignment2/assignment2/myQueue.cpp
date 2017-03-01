#pragma once
#include "myQueue.h"
#include <iostream>

using namespace std;
void demoQueue()
{
	queue <int> intQueue;
	int input;

	int choice = 0;
	while (choice >= 0 && choice <= 7)
	{
		cout << "1. Push into the Queue" << endl <<
			"2. Pop from the Queue" << endl <<
			"3. Print The Queue" << endl;

		cout << "Please enter your choice (1 to 3): ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter a number: ";
			cin >> input;
			intQueue.push(input);
			printQueue(intQueue);
			break;
		case 2:
			intQueue.pop();
			printQueue(intQueue);
			break;
		case 3:
			printQueue(intQueue);
			break;
		}
	}
}

template < class T >
void printQueue(queue< T> intQ)
{
	cout << endl;
	cout << "Stack: ";
	while (!intQ.empty())
	{
		cout << intQ.front() << " ";
		intQ.pop();
	}
	cout << endl;
}