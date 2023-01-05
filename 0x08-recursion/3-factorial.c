#include "main.h"

/**
 * factorial - Calculates the factorial of a given number
 * @n: The number to work with
 *
 * Return: The factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
