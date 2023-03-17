#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The starting of the program
 * Return: always true (0)
 *
 **/

int main(void)
{
	char letter = 'a';

	while (letter != 'q' && letter != 'e' && letter <= 'z')
		putchar(letter);

	putchar('\n');

	return (0);
}
