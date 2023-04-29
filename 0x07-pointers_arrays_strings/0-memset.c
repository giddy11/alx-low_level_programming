#include "main.h"

/**
 * _memset - a function fills the memory with a constant byte
 * @s: memory pointer area
 * @b: constant byte
 * @n: size of the buffer
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
