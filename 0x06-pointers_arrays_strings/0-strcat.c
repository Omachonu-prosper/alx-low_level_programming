#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination of the strings after being concatenated
 * @src: The string that gets joined with dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
