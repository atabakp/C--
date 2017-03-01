#include "mySet.h"
#include <iostream>

using namespace std;
void demoSet()
{
	set <int> intSet;
	int input;
	set<int>::iterator it;

	int pos = 0;

	int choice = 0;
	while (choice >= 0 && choice <= 3)
	{
		cout << "1. Add an Element to the Set" << endl <<
			"2. Show that Multiple similar Set values are ignored  ( By adding and printing) " << endl <<
			"3. Printing the Map" << endl;

		cout << "Please enter your choice (1 to 3): ";
		cin >> choice;
		switch (choice)
		{
		case 1:

			cout << "Enter a number: ";
			cin >> input;
			intSet.insert(input);
			printSet(intSet);
			break;
		case 2:
			int input2;
			cout << "Enter a number: ";
			cin >> input;
			intSet.insert(input);
			printSet(intSet);
			cout << "Enter Same value to create new set :";
			cin >> input2;
			intSet.insert(input);
			printSet(intSet);
			break;
		case 3:
			printSet(intSet);
			break;
		}
	}
}

template < class T >
void printSet(const std::set< T> &intset)
{
	set <int>::const_iterator it;
	cout << endl;
	cout << "Set's Value:" << endl;
	for (it = intset.begin(); it != intset.end(); it++)
	{
		cout << *it << endl;
	}
	cout << endl;
}