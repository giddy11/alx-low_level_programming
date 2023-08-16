#include "3-calc.h"

/**
 * op_add - Computes the addition of two numerical values.
 * @a: The initial operand.
 * @b: The secondary operand
 *
 * Return: The result of adding a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Computes the subtraction of two numerical values.
 * @a: The initial operand.
 * @b: The secondary operand
 *
 * Return: The result of subtracting b from a.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Computes the product of two numerical values.
 * @a: The initial operand.
 * @b: The secondary operand
 *
 * Return: The result of multiplying a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
