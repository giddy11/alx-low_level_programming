#include "main.h"

/**
 * print_sign - Print the sign of a number
 *
 * @n: type int integer, can be negative or positive
 *
 * Return: 1 if + and greater than 0, 0 if equals to 0, -1 if - and less than 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
