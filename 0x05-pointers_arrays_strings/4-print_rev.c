#include "main.h"
#include <string.h>

/**
 * print_rev - Print a string in reverse
 * @s: The string to print
 */
void print_rev(char *s)
{
	int i;
	int str_len = (int) strlen(s);

	for (i = str_len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
