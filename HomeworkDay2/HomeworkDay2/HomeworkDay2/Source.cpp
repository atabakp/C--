#include <stdio.h>
int calculateSeconds(int hours, int minutes, int seconds);
float calculateCharges(int hours);
int isPrime(int number);

int main()
{
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	int customerHour1 = 0;
	int customerHour2 = 0;
	int customerHour3 = 0;
	int primenumber = 0;

	//Calculate total seconds
	printf("You can calculate total seconds! \n");
	printf("Please enter the hours:");
	scanf("%d", &hours);

	printf("Please enter the minutes:");
	scanf("%d", &minutes);

	printf("Please enter the seconds:");
	scanf("%d", &seconds);

	printf("The total seconds are %d ", calculateSeconds(hours, minutes, seconds));
	printf("\n");

	//Calculate parking fee
	printf("Parking Fee : Please enter hours:");
	scanf("%d", &customerHour1);
	float charges1 = calculateCharges(customerHour1);
	printf("The total fee are %lf ", charges1);
	printf("\n");

	printf("Parking Fee : Please enter hours:");
	scanf("%d", &customerHour2);
	float charges2 = calculateCharges(customerHour2);
	printf("The total fee are %lf ", charges2);
	printf("\n");

	printf("Parking Fee : Please enter hours:");
	scanf("%d", &customerHour3);
	float charges3 = calculateCharges(customerHour3);
	printf("The total fee are %lf ", charges3);
	printf("\n");

	//Check prime number
	printf("You can check whether the number is prime number or not! \n Please enter number : ");
	scanf("%d", &primenumber);
	if (isPrime(primenumber) == 1){
		printf("The number is Prime Number");
	}
	else 
	{
		printf("The number is Not Prime Number");
	}
	printf("\n");

	return 0;
}

int calculateSeconds(int hours, int minutes, int seconds)
{
	int result;
	result = (hours * 60 * 60) + (minutes * 60) + seconds;
	return result;
}

float calculateCharges(int hours)
{
	float result = 0.0f;
	float minFee = 2.0f;
	float maxFee = 10.0f;
	float additionalFee = 0.5f;

	if (hours <= 3.0f){
		result = minFee;
	}
	else if (hours > 3.0f && hours < 20.0f){
		result = (hours - 3.0f) * additionalFee + minFee;
	}
	else
	{
		result = maxFee;
	}

	return result;
}

int isPrime(int number)
{
	for (int i = 2; i < number; i++){
		if (number % i == 0 && i != number)
		{
			return 0;
		}
	}
	return 1;
}