
#include <stdio.h>
int main()
{
	printf("%s \n", "This program calculates the sum");
	int n, sum;
	n = 1;
	sum = 0;

	while (n <= 100)
	{
		sum = sum + n;
		n = n + 1;
	}

	printf("%s", "The sum is ");
	printf("%d", sum);

}