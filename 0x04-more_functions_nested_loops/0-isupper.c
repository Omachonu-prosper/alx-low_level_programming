#include <ctype.h>
#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase
 * 0 if c is not uppercase
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
