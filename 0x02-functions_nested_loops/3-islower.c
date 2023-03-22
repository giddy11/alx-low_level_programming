#include "main.h"

/**
 * _isLower - check for lower cases
 *
 * @c: char type letter
 *
 * Return: Always 0 or 1
 *
 */

int _isLower(int c)
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
