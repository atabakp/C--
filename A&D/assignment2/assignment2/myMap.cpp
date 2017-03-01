#include "myMap.h"
#include <iostream>

using namespace std;
void demoMap()
{
	map <int, int> intMap;
	int input;
	map<int, int>::iterator it;

	int pos = 0;
	int key;
	int choice = 0;
	while (choice >= 0 && choice <= 7)
	{
		cout << "1. Add an Element to the Map" << endl <<
			"2. Show that Multiple similar Mapped values are ignored ( By adding and printing) " << endl <<
			"3. Printing the Map" << endl;

		cout << "Please enter your choice (1 to 3): ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter the key: ";
			cin >> key;
			cout << "Enter a number: ";
			cin >> input;
			intMap.insert(pair<int, int>(key, input));
			printMap(intMap);
			break;
		case 2:
			int input2;
			cout << "Enter the key: ";
			cin >> key;
			cout << "Enter a number: ";
			cin >> input;
			intMap.insert(pair<int, int>(key, input));
			printMap(intMap);
			cout << "Enter other value for same key :";
			cin >> input2;
			intMap.insert(pair<int, int>(key, input));
			printMap(intMap);
			break;
		case 3:
			printMap(intMap);
			break;
		}
	}
}

template < class T >
void printMap(const std::map< T, T > &intmap)
{
	map <int, int>::const_iterator it;
	cout << endl;
	cout << "Key" << "\t" << "Value" << endl;
	for (it = intmap.begin(); it != intmap.end(); it++)
	{
		cout << it->first << "\t" << it->second << endl;
	}
	cout << endl;
}