#include <stdio.h>

/**
 * main - Print all letters of hexadecimal
 *
 * Return: 0
 */
int main(void)
{
	int i, n, a;

	for (i = 0, n = 48; i < 10; i++, n++)
		putchar(n);

	for (i = 0, a = 97; i < 6; i++, a++)
		putchar(a);

	putchar('\n');
	return (0);
}
