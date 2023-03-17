#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The starting of the program
 * Return: always true (0)
 *
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_d = n % 10;

	if (last_d > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d);
	else
		printf("Last digit of %d is %d and is 0\n", n, last_d);

	return (0);
}
