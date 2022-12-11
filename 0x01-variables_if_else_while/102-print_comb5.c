#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, n, j, n2;

	for (i = 0, n = 48; i < 10; i++, n++)
	{
		for (j = 0, n2 = 48; j < 10; j++, n2++)
		{
			putchar(n);
			putchar(n2);

			if (!(i == 9 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
