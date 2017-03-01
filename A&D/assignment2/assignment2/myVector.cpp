#include "myVector.h"
#include <iostream>
using namespace std;
void demoVector()
{
	vector <int> intVector;
	int input;
	vector<int>::iterator it;

	int pos = 0;

	int choice = 0;
	while (choice >= 0 && choice <= 7)
	{
		cout << "1. Add an Element to the end of vector" << endl <<
			"2. Add an element to the beginning of the vector" << endl <<
			"3. Add an element to a specific location in the vector" << endl <<
			"4. Print the vector" << endl <<
			"5. Show Vector's size" << endl <<
			"6. Access a particular Element in the vector by using Iterator" << endl <<
			"7. Access a Particular Element in the vector by using[] operator" << endl;

		cout << "Please enter your choice (1 to 7): ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter a number: ";
			cin >> input;
			intVector.push_back(input);
			printVector(intVector);
			break;
		case 2:
			cout << "Enter a number: ";
			cin >> input;
			intVector.insert(intVector.begin(), input);
			printVector(intVector);
			break;
		case 3:
			cout << "Enter a number: ";
			cin >> input;
			cout << "Enter position: ";
			while (pos > intVector.size())
				cin >> pos;

			it = intVector.begin();
			for (int i = 0; i != pos; i++)
				it++;
			intVector.insert(it, input);
			printVector(intVector);
			break;
		case 4:
			printVector(intVector);
			break;
		case 5:
			cout << "vector size is:" << intVector.size() << endl;
			break;
		case 6:
			cout << "Enter position: ";
			do
			{
				cin >> pos;
			} while (pos<0 || pos > intVector.size());

			it = intVector.begin();
			for (int i = 0; i != pos; i++)
				it++;
			cout << *it << endl;
			break;
		case 7:
			cout << "Enter position: ";
			int pos;
			do
			{
				cin >> pos;
			} while (pos<0 || pos > intVector.size());

			cout << intVector[pos] << endl;
			break;
		}
	}
}

template < class T >
void printVector(const std::vector< T > &vec)
{
	vector< T >::const_iterator p1;

	for (p1 = vec.begin(); p1 != vec.end(); p1++)
		cout << *p1 << ' ';
	cout << endl;
}