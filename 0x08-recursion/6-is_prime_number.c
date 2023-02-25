#include "main.h"

/**
 * is_prime_number - Checks if a given integer is prime or not
 * @n: The integer to check
 *
 * Return: 1 if the integer is a prime number
 * 0 if the integer is not a prime number
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	if (
