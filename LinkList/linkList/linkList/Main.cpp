#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node * NextPtr;
	struct Node * PrevPtr;
};

void AddToFront();
void PrintForward();
void AddToBack();
void AddToMiddleAfter();
void AddToMiddleBefore();
void DeleteAtFront();
void DeleteAtEnd();
void DeleteAtMiddleAfter();

//A global variable holding the address of the first element of the list
struct Node * Start;
//Putting Null Pointer in Start , We assume we have an empty

int main()
{
	Start = 0;

	int Choice;
	Choice = 1;
	while (Choice >= 0 && Choice <= 16)
	{
		printf("%s\n","1: To Add a node to the beginning of the list");
		printf("%s\n","2: To Add a node to the end of the list");
		printf("%s\n","3: To Add a node to the middle of the list after a specfic node");
		printf("%s\n","4: To Add a node to the middle of the list before a specfic node");
		printf("%s\n","5: To Delete a node at the beginning of the list");
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
		PrintForward();
		printf("%s\n", "Please enter your choice (1 to 16)");
		
		scanf("%d", &Choice);
		switch (Choice)
		{
		case 1: 
			AddToFront();
			break;
		case 2:
			AddToBack();
			break;
		case 3:
			AddToMiddleAfter();
			break;
		case 4:
			AddToMiddleBefore();
			break;
		case 5:
			DeleteAtFront();
			break;
		case 6:
			DeleteAtEnd();
			break;
		case 7:
			DeleteAtMiddleAfter();
			break;
		case 8:
			/*DeleteAtMiddleBefore();*/
			break;
		case 9:
			/*AddAllData();*/
			break;
		case 10:
			/*FindMaximum();*/
			break;
		case 11:
			/*FindMinimum();*/
			break;
		case 12:
			/*FindAverage();*/
			break;
		case 13:
			/*Sort();*/
			break;
		case 14:
			PrintForward();
			break;
		case 15:
			/*PrintBackward();*/
			break;
		case 16:
			/*Exit();*/
			break;
		}
	}


}

void AddToFront()
{
	//create a new node
	struct Node * newnode;
	newnode = (struct Node *)malloc(sizeof(struct Node));
	//only at this point newnode is a valid pointer
	printf("Please enter the data for this node: ");
	scanf("%d", &newnode->data);
	if (Start == 0)
	{
		//the list is empty
		Start = newnode;
		newnode->NextPtr = 0;
		newnode->PrevPtr = 0;
	
	}
	else
	{
		//the list is Not empty
		newnode->NextPtr = Start;
		Start->PrevPtr = newnode;
		newnode->PrevPtr = 0;
		Start = newnode;
	}
}

void PrintForward()
{
	struct Node * Current;
	Current = Start;
	while(Current != 0)
	{
		printf("%d <-", Current->data);
		Current = Current->NextPtr;
	}
	printf("%s\n"," NULL");
}

void AddToBack()
{
	struct Node * NewNode;
	NewNode = (struct Node*)malloc(sizeof(struct Node));
	printf("Please enter the data for this node: ");
	scanf("%d", &NewNode->data);

	struct Node * Current;
	Current = Start;
	while (Current->NextPtr != 0)
	{
		Current = Current->NextPtr;
	}
	Current->NextPtr = NewNode;
	NewNode->PrevPtr = Current;
	NewNode->NextPtr = 0;
}

