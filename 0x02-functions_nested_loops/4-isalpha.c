#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet
 * @c: The character to check
 *
 * Return: 1 if the character is an alphabet
 *	   0 if the character is not an alphatet
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
