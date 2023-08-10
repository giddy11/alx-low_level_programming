#include "main.h"

/**
 * _strlen -  function that returns the length of a string
 *
 * @s: char type pointer
 *
 * Return: string length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer
 *
 * @src: char pointer variable
 * @dest: char pointer variable
 *
 * Return: a sequence of characters
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: char pointer variable
 * @src: char pointer variabe
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * _strncat - concatenate two strings
 * @dest: char pointer string
 * @src: char pointer string
 * @n: number of elements to concatenate
 * Return: pointer to resulting `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0' && n > 0; j++)
	{
		dest[i] = src[j];
		n--;
		i++;
	}

	return (dest);
}

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: a pointer char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0, total_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	total_len = len1 + len2;

	if (n >= len2)
	{
		ptr = malloc((total_len + 1) * sizeof(char));
		if (ptr == NULL)
			return (0);

		_strcpy(ptr, s1);
		_strcat(ptr, s2);

		return (ptr);
	}
	else
	{
		ptr = malloc((len1 + n + 1) * sizeof(char));
		if (ptr == NULL)
			return (0);

		_strcpy(ptr, s1);
		_strncat(ptr, s2, n);

		return (ptr);
	}
}
