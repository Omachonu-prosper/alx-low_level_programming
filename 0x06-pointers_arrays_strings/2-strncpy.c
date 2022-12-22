#include "main.h"
#include <string.h>

/**
 * _strncpy - Copy a string
 * @dest: The destination to copy the string to
 * @src: The source of the string to be copied
 * @n: the number of bytes to copy from src
 *
 * Return: Apointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
