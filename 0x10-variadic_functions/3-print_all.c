#include "variadic_functions.h"

/**
 * print_char - outputs a single character.
 * @arg: A va_list of arguments pointing to
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - displays an integer.
 * @arg: A va_list of arguments pointing to
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - displays a float.
 * @arg: A va_list of arguments pointing to
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - displays a string.
 * @arg: A va_list of arguments pointing to
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Prints a sequence of values, followed by a new line.
 * @format: A string of characters representing the types of arguments.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,or char * will
 *              be disregarded.
 *              If a string argument is NULL, (nil) will be displayed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	fc functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4 && (format[i] != functions[j].sc[0]))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			functions[j].handler_func(args);
			separator = ", ";
		}
		i++;
	}

	printf("\n");

	va_end(args);
}
