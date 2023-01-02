#include "main.h"
#include <string.h>

/**
 * _strpbrk - Searches a string for a set of bytes
 * @s: the string to search
 * @accept: The set of bytes to search for
 *
 * Return: A pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
