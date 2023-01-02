#include "main.h"
#include <string.h>

/**
 * _strchr - Locates a character in a string
 * @s: The string to work with
 * @c: The character to locate
 *
 * Return: A pointer to the first occurence of the
 * character in the string
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
