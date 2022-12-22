#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings
 * @dest: The destination of the strings after being concatenated
 * @src: The string that gets joined with dest
 * @n: The number of bytes to write for src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
