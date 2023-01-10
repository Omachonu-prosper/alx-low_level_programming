#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - Allocate space in memory and copy a new
 * version of the string passed to th eallocated space
 * @str: The string to duplicate
 *
 * Return: NULL if str is NULL
 * NULL if insuficient memory is available
 * else
 * A pointer to the newly duplicated string
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	dup_str = malloc(sizeof(char) * strlen(str) + 1);
	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (int) strlen(str); i++)
	{
		dup_str[i] = str[i];
	}

	return (dup_str);
}
