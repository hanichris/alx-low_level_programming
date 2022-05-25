#include "3-calc.h"

/**
 * op_add - Add two integers.
 * @a: first operand.
 * @b: second operand.
 * Return: Result of addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers.
 * @a: first operand.
 * @b: second operand.
 * Return: Result of subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers.
 * @a: first operand.
 * @b: second operand.
 * Return: Result of the multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - perform division operation a / b.
 * @a: dividend.
 * @b: divisor.
 * Return: Quotient of the operation.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - perform modulus operation a % b.
 * @a: dividend.
 * @b: divisor.
 * Return: Remainder of the operation.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
