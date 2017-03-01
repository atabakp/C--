#pragma once
#include "myPQueue.h"
#include <iostream>

using namespace std;
void demoPQueue()
{
	priority_queue <int> intPQueue;
	int input;

	int choice = 0;
	while (choice >= 0 && choice <= 7)
	{
		cout << "1. Push into the Priority Queue" << endl <<
			"2. Pop from the Priority Queue" << endl <<
			"3. Print The Priority Queue" << endl;

		cout << "Please enter your choice (1 to 3): ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter a number: ";
			cin >> input;
			intPQueue.push(input);
			printPQueue(intPQueue);
			break;
		case 2:
			intPQueue.pop();
			printPQueue(intPQueue);
			break;
		case 3:
			printPQueue(intPQueue);
			break;
		}
	}
}

template < class T >
void printPQueue(priority_queue< T> intPQ)
{
	cout << endl;
	cout << "Stack: ";
	while (!intPQ.empty())
	{
		cout << intPQ.top() << " ";
		intPQ.pop();
	}
	cout << endl;
}