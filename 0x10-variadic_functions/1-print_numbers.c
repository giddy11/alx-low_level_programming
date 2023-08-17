#include "variadic_functions.h"

/**
 * print_numbers - This function prints each number followed by a separator
 * @separator: The string used to separate numbers in the output.
 * @n: The count of integers passed to the function.
 * @...: A variable quantity of numbers to be displayed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		int res = va_arg(nums, int);

		printf("%d", res);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

}
