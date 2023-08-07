#include "main.h"

/**
 * _strlen -  function that returns the length of a string
 * @str: char type pointer
 * Return: string length of the string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
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
 * str_concat - concatenate two strings using malloc
 * @s1: first string
 * @s2: second string
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, total_len;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	total_len = len1 + len2;

	ptr = malloc((total_len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	_strcpy(ptr, s1);
	_strcat(ptr, s2);

	return (ptr);
}
