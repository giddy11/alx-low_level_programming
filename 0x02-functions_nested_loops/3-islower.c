#include "main.h"

/**
 * _islower - check for lower cases
 *
 * @c: char type letter
 *
 * Return: Always 0 or 1
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
