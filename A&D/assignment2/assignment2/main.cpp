#pragma once
#include <iostream>
#include "myVector.h"
#include "myList.h"
#include "myDeque.h"
#include "myMap.h"
#include "myMultiMap.h"
#include "myMultiSet.h"
#include "mySet.h"
#include "myQueue.h"
#include "myStack.h"
#include "myPQueue.h"
using namespace std;

void main() {
	int choice = 0;
	while (choice >= 0 && choice <= 10)
	{
		cout << "1.  Demonstrating Vectors" << endl <<
			"2.  Demonstrating Lists" << endl <<
			"3.  Demonstrating Deques" << endl <<
			"4.  Demonstrating Maps" << endl <<
			"5.  Demonstrating MultiMaps" << endl <<
			"6.  Demonstrating Sets" << endl <<
			"7.  Demonstrating Multisets" << endl <<
			"8.  Demonstrating Stacks" << endl <<
			"9.  Demonstrating Queues" << endl <<
			"10. Demonstrating Priority Queues" << endl;

		cout << "Please enter your choice (1 to 10): ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			demoVector();
			break;
		case 2:
			demoList();
			break;
		case 3:
			demoDeque();
			break;
		case 4:
			demoMap();
			break;
		case 5:
			demoMultiMap();
			break;
		case 6:
			demoSet();
			break;
		case 7:
			demoMultiSet();
			break;
		case 8:
			demoStack();
			break;
		case 9:
			demoQueue();
			break;
		case 10:
			demoPQueue();
			break;
		}
	}
}