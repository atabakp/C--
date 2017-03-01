#include "myDeque.h"
#include <iostream>

using namespace std;
void demoDeque()
{
	deque <int> intDeque;
	int input;
	deque<int>::iterator it;

	int pos = 0;

	int choice = 0;
	while (choice >= 0 && choice <= 7)
	{
		cout << "1. Add an Element to the end of list" << endl <<
			"2. Add an element to the beginning of the list" << endl <<
			"3. Add an element to a specific location in the vector" << endl <<
			"4. Access a particular Element in the Deque by using Iterator" << endl <<
			"5. Access a Particular Element in the Deque by using[] operator" << endl;

		cout << "Please enter your choice (1 to 7): ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter a number: ";
			cin >> input;
			intDeque.push_back(input);
			printDeque(intDeque);
			break;
		case 2:
			cout << "Enter a number: ";
			cin >> input;
			intDeque.insert(intDeque.begin(), input);
			printDeque(intDeque);
			break;
		case 3:
			cout << "Enter a number: ";
			cin >> input;
			cout << "Enter position: ";
			while (pos > intDeque.size())
				cin >> pos;

			it = intDeque.begin();
			for (int i = 0; i != pos; i++)
				it++;
			intDeque.insert(it, input);
			printDeque(intDeque);
			break;
		case 4:
			cout << "Enter position: ";
			do
			{
				cin >> pos;
			} while (pos<0 || pos > intDeque.size());

			it = intDeque.begin();
			for (int i = 0; i != pos; i++)
				it++;
			cout << *it << endl;
			break;
		case 5:
			cout << "Enter position: ";
			int pos;
			do
			{
				cin >> pos;
			} while (pos<0 || pos > intDeque.size());

			cout << intDeque[pos] << endl;
			break;
		}
	}
}

template < class T >
void printDeque(const std::deque< T > &vec)
{
	deque< T >::const_iterator p1;

	for (p1 = vec.begin(); p1 != vec.end(); p1++)
		cout << *p1 << ' ';
	cout << endl;
}