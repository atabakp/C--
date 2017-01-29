#include <iostream>
#include <vector>
using namespace std;

template < class T >
void printVector(const std::vector< T > &vec);

void demoVector();

//demoLists();

			//demoDeques();

			//demoMaps();

			//demoMultiMaps();

			//demoSets();

			//demoMultiSets();

			//demoStacks();

			//demoQueues();

			//demoPriorityQueues();

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
			//demoLists();
			break;
		case 3:
			//demoDeques();
			break;
		case 4:
			//demoMaps();
			break;
		case 5:
			//demoMultiMaps();
			break;
		case 6:
			//demoSets();
			break;
		case 7:
			//demoMultiSets();
			break;
		case 8:
			//demoStacks();
			break;
		case 9:
			//demoQueues();
			break;
		case 10:
			//demoPriorityQueues();
			break;
		}
	}
}
void demoVector()
{
	vector <int> intVector;
	int input;
	vector<int>::iterator it;

	int choice = 0;
	while (choice >= 0 && choice <= 9)
	{
		cout << "1. Add an Element to the end of vector" << endl <<
			"2. Add an element to the beginning of the vector" << endl <<
			"3. Add an element to a specific location in the vector" << endl <<
			"4. Print the vector" << endl <<
			"5. Show Vector’s size" << endl <<
			"6. Access a particular Element in the vector by using Iterator" << endl <<
			"7. Access a Particular Element in the vector by using[] operator";

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
			int pos;
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
			cout << "vector size is:" << intVector.size();
			break;
		case 6:
			cout << "Enter position: ";
			int pos;
			while (pos > intVector.size())
				cin >> pos;

			it = intVector.begin();
			for (int i = 0; i != pos; i++)
				it++;
			cout << *it;
			break;
		case 7:
			cout << "Enter position: ";
			int pos;
			while (pos > intVector.size())
				cin >> pos;
			cout << intVector[pos];
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