#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: a string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != 0; i++)
	{
		for (j = 0, k = 0; needle[j] != 0 && haystack[i + k] != 0
			&& haystack[i + k] == needle[j]; j++, k++)
		{
		}

		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (NULL);
}
