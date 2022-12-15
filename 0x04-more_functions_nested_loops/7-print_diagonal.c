#include "main.h"

/**
 * print_diagonal - Draw a diagonal line in the terminal
 * @n: The length of the line
 */
void print_diagonal(int n)
{
	int i;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar(92);
		_putchar('\n');
	}
}
