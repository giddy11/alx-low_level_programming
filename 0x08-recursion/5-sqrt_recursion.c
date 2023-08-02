#include "main.h"

/**
 * check_pow - checks the power of a number
 * @a: input number
 * @b: iterator.
 * Return: the power of the number or -1.
 */
int check_pow(int a, int b)
{
	if (b > a / b)
		return (-1);
	if (b * b == a)
		return (b);

	return (check_pow(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (check_pow(n, 2));
}
