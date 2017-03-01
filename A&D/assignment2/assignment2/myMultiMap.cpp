#include "myMultiMap.h"
#include <iostream>

using namespace std;
void demoMultiMap()
{
	multimap <int, int> intMMap;
	int input;
	multimap<int, int>::iterator it;

	int pos = 0;
	int key;
	int choice = 0;
	while (choice >= 0 && choice <= 7)
	{
		cout << "1. Add an Element to the MultiMap" << endl <<
			"2. Show that Multiple similar Mapped values are allowed(By adding and printing)" << endl <<
			"3. Printing the MultiMap" << endl;

		cout << "Please enter your choice (1 to 3): ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter the key: ";
			cin >> key;
			cout << "Enter a number: ";
			cin >> input;
			intMMap.insert(pair<int, int>(key, input));
			printMMap(intMMap);
			break;
		case 2:
			int input2;
			cout << "Enter the key: ";
			cin >> key;
			cout << "Enter a number: ";
			cin >> input;
			intMMap.insert(pair<int, int>(key, input));
			printMMap(intMMap);
			cout << "Enter other value for same key :";
			cin >> input2;
			intMMap.insert(pair<int, int>(key, input));
			printMMap(intMMap);
			break;
		case 3:
			printMMap(intMMap);
			break;
		}
	}
}

template < class T >
void printMMap(const std::multimap< T, T > &intmap)
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