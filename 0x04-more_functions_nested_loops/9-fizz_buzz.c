#include <stdio.h>

/**
 * main - main block
 * Description: Print Fizz and Buzz for multiple of 3 and 5 respectively
 * Print FizzBuzz for multiples of 3 and five
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
