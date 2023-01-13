#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of the string
 * @str: The string to calculate its length
 *
 * Example: _strlen("Hello") -> 5
 * Return: The length of str
 */
int _strlen(char *str)
{
	int i;
	int str_len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		str_len += 1;
	}

	return (str_len);
}

/**
 * string_nconcat - Concatenates two strings
 * @s1: String to concatenate
 * @s2: String to concatenate n bytes to s1
 * @n: The number of bytes to concatenate from s2
 *
 * Return: A newly allocated memory for the concatenated strings
 * NULL if memory allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *str;
	int s1_len = _strlen(s1);
	int mem_to_alloc = s1_len + n + 2;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	str = malloc(sizeof(char) * mem_to_alloc);
	if (str == NULL)
		return (NULL);

	j = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
		j = i;
	}

	str[j] = ' ';
	j += 1;

	for (i = 0; i < n; i++, j++)
	{
		if (i + 1 == n)
		{
			str[j] = '\0';
		}

		str[j] = s2[i];
	}

	return (str);
}
