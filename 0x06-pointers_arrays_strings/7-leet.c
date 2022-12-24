#include "main.h"

/**
 * leet - Encodes a string using 1337 encoding
 * @str: The string to be encoded
 *
 * Return: Pointer to the string
 */
char *leet(char *str)
{
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char encoding[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = encoding[j];
			}
		}
	}

	return (str);
}
