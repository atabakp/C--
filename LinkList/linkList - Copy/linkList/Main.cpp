#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node * NextPtr;
	struct Node * PrevPtr;
};
void Count();
void AddToFront();
void PrintForward();
void AddToBack();
void AddAfterIndex(int index);
void AddToMiddleAfter();
void AddToMiddleBefore();
void DeleteAtFront();
void DeleteAtend();
void DeleteAtIndex(int index);
void DeleteAtMiddleAfter();
void DeleteAtMiddleBefore(); 
void DeleteAllData();
void FindMaximum();
void FindMinimum();
void FindAverage();
void Sort();
void PrintBackward();
void saveToRandomFile();
void loadFromRandomFile();
void saveToSequentialFile();
void loadFromSequentialFile();
void Exit();

//A global variable holding the address of the first element of the list
struct Node * startNode;
//A global variable holding the address of the last elemnt of the list
struct Node * endNode;
//A global variable for holding the number of nodes
int count = 1;
int main()
{
	//Putting Null Pointer in startNode , We assume we have an empty
	//startNode = 0;
//struct Node * startNode =NULL;
//struct Node * endNode = NULL;
	int Choice;
	Choice = 1;
	while (Choice >= 0 && Choice <= 19)
	{
		Count();
		printf("%s\n","1: To Add a node to the end of the list");
		printf("%s\n","2: To Add a node to the beginning of the list");
		printf("%s\n","3: To Add a node to the middle of the list after a specfic node");
		printf("%s\n","4: To Add a node to the middle of the list before a specfic node");
		printf("%s\n","5: To Delete a node at the beginning of the list");
		printf("%s\n", "6: To Delete a node at the end of the list");
		printf("%s\n", "7: To Delete a node at the middle of the list after a specfic node");
		printf("%s\n", "8: To Delete a node at the middle of the list before a specfic node");
		printf("%s\n", "9: To Delete all data in the nodes");
		printf("%s\n", "10: To find maximum element in the list");
		printf("%s\n", "11: To find minimum element in the list");
		printf("%s\n", "12: To find Averge of the list data");
		printf("%s\n", "13: To sort the list");
		printf("%s\n", "14: To print the list forward");
		printf("%s\n", "15: To print the list backward");
		printf("%s\n", "16: To Save to random file");
		printf("%s\n", "17: To Load from random file");
		printf("%s\n", "18: To Save to sequential file");
		printf("%s\n", "19: To Load from sequential file");
		printf("%s\n", "20: To Exit the program");
		PrintForward();
		printf("%s\n", "Please enter your choice (1 to 16)");
		
		scanf("%d", &Choice);
		switch (Choice)
		{
		case 1: 
			AddToBack();
			break;
		case 2:
			AddToFront();
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
			DeleteAtend();
			break;
		case 7:
			DeleteAtMiddleAfter();
			break;
		case 8:
			DeleteAtMiddleBefore();
			break;
		case 9:
			DeleteAllData();
			break;
		case 10:
			FindMaximum();
			break;
		case 11:
			FindMinimum();
			break;
		case 12:
			FindAverage();
			break;
		case 13:
			Sort();
			break;
		case 14:
			PrintForward();
			break;
		case 15:
			PrintBackward();
			break;
		case 16:
			saveToRandomFile();
			break;
		case 17:
			loadFromRandomFile();
			break;
		case 18:
			saveToSequentialFile();
			break;
		case 19:
			loadFromSequentialFile();
		case 20:
			Exit();
			break;
		}
	}


}

void AddToFront()
{
	//create a new node
	struct Node * newNode;
	newNode = (struct Node *)malloc(sizeof(struct Node));
	//only at this point newNode is a valid pointer
	printf("Please enter the data for this node: ");
	scanf("%d", &newNode->data);
	if (startNode == 0)
	{
		//the list is empty
		startNode = newNode;
		startNode->NextPtr = 0;
		startNode->PrevPtr = 0;
		endNode = startNode;
	
	}
	else
	{
		//the list is Not empty
		newNode->NextPtr = startNode;
		startNode->PrevPtr = newNode;
		newNode->PrevPtr = 0;
		startNode = newNode;
	}
}

void PrintForward()
{
	struct Node * currentNode;
	currentNode = startNode;
	while(currentNode != 0)
	{
		printf("%d ->", currentNode->data);
		currentNode = currentNode->NextPtr;
	}
	printf("%s\n"," NULL");
}

