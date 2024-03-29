#include "main.h"

/**
 * flip_bits - a func that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: integer n
 * @m: integer m
 * Return: number of bits to needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int flip;

	count = 0;
	flip = n ^ m;
	while (flip)
	{
		count += flip & 1;
		flip >>= 1;
	}
	return (count);
}
