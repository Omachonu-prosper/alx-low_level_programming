#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to print in reverse
 */
void _print_rev_recursion(char *s)
{
	int i = strlen(s);

	for (; i >= 0; i--)
		_putchar(s[i]);
}
