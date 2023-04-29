#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to locate
 * Return: NULL if char not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}