void AddToMiddleAfter()
{
	if (Start == 0)
	{
		printf("List is empty!");
		return;
	}

	int ChosenNodeidx = 0;
	printf("Enter the node index that you want to add after: ");
	scanf_s("%d", &ChosenNodeidx);

	

	struct Node * Current;
	int i = 0;
	int count = 1;
	Current = Start;
	while (Current->NextPtr != 0)
	{
		Current = Current->NextPtr;
		count++;
	}
	printf("lastone: %d \n",Current->data);
	printf("count: %d\n", count);
	// now we are at first node
	/*if (ChosenNodeidx == count) {
		struct Node * NewNode;
		NewNode = 0;
		NewNode = (struct Node *)malloc(sizeof(struct Node));
		printf("%s\n", "Please enter the data for this node: ");
		scanf_s("%d", &NewNode->data);
		
		NewNode->PrevPtr = Current;
		NewNode->NextPtr = 
		NewNode->NextPtr = Current->NextPtr;
		Current->NextPtr->PrevPtr = NewNode;
		NewNode->PrevPtr = Current;
		Current->NextPtr = NewNode;
	}*/
	if (ChosenNodeidx == count)
	{
		while (Current->PrevPtr != 0)
		{
			Current = Current->PrevPtr;
		}
		printf("== data: %d\n", Current->data);
		printf("== count: %d\n", count);
		printf("== current->nex->data: %d\n", Current->NextPtr->data);
		struct Node * NewNode;
				NewNode = 0;
				NewNode = (struct Node *)malloc(sizeof(struct Node));
				printf("Please enter the data for this node: ");
				scanf_s("%d", &NewNode->data);
				//Fixing points
				
				NewNode->NextPtr = Current;
				Current->PrevPtr = NewNode;
				NewNode->PrevPtr = 0;
				return;
		
	}
	else
	{
		while (i != ChosenNodeidx)
		{
			Current = Current->PrevPtr;
			i++;
		}
		printf("current data: %d\n", Current->data);
		printf("current count: %d\n", count);
		struct Node * NewNode;
		NewNode = 0;
		NewNode = (struct Node *)malloc(sizeof(struct Node));
		printf("%s\n", "Please enter the data for this node: ");
		scanf_s("%d", &NewNode->data);
		//Current is somewhere at the midddle of the list
		NewNode->NextPtr = Current->NextPtr;
		Current->NextPtr->PrevPtr = NewNode;
		NewNode->PrevPtr = Current;
		Current->NextPtr = NewNode;
	}
	//At this point Current is either pointing to the last node or to some other
	//Checkiong the last node
	//if (Current->NextPtr == 0)
	//{
	//	//I am at the last node
	//	if (ChosenNodeidx==0)
	//	{
	//		//The node that you asked me to put a node after is actuallly the last
	//		//performing something similar to add to end
	//		struct Node * NewNode;
	//		NewNode = 0;
	//		NewNode = (struct Node *)malloc(sizeof(struct Node));
	//		printf("Please enter the data for this node: ");
	//		scanf_s("%d", &NewNode->data);
	//		//Fixing points
	//		NewNode->NextPtr = 0;
	//		NewNode->PrevPtr = Current;
	//		Current->NextPtr = NewNode;
	//		return;
	//	}
	//	else
	//	{
	//		printf("%s\n", "Node is not found, option impossible.");
	//		return;
	//	}
	//}
	//else
	//{
	//	struct Node * NewNode;
	//	NewNode = 0;
	//	NewNode = (struct Node *)malloc(sizeof(struct Node));
	//	printf("%s\n", "Please enter the data for this node: ");
	//	scanf_s("%d", &NewNode->data);
	//	//Current is somewhere at the midddle of the list
	//	NewNode->NextPtr = Current->NextPtr;
	//	Current->NextPtr->PrevPtr = NewNode;
	//	NewNode->PrevPtr = Current;
	//	Current->NextPtr = NewNode;
	//	return;
	//}

}

void AddToMiddleBefore()
{
	if (Start == 0)
	{
		printf("List is empty!");
		return;
	}

	int ChosenNodeidx = 0;
	printf("Enter the node index that you want to add Before: ");
	scanf_s("%d", &ChosenNodeidx);
	ChosenNodeidx--;


	struct Node * Current;
	int i = 0;
	Current = Start;
	while (Current->NextPtr != 0)
	{
		Current = Current->NextPtr;
	}
	// now we are at last node
	while (Current->PrevPtr != 0)
	{
		if (ChosenNodeidx == i)
		{
			break;
		}
		Current = Current->PrevPtr;
		i++;



	}

	//At this point Current is either pointing to the last node or to some other
	//Checkiong the last node
	if (Current->NextPtr == 0)
	{
		//I am at the last node
		if (ChosenNodeidx == 0)
		{
			//The node that you asked me to put a node after is actuallly the last
			//performing something similar to add to end
			struct Node * NewNode;
			NewNode = 0;
			NewNode = (struct Node *)malloc(sizeof(struct Node));
			printf("Please enter the data for this node: ");
			scanf_s("%d", &NewNode->data);
			//Fixing points
			NewNode->NextPtr = 0;
			NewNode->PrevPtr = Current;
			Current->NextPtr = NewNode;
			return;
		}
		else
		{
			printf("%s\n", "Node is not found, option impossible.");
			return;
		}
	}
	else
	{
		struct Node * NewNode;
		NewNode = 0;
		NewNode = (struct Node *)malloc(sizeof(struct Node));
		printf("%s\n", "Please enter the data for this node: ");
		scanf_s("%d", &NewNode->data);
		//Current is somewhere at the midddle of the list
		NewNode->NextPtr = Current->NextPtr;
		Current->NextPtr->PrevPtr = NewNode;
		NewNode->PrevPtr = Current;
		Current->NextPtr = NewNode;
		return;
	}

}


void DeleteAtFront()
{
	struct Node * CurrentNode;
	CurrentNode = Start;
	while (CurrentNode->NextPtr != 0)
	{
		CurrentNode = CurrentNode->NextPtr;
	}
	CurrentNode = CurrentNode->PrevPtr;
	CurrentNode->NextPtr = 0;

	

}

void DeleteAtEnd()
{
	Start = Start->NextPtr;
}

void DeleteAtMiddleAfter()
{
	struct Node * NewNode;
	NewNode = (struct Node*)malloc(sizeof(struct Node));
	int position = 0;
	printf("Please enter the data for this node: ");
	scanf("%d", &NewNode->data);
	printf("Please enter node to put the newnode after: ");
	scanf("%d", &position);

	struct Node * Current;
	Current = Start;
	int i = 0;
	while (i == position)
	{
		Current = Current->NextPtr;
		i++;
	}
	NewNode->NextPtr = Current->NextPtr;
	Current->NextPtr = NewNode;
	NewNode->PrevPtr = Current;
	
}