#include <stdio.h>
int main()
{
	/*int First, Second;
	int i, sum;
	sum = 0;
	printf("%s\n", "This program calculates the additions of ");
	printf("Please enter the first number:");
	scanf("%d", &First);
	printf("Please enter the first number:");
	scanf("%d", &Second);
	for (i = First; i <= Second; i++)
	{
		sum = sum + i;
	}
	printf("The sum of numbers between");
	printf("%d", First);
	printf(" and ");
	printf("%d", Second);
	printf(" Equals ");
	printf("%d", sum);
*/

	int sumOdd = 0;
	int sumEven = 0;
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			sumEven = sumEven + i;
		}
		else
		{
			sumOdd = sumOdd + i;
		}
	}
	printf("%s\n", "The Sum of Even number is ");
	printf("%d\n", sumEven);
	printf("%s\n", "The Sum of Odd number is ");
	printf("%d\n", sumOdd);
	return 0;
}