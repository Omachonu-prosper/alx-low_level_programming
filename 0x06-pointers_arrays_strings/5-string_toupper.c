#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Turn all letters in a string to uppercase
 * @str: The string to work on
 *
 * Return: Pointer to the capitalized string
 */
char *string_toupper(char *str)
{
	int i;
	int str_len = (int) sizeof(str);

	for (i = 0; i < str_len; i++)
	{
		str[i] = toupper(str[i]);
	}

	return (str);
}
