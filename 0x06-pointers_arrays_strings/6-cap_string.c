#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * cap_string - Capitalizes all words in a string
 * @str: The string to be capitalized
 *
 * Return: A pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int i;

	str[0] = toupper(str[0]);

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == '.' ||
				str[i - 1] == ';' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}')
		{
			str[i] = toupper(str[i]);
		}

		i++;
	}

	return (str);
}
