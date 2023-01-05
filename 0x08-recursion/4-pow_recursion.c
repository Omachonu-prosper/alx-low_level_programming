#include "main.h"

/**
 * _pow_recursion - Calculates the value of a number
 * raised to a certain power
 * @x: The number to be raised to a power
 * @y: The power to be raised by
 *
 * Return: The value of x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
