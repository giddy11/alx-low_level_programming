#include <stdio.h>

/**
 * main - The starting of the program
 * Return: always true (0)
 *
 **/

int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		for (b = 0 + 1; b < 9; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');

				if (a == 7 && b == 8 && c == 9)
				continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
