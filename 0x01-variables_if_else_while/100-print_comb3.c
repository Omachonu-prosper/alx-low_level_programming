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
		for (j = i + 1, n2 = n + 1; j < 10; j++, n2++)
		{
			putchar(n);
			putchar(n2);

			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
