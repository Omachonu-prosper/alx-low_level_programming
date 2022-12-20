#include "main.h"
#include <string.h>

/**
 * _puts - Prints out a string followed by a new line to stdout
 * @str: The string to print
 */
void _puts(char *str)
{
	int i;
	int str_len = (int) strlen(str);

	for (i = 0; i < str_len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
