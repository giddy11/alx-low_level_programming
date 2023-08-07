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
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *ptr;
	int len;

	len = _strlen(str);

	if (str == NULL)
		return (NULL);

	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	_strcpy(ptr, str);

	return (ptr);
}
