#include <stdio.h>

/**
 * main - The starting of the program
 * Return: always true (0)
 *
 **/

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '9')
		{
			putchar(num);
		}
		putchar(num);
		putchar(',');
		putchar(' ');
	}

	return (0);
}
