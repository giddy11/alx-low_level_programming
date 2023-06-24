#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix
 * @a: 2D array of int types
 * @size: size of array (square)
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sum, sizer;

	sizer = size * size;
	sum = 0;

	for (i = 0; i <= sizer;)
	{
		sum += a[i];
		if (i < 1)
			i += size = 1;
		else
			i += size + 1;
	}
	printf("%d, ", sum);

	sum = 0;
	for (i = sizer - size; i > 0;)
	{
		sum += a[i];
		i = i - (size - 1);
	}
	printf("%d\n", sum);
}
