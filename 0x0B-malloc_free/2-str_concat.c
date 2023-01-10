#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: String to concatenate
 * @s2: String to concatenate
 *
 * Return: NULL on failure
 * A pointer to the newly concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, s3_len;

	if (s1 == NULL)
	{
		s1 = '\0';
	}

	if (s2 == NULL)
	{
		s2 = '\0';
	}

	s3_len = (int) strlen(s1) + strlen(s2);
	s3 = malloc(sizeof(char) * s3_len + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}

	for (i = 0, j = (int) strlen(s1); s2[i] != '\0'; i++, j++)
	{
		s3[j] = s2[i];
	}

	return (s3);
}
