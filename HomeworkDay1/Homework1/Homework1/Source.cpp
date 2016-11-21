#include <stdio.h>
int main()
{
	int i;
	int printNumber = 0;
	for (i = 1; i <= 7; i++)
	{
		printNumber = i;
		printf("%d ", printNumber);
	}
	printf("\n");

	int printNumber3 = 0;
	for (i = 3; i <= 23; i += 5)
	{
		printNumber3 = i;
		printf("%d ", printNumber3);
	}
	printf("\n");

	int printNumber20 = 0;
	for (i = 20; i >= -10; i -= 6)
	{
		printNumber20 = i;
		printf("%d ", printNumber20);
	}
	printf("\n");

	int printNumber19 = 0;
	for (i = 19; i <= 51; i += 8)
	{
		printNumber19 = i;
		printf("%d ", printNumber19);
	}
	printf("\n");

	int sum = 0;
	int result = 0;
	for (i = 1; i <= 5; i++){
		printf("Please enter the number:");
		scanf("%d", &sum);
		result += sum;
	}
	printf("%d ", result);
	printf("\n");

	int factorial = 0;
	int resultFac = 1;
	printf("Please enter the number:");
	scanf("%d", &factorial);

	for (i = 1; i <= factorial; i++){
		resultFac = resultFac * i ;
		printf("%d ", resultFac);
	}

	return 0;
}