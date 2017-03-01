#include "myStack.h"
#include <iostream>

using namespace std;
void demoStack()
{
	stack <int> intStack;
	int input;

	int choice = 0;
	while (choice >= 0 && choice <= 7)
	{
		cout << "1. Push into the Stack" << endl <<
			"2. Pop from the Stack" << endl <<
			"3. Print The Stack" << endl;

		cout << "Please enter your choice (1 to 3): ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter a number: ";
			cin >> input;
			intStack.push(input);
			printStack(intStack);
			break;
		case 2:
			intStack.pop();
			printStack(intStack);
			break;
		case 3:
			printStack(intStack);
			break;
		}
	}
}

template < class T >
void printStack(stack< T> intstack)
{
	cout << endl;
	cout << "Stack: ";
	while (!intstack.empty())
	{
		cout << intstack.top() << " ";
		intstack.pop();
	}
	cout << endl;
}