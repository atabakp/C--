#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node * NextPtr;
	struct Node * PrevPtr;
};

struct Node * Start;
void AddList();
void PrintForward();

int main()
{
	Start = 0;//This means pointer = 0 Not data = 0 It's a beginning of Node!!
	int Choice = 0;

	while (Choice >= 0 && Choice <= 16)
	{
		printf("%s\n", "1: To Add a node to the beginning of the list");
		printf("%s\n", "2: To Add a node to the end of the list");
		printf("%s\n", "3: To Add a node to the middle of the list after a specfic node");
		printf("%s\n", "4: To Add a node to the middle of the list before a specfic node");
		printf("%s\n", "5: To Delete a node at the beginning of the list");
		printf("%s\n", "6: To Delete a node at the end of the list");
		printf("%s\n", "7: To Delete a node at the middle of the list after a specfic node");
		printf("%s\n", "8: To Delete a node at the middle of the list before a specfic node");
		printf("%s\n", "9: To Add all data in the nodes");
		printf("%s\n", "10: To find maximum element in the list");
		printf("%s\n", "11: To find minimum element in the list");
		printf("%s\n", "12: To find Averge of the list data");
		printf("%s\n", "13: To sort the list");
		printf("%s\n", "14: To print the list forward");
		printf("%s\n", "15: To print the list backward");
		printf("%s\n", "16: To Exit the program");
		printf("%s\n", "Please enter your choice (1 to 16)");
		scanf("%d", &Choice);
		switch (Choice)
		{
		case 1:
			AddList();
			break;
		case 14:
			PrintForward();
			break;
		}
	}


}

void AddList()
{
	struct Node * newNode;
	newNode = (struct Node*)malloc(sizeof(struct Node));
	printf("Please enter the data for this node");
	scanf("%d", &newNode->data);

	if (Start == 0)
	{
		Start = newNode;
		newNode->NextPtr = 0;
		newNode->PrevPtr = 0;
	}
	else
	{
		Start->PrevPtr = newNode;
		newNode->NextPtr = Start;
		newNode->PrevPtr = 0;
		newNode = Start;
	}
}

void PrintForward()
{
	struct Node * Current;
	Current = Start;

	while (Current != 0)
	{
		printf("%d ->", Current->data);
		Current = Current->NextPtr;
	}
}