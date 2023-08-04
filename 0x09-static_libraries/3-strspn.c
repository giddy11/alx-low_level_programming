#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 *
 * Return: Number of bytes in 'i' which is the variable
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;

	for (; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == 0)
		{
			return (i);
		}
	}

	return (i);
}
