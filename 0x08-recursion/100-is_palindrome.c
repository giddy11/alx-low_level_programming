#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * Compare_Even - compares characters when string length is even.
 * @s: string
 * @div1: smallest iterator.
 * @div2: biggest iterator.
 * @count: number of iteration.
 * Return: .
 */
int Compare_Even(char *s, int div1, int div2, int count)
{
	if (*(s + div1) == *(s + (div2 - 1)) && *(s + div1) != 0)
	{
		count++;
		return (Compare_Even(s, div1 + 1, div2 - 1, count));
	}
	if (count * 2 == div1)
	{
		return (1);
	}
	else
		return (0);
}


/**
 * Compare_Odd - compares characters when string length is odd.
 * @s: string
 * @div1: smallest iterator.
 * @div2: biggest iterator.
 * @count: number of iteration.
 * Return: .
 */
int Compare_Odd(char *s, int div1, int div2, int count)
{
	if (*(s + div1) == *(s + div2) && *(s + div1) != 0)
	{
		count++;
		return (Compare_Odd(s, div1 - 1, div2 + 1, count));
	}
	if ((count * 2) + 1 == div2)
	{
		return (1);
	}
	else
		return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length, div, div1, div2, count;

	length = _strlen_recursion(s);
	div = (length / 2);
	div1 = div;
	div2 = div;
	count = 0;

	if (length == 0 || length == 1)
		return (1);
	else if (length % 2 == 0)
	{
		div1 = div = div2;
		return (Compare_Even(s, div1, div2, count));
	}
	else
	{
		div1 = div - 1;
		div2 = div + 1;
		return (Compare_Odd(s, div1, div2, count));
	}
}

