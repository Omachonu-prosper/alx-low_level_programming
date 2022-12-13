#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int j, i, a;

	j = 0;

	while (j < 10)
	{
		for (i = 0, a = 97; i < 26; i++, a++)
			_putchar(a);

		_putchar('\n');
		j++;
	}
}
