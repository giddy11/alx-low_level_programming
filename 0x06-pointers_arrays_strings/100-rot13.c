#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @str: pointer to string params
 * Return: *str
 */

char *rot13(char *str)
{
	int i, j;
	char alphabeth[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_alphabeth[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabeth[j])
			{
				str[i] = rot_alphabeth[j];
				break;
			}
		}
	}
	return (str);
}
