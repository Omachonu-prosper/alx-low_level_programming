#include <stdio.h>

/**
 * main - Print out all lower case alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	int i, a;

	for (i = 26, a = 122; i > 0; i--, a--)
		putchar(a);

	putchar('\n');
	return (0);
}
