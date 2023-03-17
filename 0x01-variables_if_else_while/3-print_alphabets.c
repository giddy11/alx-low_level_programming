#include <stdio.h>

/**
 * main - The starting of the program
 * Return: always true (0)
 *
 **/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);

	for (i = 65; i <= 90; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
