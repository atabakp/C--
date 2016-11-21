#include <stdio.h>
int main()
{
	int student[10];

	// Loop for initializing an array to 0
	for (int i = 0; i <= 9; i++)
	{
		student[i] = 0;
	}

	printf("%s\n", "Please Enter 10 Students Number ");
	// Getting Student Number information
	for (int i = 0; i <= 9; i++)
	{
		while (true)
		{
			scanf("%d", &student[i]);
			if (student[i] >= 100 && student[i] <= 999)
			{
				break;
			}
			else
			{
				printf("%s\n", "Nooooo Please Enter 3 degits");
			}
		}
	}

	// Showing Student Number information
	for (int i = 0; i <= 9; i++)
	{
		printf("Student %d of ID : ", i);
		printf("%d\n", student[i]);
	}


	int marks[10][6];
	// Loop for initializing an array to 0
	for (int row = 0; row <= 9; row++)
	{
		for (int column = 0; column <= 5; column++)
		{
			marks[row][column] = 0;
		}
	}
	printf("\n");


	// Storing mark information
	int studentNumber = 0;
	int count = 0;

	while (count <= 9){
		int flag = 0;
		printf("%s\n", "Please find Student Number to Store data!");
		scanf("%d", &studentNumber);

		for (int i = 0; i <= 9; i++)
		{
			if (studentNumber == student[i])
			{
				printf("Student Number %d Score \n", student[i]);
				for (int column = 0; column <= 4; column++)
				{
					if (column < 2)
					{
						while (true)
						{
							printf("Enter Marks for a quiz : ");
							scanf("%d", &marks[i][column]);
							if (marks[i][column] <= 100)
							{
								break;
							}
							else
							{
								printf("%s\n", "Nooooo The Maximum Score is 100");
							}
						}
					}
					else if (column == 2)
					{
						while (true)
						{
							printf("Enter Marks for a Midterm : ");
							scanf("%d", &marks[i][column]);
							if (marks[i][column] <= 100)
							{
								break;
							}
							else
							{
								printf("%s\n", "Nooooo The Maximum Score is 100");
							}
						}
					}
					else if (column == 3)
					{
						while (true)
						{
							printf("Enter Marks for a Final Test : ");
							scanf("%d", &marks[i][column]);
							if (marks[i][column] <= 100)
							{
								break;
							}
							else
							{
								printf("%s\n", "Nooooo The Maximum Score is 100");
							}
						}
					}
					else if (column == 4)
					{
						while (true)
						{
							printf("Enter Marks for an Attendance : ");
							scanf("%d", &marks[i][column]);
							if (marks[i][column] <= 100)
							{
								break;
							}
							else
							{
								printf("%s\n", "Nooooo The Maximum Score is 100");
							}
						}
					}

				}
				flag = 1;
				count += 1;
				break;
			}
		}

		if (flag == 0)
		{
			printf("Sorry I could't find the number of student");
		}
	}


	// Calculating final mark
	int finalmark = 0;
	for (int row = 0; row <= 9; row++)
	{
		for (int column = 0; column <= 4; column++)
		{
			if (column < 2)
			{
				finalmark += marks[row][column] * 0.1;
			}
			else if (column == 2)
			{
				finalmark += marks[row][column] * 0.3;
			}
			else if (column == 3)
			{
				finalmark += marks[row][column] * 0.4;
			}
			else
			{
				finalmark += marks[row][column] * 0.1;
			}
		}
		marks[row][5] = finalmark;
		finalmark = 0;
	}

	printf("\n");


	// Showing All Data
	int check = 0;
	printf("%s\n", "Do you wanna see all data?? \n If yes, Please enter 1 ");
	scanf("%d", &check);

	if (check == 1)
	{
		for (int i = 0; i <= 9; i++)
		{
			printf("Student Number %d Score \n", student[i]);
			for (int column = 0; column <= 5; column++)
			{
				if (column < 2)
				{
					printf("The Quiz Score : %d\n", marks[i][column]);
				}
				else if (column == 2)
				{
					printf("The Midterm Score : %d\n", marks[i][column]);
				}
				else if (column == 3)
				{
					printf("The Final Score : %d\n", marks[i][column]);
				}
				else if (column == 4)
				{
					printf("The Attendance : %d\n", marks[i][column]);
				}
				else
				{
					printf("The Total mark : %d\n", marks[i][column]);
				}
			}
			printf("\n");
		}
	}

	return 0;

}