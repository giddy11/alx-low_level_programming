#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add 2 positive numbers and print the result
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: If no number is passed to program, print 0.
 * If one of the numbers contain non-digits, print Error.
 * Return: 1 if error, 0 if function runs properly.
 */

int main(int argc, char *argv[])
{
	int i, j, result, start_index;

	result = 0;

	if (argc == 1)
		printf("%d\n", result);
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *check_string = *(argv + i);

			start_index = (*check_string == '-' || *check_string == '+') ? 1 : 0;

			for (j = start_index; check_string[j] != 0; j++)
			{
				if (check_string[j] < 48 || check_string[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			result = result + atoi(check_string);
		}
		printf("%d\n", result);
	}

	return (0);
}
