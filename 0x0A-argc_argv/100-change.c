#include "main.h"
#include <stdlib.h>

/**
 * CalculateMinCoins - print the number of coins to make change
 * @cents: amount in cents
 * Return: return number of cents
 */
int CalculateMinCoins(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_of_coins = sizeof(coins) / sizeof(coins[0]);
	int count = 0;
	int i;

	for (i = 0; i < num_of_coins; i++)
	{
		count += cents / coins[i];
		cents %= coins[i];
	}
	return (count);
}

/**
 * main - print the min number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 1 if error, 0 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int cent = atoi(*(argv + 1));

		if (cent < 0)
			printf("0\n");
		else
		{
			int number_of_change = CalculateMinCoins(cent);

			printf("%d\n", number_of_change);
		}
	}

	return (0);
}
