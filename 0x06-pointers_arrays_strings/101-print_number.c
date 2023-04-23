#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: int type var
 *
 * Return: Nothing
 */

void print_number(int n)
{
	int scale;

	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -(n);
	}

	scale  = 1;

	while (n / scale > 9)
	{
		scale *= 10;
	}

	while (scale > 0)
	{
		int digit = n / scale;

		_putchar(digit + '0');

		n -= scale * digit;
		scale /= 10;
	}
}
