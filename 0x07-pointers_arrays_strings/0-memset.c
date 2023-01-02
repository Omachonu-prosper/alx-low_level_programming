#include "main.h"
#include <string.h>

/**
 * _memset - Fill memory with a constant byte
 * @s: The pointer to the byte to be filled
 * @b: The constant byte to be filled with
 * @n: The size of the byte in s to fill
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
