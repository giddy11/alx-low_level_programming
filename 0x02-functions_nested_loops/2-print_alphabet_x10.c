#include "main.h"

/**
 * print_alphabeth_x10 - functions that prints 10x alphabets
 * Return: always 0
*/


void print_alphabet_x10(void)
{
	char j;
	int i;

	i = 0;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
