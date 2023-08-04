#include "main.h"
#include <stdlib.h>

/**
 * main - multiply 2 numbers passed to main, or Error
 * @argc: argument count
 * @argv: argument array of strings
 * Return: 1 if error, 0 if function runs correctly
 */

int main(int argc, char *argv[])
{
	int i, result;

	result = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			int x = atoi(*(argv + i));

			result = result * x;
		}
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
