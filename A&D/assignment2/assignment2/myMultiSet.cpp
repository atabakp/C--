#include "myMultiSet.h"
#include <iostream>

using namespace std;
void demoMultiSet()
{
	multiset <int> intMSet;
	int input;
	multiset<int>::iterator it;

	int pos = 0;

	int choice = 0;
	while (choice >= 0 && choice <= 3)
	{
		cout << "1. Add an Element to the MultiSet" << endl <<
			"2. Show that Multiple similar Set values are allowed (By adding and printing)" << endl <<
			"3. Printing the Map" << endl;

		cout << "Please enter your choice (1 to 3): ";
		cin >> choice;
		switch (choice)
		{
		case 1:

			cout << "Enter a number: ";
			cin >> input;
			intMSet.insert(input);
			printMSet(intMSet);
			break;
		case 2:
			int input2;

			cout << "Enter a number: ";
			cin >> input;
			intMSet.insert(input);
			printMSet(intMSet);
			cout << "Enter Same value to create new set :";
			cin >> input2;
			intMSet.insert(input);
			printMSet(intMSet);
			break;
		case 3:
			printMSet(intMSet);
			break;
		}
	}
}

template < class T >
void printMSet(const std::multiset< T > &intset)
{
	multiset <int>::const_iterator it;
	cout << endl;
	cout << "Set's Value:" << endl;
	for (it = intset.begin(); it != intset.end(); it++)
	{
		cout << *it << endl;
	}
	cout << endl;
}