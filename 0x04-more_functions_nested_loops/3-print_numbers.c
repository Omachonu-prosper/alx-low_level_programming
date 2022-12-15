#include "main.h"

/**
 * print_numbers - Print numbers from 0 - 9
 */
void print_numbers(void)
{
	int i, a;

	for (i = 0, a = 48; i < 10; i++, a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
