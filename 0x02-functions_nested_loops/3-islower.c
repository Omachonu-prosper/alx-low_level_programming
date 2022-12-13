#include "main.h"

/**
 * _islower - Checks for lowercase characters
 * @c: The character to run the check on
 *
 * Return: 1 if character is lower
 *	   0 if character is not lower
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
