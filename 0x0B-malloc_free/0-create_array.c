#include "main.h"

/**
 * create_array - create an array of chars, and initialize it
 * @size: size of the array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
