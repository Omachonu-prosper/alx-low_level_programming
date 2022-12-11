#include <stdio.h>

/**
 * main - Print 0 - 9 using putchar
 *
 * Return: 0
 */
int main(void)
{
	int i, n;

	for (i = 0, n = 48; i < 10; i++, n++)
		putchar(n);

	putchar('\n');
	return (0);
}