void AddToBack()
{
	//create a new node
	struct Node * newNode;
	newNode = (struct Node *)malloc(sizeof(struct Node));
	//only at this point newNode is a valid pointer
	printf("Please enter the data for this node: ");
	scanf("%d", &newNode->data);
	newNode->NextPtr = 0;
	if (startNode == 0)
	{
		//the list is empty
		startNode = newNode;
		endNode = startNode;

	}
	else
	{
		//the list is Not empty
		newNode->PrevPtr = endNode;
		newNode->PrevPtr->NextPtr = newNode;
		newNode->NextPtr = 0;
		endNode = newNode;
	}
}

void AddToMiddleAfter()
{
	if (startNode == 0)
	{
		printf("List is empty!");
	
	}
	else {

		int chosenNodeidx = 0;
		printf("Enter the node index that you want to add After: ");
		scanf_s("%d", &chosenNodeidx);


		if (chosenNodeidx == count) {
			AddToBack();
		}
		else {
			AddAfterIndex(chosenNodeidx);
		}

	}


}

void AddToMiddleBefore()
{
	if (startNode == 0)
	{
		printf("List is empty!");

	}
	else {

		int chosenNodeidx = 0;
		printf("Enter the node index that you want to add Before: ");
		scanf_s("%d", &chosenNodeidx);

		if (chosenNodeidx == 1) {
			AddToFront();
		}
		else {
			chosenNodeidx--;
			AddAfterIndex(chosenNodeidx);
		}

	}

}

void DeleteAtFront()
{
	if (startNode == 0) {
		printf("The list is empty\n");
	}
	else if (count == 1) {
		startNode = 0;
	} else {
		startNode->NextPtr->PrevPtr = 0;
		startNode = startNode->NextPtr;
		free(startNode->PrevPtr);
	}

}

void DeleteAtend()
{
	if (startNode == 0) {
		printf("The list is empty\n");
	}
	else if (count == 1) {
		startNode = 0;
	}
	else {
		endNode = endNode->PrevPtr;
		endNode->NextPtr = 0;
	}
}

void DeleteAtMiddleAfter()
{
	if (startNode == 0)
	{
		printf("List is empty!");

	}
	else {

		int chosenNodeidx = 0;
		printf("Enter the node index that you want to delete after: ");
		scanf_s("%d", &chosenNodeidx);

	
			chosenNodeidx++;
			DeleteAtIndex(chosenNodeidx);
		

	}

	
}

void DeleteAtMiddleBefore() {
	if (startNode == 0)
	{
		printf("List is empty!");

	}
	else {

		int chosenNodeidx = 0;
		printf("Enter the node index that you want to delete Before: ");
		scanf_s("%d", &chosenNodeidx);


			chosenNodeidx--;
			DeleteAtIndex(chosenNodeidx);
		

	}
}
void DeleteAllData() {
	for (count; count != 0; count--) {
		DeleteAtIndex(count);
	}
}

void AddAfterIndex(int index) {


		struct Node * currentNode;
		currentNode = startNode;
		for (int i = 1; i != index; i ++) {
			currentNode = currentNode->NextPtr;
		}
		struct Node * newNode;
		newNode = 0;
		newNode = (struct Node *)malloc(sizeof(struct Node));
		printf("%s\n", "Please enter the data for this node: ");
		scanf("%d", &newNode->data);

		
		newNode->PrevPtr = currentNode;
		newNode->NextPtr = currentNode->NextPtr;
		currentNode->NextPtr->PrevPtr = newNode;
		currentNode->NextPtr = newNode;
	

}
void DeleteAtIndex(int index) {

	if (index < 1 || index > count) {
		printf("Out of Range!!!\n");
	}
	else if (index == 1) {
		DeleteAtFront();
	}
	else if (index == count) {
		DeleteAtend();
	}
	else {
		struct Node * currentNode;
		currentNode = startNode;
		for (int i = 1; i != index; i++) {
			currentNode = currentNode->NextPtr;
		}

		currentNode->PrevPtr->NextPtr = currentNode->NextPtr;
		currentNode->NextPtr->PrevPtr = currentNode->PrevPtr;
	}
	


}
void Count() {
	
	if (startNode == 0) {
		count = 0;
	}
	else {
		struct Node * currentNode;
		currentNode = startNode;
		count = 1;
		while (currentNode != endNode)
		{
			currentNode = currentNode->NextPtr;
			count++;
		}
	}
}

void FindMaximum() {
	struct Node * currentNode;
	currentNode = startNode;
	int max = startNode->data;
	int index = 1;
	int i = 1;
	while (currentNode != endNode)
	{
		currentNode = currentNode->NextPtr;
		i++;
		if (currentNode->data <= max) {
			max = currentNode->data;
			index = i;
		}
	}
	printf("%d at index %d\n", max,index);
}

