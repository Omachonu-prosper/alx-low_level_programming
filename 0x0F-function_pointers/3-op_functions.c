#include "3-calc.h"

/**
 * op_add - Sum of a and b
 * @a: Number to sum up
 * @b: Number to sum up
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract a and b
 * @a: Number to subtract
 * @b: Number to subtract
 *
 * Return: Differrence of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply a and b
 * @a: Number to multiply
 * @b: Number to multiply
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide a and b
 * @a: Number to divide
 * @b: Number to divide
 *
 * Return: Division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulus of a and b
 * @a: Number to divide
 * @b: Number to divide by
 *
 * Return: The remainder of dividing a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
