#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  This function calculates and returns the sum of its
 *		 multiple parameters.
 * @n: The count of parameters provided to the function.
 * @...: A variable quantity of parameters for which the sum is computed.
 *
 * Return: If n is 0, the return value is 0; otherwise, it sums all the
 *		provided parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n <= 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
