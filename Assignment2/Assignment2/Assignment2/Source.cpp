#include <stdio.h>

void printAirbus(int AirbusFirst[][4], int AirbusBusiness[][6], int AirbusEconomy[][10]);
void printBoeing(int BoeingFirst[][4], int BoeingBusiness[][6], int BoeingEconomy[][10]);
void reserveSeat(int First[][4], int Business[][6], int Economy[][10], int seatBusinessStart, int seatEconomyStart);
void cancellSeat(int First[][4], int Business[][6], int Economy[][10], int seatBusinessStart, int seatEconomyStart);

int main()
{
		// Initializing an array to 0
		int AirbusFirst[5][4] = { 0 };
		int BoeingFirst[10][4] = { 0 };
		int AirbusBusiness[5][6] = { 0 };
		int BoeingBusiness[5][6] = { 0 };
		int AirbusEconomy[25][10] = { 0 };
		int BoeingEconomy[33][10] = { 0 };

	while (true){
		int customerOrder;
		int planeOrder;
		int seatOrder;
		printf("%s\n", "-----------------------------");
		printf("%s\n", "Reservation : Please press 1 \nCancellation : Please press 2\nEnd : Please press 3");
		printf("%s\n", "-----------------------------");
		scanf("%d", &customerOrder);

		if (customerOrder == 1){
			printf("%s\n", "-----------------------------");
			printf("%s\n", "Airbus 300A : Please press 1 \nBoeing 747 : Please press 2");
			printf("%s\n", "-----------------------------");
			scanf("%d", &planeOrder);
			if (planeOrder == 1)
			{
				printAirbus(AirbusFirst, AirbusBusiness, AirbusEconomy);
				reserveSeat(AirbusFirst, AirbusBusiness, AirbusEconomy, 6, 11);
				printAirbus(AirbusFirst, AirbusBusiness, AirbusEconomy);
			}
			else
			{
				printBoeing(BoeingFirst, BoeingBusiness, BoeingEconomy);
				reserveSeat(BoeingFirst, BoeingBusiness, BoeingEconomy, 11, 15);
				printBoeing(BoeingFirst, BoeingBusiness, BoeingEconomy);
			}
		}
		else if (customerOrder == 2)
		{
			printf("%s\n", "-----------------------------");
			printf("%s\n", "Airbus 300A : Please press 1 \nBoeing 747 : Please press 2");
			printf("%s\n", "-----------------------------");
			scanf("%d", &planeOrder);
			if (planeOrder == 1)
			{
				printAirbus(AirbusFirst, AirbusBusiness, AirbusEconomy);
				cancellSeat(AirbusFirst, AirbusBusiness, AirbusEconomy, 6, 11);
				printAirbus(AirbusFirst, AirbusBusiness, AirbusEconomy);
			}
			else
			{
				printBoeing(BoeingFirst, BoeingBusiness, BoeingEconomy);
				cancellSeat(BoeingFirst, BoeingBusiness, BoeingEconomy, 11, 15);
				printBoeing(BoeingFirst, BoeingBusiness, BoeingEconomy);
			}
		}
		else
		{
			break;
		}
	}
	return 0;
}

void printAirbus(int AirbusFirst[][4], int AirbusBusiness[][6], int AirbusEconomy[][10])
{
	printf("============= Airbus 300A ================= \n");
	printf("First Class \n");
	printf("      1 2 3 4 \n");
	for (int row = 0; row <= 4; row++)
	{
		printf("[ %d ] ", row + 1);
		for (int column = 0; column <= 3; column++)
		{
			printf("%d ", AirbusFirst[row][column]);
		}
		printf("\n");
	}

	printf("Business Class \n");
	printf("       1 2 3 4 5 6\n");
	for (int row = 0; row <= 4; row++)
	{
		printf("[ %d ]  ", row + 6);
		for (int column = 0; column <= 5; column++)
		{
			printf("%d ", AirbusBusiness[row][column]);
		}
		printf("\n");
	}

	printf("Economy Class \n");
	printf("       1 2 3 4 5 6 7 8 9 10\n");
	for (int row = 0; row <= 24; row++)
	{
		printf("[ %d ] ", row + 11);
		for (int column = 0; column <= 9; column++)
		{
			printf("%d ", AirbusEconomy[row][column]);
		}
		printf("\n");
	}
}

void printBoeing(int BoeingFirst[][4], int BoeingBusiness[][6], int BoeingEconomy[][10])
{
	printf("============= Boeing 747 ================= \n");
	printf("First Class \n");
	printf("      1 2 3 4 \n");
	for (int row = 0; row <= 9; row++)
	{
		printf("[ %d ] ", row + 1);
		for (int column = 0; column <= 3; column++)
		{
			printf("%d ", BoeingFirst[row][column]);
		}
		printf("\n");
	}

	printf("Business Class \n");
	printf("        1 2 3 4 5 6\n");
	for (int row = 0; row <= 4; row++)
	{
		printf("[ %d ]  ", row + 11);
		for (int column = 0; column <= 5; column++)
		{
			printf("%d ", BoeingBusiness[row][column]);
		}
		printf("\n");
	}

	printf("Economy Class \n");
	printf("       1 2 3 4 5 6 7 8 9 10\n");
	for (int row = 0; row <= 32; row++)
	{
		printf("[ %d ] ", row + 15);
		for (int column = 0; column <= 9; column++)
		{
			printf("%d ", BoeingEconomy[row][column]);
		}
		printf("\n");
	}
}

void reserveSeat(int First[][4], int Business[][6], int Economy[][10], int seatBusinessStart, int seatEconomyStart)
{
	int seatLevel;
	int seatRow;
	int seatColumn;
	printf("%s\n", "-----------------------------");
	printf("%s\n", "First Class : Please press 1 \nBusiness Class : Please press 2 \nEconomy Class : Please press 3");
	printf("%s\n", "-----------------------------");
	scanf("%d", &seatLevel);
	printf("Select a seat \n");
	printf("X : ");
	scanf("%d", &seatColumn);
	printf("Y : ");
	scanf("%d", &seatRow);

	switch (seatLevel){
	case 1:
		First[seatRow - 1][seatColumn - 1] = 1;
		break;
	case 2:
		Business[seatRow - seatBusinessStart][seatColumn - 1] = 1;
		break;
	case 3:
		Economy[seatRow - seatEconomyStart][seatColumn - 1] = 1;
		break;
	default:
		printf("Please Enter 1 or 2 or 3");

	}
}

void cancellSeat(int First[][4], int Business[][6], int Economy[][10], int seatBusinessStart, int seatEconomyStart)
{
	int seatLevel;
	int seatRow;
	int seatColumn;
	printf("%s\n", "-----------------------------");
	printf("%s\n", "First Class : Please press 1 \nBusiness Class : Please press 2 \nEconomy Class : Please press 3");
	printf("%s\n", "-----------------------------");
	scanf("%d", &seatLevel);
	printf("row");
	scanf("%d", &seatRow);
	printf("column");
	scanf("%d", &seatColumn);

	switch (seatLevel){
	case 1:
		First[seatRow - 1][seatColumn - 1] = 0;
		break;
	case 2:
		Business[seatRow - seatBusinessStart][seatColumn - 1] = 0;
		break;
	case 3:
		Economy[seatRow - seatEconomyStart][seatColumn - 1] = 0;
		break;
	default:
		printf("Please Enter 1 or 2 or 3");

	}
}



