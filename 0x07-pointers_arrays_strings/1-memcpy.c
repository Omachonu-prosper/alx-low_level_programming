#include "main.h"
#include <string.h>

/**
 * _memcpy - Copies areas in memory
 * @src: The source to copy memory area froom
 * @dest: The destination to copy memory to
 * @n: The amount of memory to copy from src to dest
 *
 * Return: Apointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
