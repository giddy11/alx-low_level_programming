#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of pointer integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
