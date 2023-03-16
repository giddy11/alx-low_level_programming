#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0
 */

int main(void)
{
	puts("Size of a char: %c byte(s)", sizeof(char));
	puts("Size of an int: %d byte(s)", sizeof(int));
	puts("Size of a long int: %u byte(s)", sizeof(long int));
	puts("Size of a long long int: %lld byte(s)", sizeof(long long int));
	puts("Size of a float: %f byte(s)", sizeof(float));
	return (0);
}
