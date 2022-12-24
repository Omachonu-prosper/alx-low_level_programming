#include "main.h"
#include <ctype.h>

/**
 * rot13 - Encodes a string using rot 13
 * @str: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((isupper(str[i]) && str[i] + 13 <= 90)
				||
				(islower(str[i]) && str[i] + 13 <= 122))
		{
			str[i] = (char) ((int) str[i] + 13);
		}
		else if ((isupper(str[i]) && str[i] + 13 > 90)
				||
				(islower(str[i]) && str[i] + 13 > 122))
		{
			str[i] = (char) ((int) str[i] - 13);
		}
	}

	return (str);
}
