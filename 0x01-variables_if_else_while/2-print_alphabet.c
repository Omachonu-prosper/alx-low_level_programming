#include <stdio.h>

/**
 * main - Print out all lower case letters of the alphabet
 *
 * Return: 0
 */
int main(void)
{
	int i, a;

	for (i = 0, a = 97; i < 26; i++, a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
