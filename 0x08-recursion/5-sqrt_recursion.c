#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to work with
 *
 * Return: The natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	return (sqrt(n));
}
