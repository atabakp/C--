#include "Stack.h"
#include "Queue.h"
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	Stack <int> newStack;
	Queue <int> newQueue;

	srand(time(NULL));

	for (int i = 0; i < 20; i++)
	{
		int num = rand() % 50 + 1;
		newStack.push(num);
		newQueue.enqueue(num);
	}

	cout << "Stack" << "\t" << "Queue" << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << newStack.pop() << "\t"
			<< newQueue.dequeue() << endl;
	}

	return 0;
}