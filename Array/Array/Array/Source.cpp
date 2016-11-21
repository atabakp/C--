#include <stdio.h>
int main()
{
	const int SIZE = 3;
	int marks[SIZE];

	// Loop for initializing an array to 0
	for (int i = 0; i <= SIZE -1; i++)
	{
		marks[i] = 0;
	}

	for (int i = 0; i <= SIZE -1; i++)
	{
		while (true)
		{
			scanf("%d", &marks[i]);
			if (marks[i] >= 0 && marks[i] <= 100)
			{
				break;
			}
			else
			{
				printf("%s\n","Nooooo");
			}
		}
	}

	int sum = 0;
	double Average;
	for (int j = 0; j <= SIZE -1; j++)
	{
		sum = sum + marks[j];
	}
	Average = sum / SIZE + 1;

	//Preparing the output
	for (int j = 0; j <= SIZE - 1; j++)
	{
		printf("%s", "Student : ");
		printf("%d", j + 1);
		printf("%s", " Mark : ");
		printf("%d\n", marks[j]);
	}
	printf("%s", "The Average is ");
	printf("%f\n", Average);


	//finding maximum
	int Max = 0;
	Max = marks[0];
	for (int i = 1; i <= SIZE - 1; i++)
	{
		if (marks[i] > Max)
		{
			Max = marks[i];
		}
	}
	printf("%s", "The Max is ");
	printf("%d\n", Max);

	int Min = 0;
	Min = marks[0];
	for (int i = 1; i <= SIZE - 1; i++)
	{
		if (marks[i] < Min)
		{
			Min = marks[i];
		}
	}
	printf("%s", "The Min is ");
	printf("%d\n", Min);


	return 0;
}