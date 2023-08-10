#include "main.h"

/**
 * array_range - a function creates an array of integers
 * @min: minimum values
 * @max: maximum values
 * Return: the pointer to the created array
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc((max + 1) * sizeof(int));
	if (!ptr)
		return (NULL);

	for (i = 0; i <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
