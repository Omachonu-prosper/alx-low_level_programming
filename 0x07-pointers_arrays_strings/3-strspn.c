#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to work with
 * @accept: The substring to find its length
 *
 * Return: Number of bytes in the initial segment of s
 * which consists of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
