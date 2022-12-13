#include "main.h"

/**
 * print_alphabet - Prints tha alphabets in lowercase
 */
void print_alphabet(void)
{
	int i, a;

	for (i = 0, a = 97; i < 26; i++, a++)
		_putchar(a);

	_putchar('\n');
}
