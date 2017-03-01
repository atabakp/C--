#include "myList.h"
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;
void demoList()
{
	list <int> intList;
	int input;
	list<int>::iterator it;

	int pos = 0;

	ostream_iterator< int > output(cout, " ");
	int choice = 0;
	while (choice >= 0 && choice <= 6)
	{
		cout << "1. Add an Element to the end of list" << endl <<
			"2.	Add an element to the beginning of the list" << endl <<
			"3.	Add an element to a specific location in the list" << endl <<
			"4.	Print the list using Copy Algorithm and iostream iterator" << endl <<
			"5.	Print the list using list iterator" << endl <<
			"6.	Show list's size" << endl;

		cout << "Please enter your choice (1 to 6): ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter a number: ";
			cin >> input;
			intList.push_back(input);
			printList(intList);
			break;
		case 2:
			cout << "Enter a number: ";
			cin >> input;
			intList.push_front(input);
			printList(intList);
			break;
		case 3:
			cout << "Enter a number: ";
			cin >> input;
			cout << "Enter position: ";
			while (pos > intList.size())
				cin >> pos;

			it = intList.begin();
			for (int i = 0; i != pos; i++)
				it++;
			intList.insert(it, input);
			printList(intList);
			break;
		case 4:
			copy(intList.begin(), intList.end(), output);
			cout << endl;
			break;
		case 5:
			printList(intList);
			break;
		case 6:
			cout << "list size is: " << intList.size() << endl;
			break;
		}
	}
}

template < class T >
void printList(const list< T > &vec)
{
	list< T >::const_iterator p1;

	for (p1 = vec.begin(); p1 != vec.end(); p1++)
		cout << *p1 << ' ';
	cout << endl;
}