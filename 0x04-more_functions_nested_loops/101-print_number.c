#include "main.h"

void print_integer(int m);

/**
 * print_number - a function that prints an integer
 * @n: An input integer
 * Return: Nothing
 */

void print_number(int n)
{
	int divisor;

	divisor = 1;

	/* Handle negative numbers*/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Find the divisor that gives the first digit of n*/
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	/* Print each digit of n*/
	while (divisor != 0)
	{
		_putchar('0' + (n / divisor));
		n %= divisor;
		divisor /= 10;
	}
}
