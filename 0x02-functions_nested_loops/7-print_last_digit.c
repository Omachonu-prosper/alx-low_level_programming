#include "main.h"

/**
 * print_last_digit - Print the last digit of an integer
 * @n: The integer to work with
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