void FindMinimum() {
	struct Node * currentNode;
	currentNode = startNode;
	int min = startNode->data;
	int index = 1;
	int i = 1;
	while (currentNode != endNode)
	{
        currentNode = currentNode->NextPtr;
		i++;
		if (currentNode->data <= min) {
			min = currentNode->data;
			index = i;
		}
		
	}
	printf("%d at index %d\n", min, index);
}

void FindAverage(){

	struct Node * currentNode;
currentNode = startNode;
int sum = 0;
int i = 0;
float average;
while (currentNode != 0)
{
	sum = currentNode->data + sum;
	currentNode = currentNode->NextPtr;
	i++;

}
average = sum / i;
printf("average is : %.2f\n", average);
}

struct Node * FindMinFrom(struct Node * node) {
	struct Node * currentNode;
	currentNode = node;
	struct Node * minNode;
	minNode = node;
	while (currentNode != endNode)
	{
		currentNode = currentNode->NextPtr;
		if (currentNode->data <= minNode->data) {
			minNode = currentNode;
			
		}

	}
	return minNode;
}

void Sort() {

	struct Node * currentNode;
	currentNode = startNode;
	struct Node * minNode;
	minNode = startNode;
	int temp;
	while (currentNode->NextPtr != 0)
	{
		minNode = FindMinFrom(currentNode);

		//swap currentNode <-> minNode data
		temp = minNode->data;
		minNode->data = currentNode->data;
		currentNode->data = temp;

		
		currentNode = currentNode->NextPtr;
	

	}
}

void PrintBackward()
{
	struct Node * currentNode;
	currentNode = endNode;
	printf("\n NULL");
	while (currentNode != 0)
	{
		printf(" ->%d", currentNode->data);
		currentNode = currentNode->PrevPtr;
	}
	printf("\n");
	
}

void saveToRandomFile(){
	FILE *fh;
	struct Node * currentNode;
	currentNode = startNode;
	if ((fh = fopen("random.dat", "wb")) == NULL) {
		printf("Can't open that file!");
		exit(1);
	}
	else {


		while (currentNode != 0)
		{
			fwrite(&currentNode->data, sizeof(currentNode->data), 1, fh);
			currentNode = currentNode->NextPtr;

		}
		fclose(fh);

		printf("\n\nsuccessfully saved\n\n");


	}
	




}
void loadFromRandomFile(){
	//create a new node
	struct Node * newNode;
	FILE *fh;
	startNode = 0;
	fh = fopen("random.dat", "r");
	if (fh == NULL)
	{
		printf("Can't open that file!");
		exit(1);
	}
	else
	{
		while (!feof(fh)) {

			newNode = (struct Node *)malloc(sizeof(struct Node));
			fread(&newNode->data, sizeof(newNode->data), 1, fh);
			newNode->NextPtr = 0;
			if (startNode == 0)
			{
				//the list is empty
				startNode = newNode;
				endNode = startNode;

			}
			else
			{
				//the list is Not empty
				newNode->PrevPtr = endNode;
				endNode->NextPtr = newNode;
				newNode->NextPtr = 0;
				endNode = newNode;
			}
		}
	}
	fclose(fh);


}
void saveToSequentialFile(){
	struct Node * currentNode;
	FILE *fh;
	currentNode = startNode;
	fh = fopen("seq.txt", "w");
	if (fh == NULL)
	{
		printf("Can't open that file!");
		exit(1);
	}
	else {



		while (currentNode != 0)
		{
			fprintf(fh, "%d ", currentNode->data);
			currentNode = currentNode->NextPtr;

		}
	
		fclose(fh);

		printf("\n\nsuccessfully saved\n\n");
	}
}
void loadFromSequentialFile(){
		//create a new node
		struct Node * newNode;
		FILE *fh;
		startNode = 0;
		fh = fopen("seq.txt", "r");
		if (fh == NULL)
		{
			printf("Can't open that file!");
			exit(1);
		}
		else
		{
			while (!feof(fh)) {


				newNode = (struct Node *)malloc(sizeof(struct Node));
				fscanf(fh, "%d ", &newNode->data);
				newNode->NextPtr = 0;
				if (startNode == 0)
				{
					//the list is empty
					startNode = newNode;
					endNode = startNode;

				}
				else
				{
					//the list is Not empty
					newNode->PrevPtr = endNode;
					endNode->NextPtr = newNode;
					newNode->NextPtr = 0;
					endNode = newNode;
				}
			}
		}
		fclose(fh);
}












void Exit(){
	
}