#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 - 9
 * Do not print 2 and 4
 */
void print_most_numbers(void)
{
	int i, a;

	for (i = 0, a = 48; i < 10; i++, a++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}

		_putchar(a);
	}

	_putchar('\n');
}
