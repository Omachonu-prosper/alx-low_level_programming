#include <stdio.h>

/**
 * main - Print all letters of the alphabet
 *
 * Return: 0
 */
int main(void)
{
	int i, a, A;

	for (i = 0, a = 97; i < 26; i++, a++)
	{
		putchar(a);
	}

	for (i = 0, A = 65; i < 26; i++, A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
