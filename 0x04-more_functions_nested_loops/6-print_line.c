#include "main.h"

/**
 * print_line - Draw a straight line in the terminal
 * @n: The length of the line
 */
void print_line(int n)
{
	int i;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
