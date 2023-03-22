#include "main.h"

/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */

void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int product;

			product  = i * j;
			if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product < 100)
			{
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
			{
				_putchar(product / 100 + '0');
				_putchar(product / 10 % 10 + '0');
				_putchar(product % 10 + '0');
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
