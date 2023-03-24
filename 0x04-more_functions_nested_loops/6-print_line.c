#include <stdio.h>

/**
 * print_line - draw a straight line
 * @n: number of times underscore is printed
 * Description: Can only use _putchar to print
 */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		putchar(95);
	}
	putchar(10);
}
