#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Checks if a character is a digit
 * @n: The character to be checked
 *
 * Return: 1 if n is a digit
 * 0 if n is not a digit
 */
int _isdigit(int n)
{
	if (isdigit(n))
		return (1);
	else
		return (0);
}
