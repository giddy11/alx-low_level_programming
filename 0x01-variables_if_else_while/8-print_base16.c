#include <stdio.h>

/**
 * main - The starting of the program
 * Return: always true (0)
 *
 **/

int main(void)
{
	int num;
	char i;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
