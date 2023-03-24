#include "main.h"

/**
 * print_numbers - a function that prints the numbers, 0-9
 * Return: nothing
 */

void print_numbers(void)
{
	int i;
	char num_char;

	for (i = 0; i < 10; i++)
	{
		num_char = i + '0';
		_putchar(num_char);
	}
	_putchar('\n');
}