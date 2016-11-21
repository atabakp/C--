#include <stdio.h>
#include <cmath>
int main()
{
	int marks[5];

	// Loop for initializing an array to 0
	for (int i = 0; i <= 4; i++)
	{
		marks[i] = 0;
	}

	for (int i = 0; i <= 4; i++)
	{
		while (true)
		{
			scanf("%d", &marks[i]);
			if (marks[i] == 0 || marks[i] == 1)
			{
				break;
			}
			else
			{
				printf("%s\n", "Nooooo Please Enter 0 or 1");
			}
		}
	}

	int decimal = 0;
	for (int index = 0; index <= 4; index++)
	{
		decimal += marks[index] * pow(2, index);
	}

	printf("%s", "The Decimal is ");
	printf("%d\n", decimal);


}