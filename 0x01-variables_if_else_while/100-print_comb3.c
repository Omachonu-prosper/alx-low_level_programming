#include <stdio.h>

/**
 * main - Print 0 - 9 using putchar
 *
 * Return: 0
 */
int main(void)
{
	int i, n, j, n2;

	for (i = 0, n = 48; i < 9; i++, n++)
	{
		for (j = 0, n2 = 49; j < 9; j++, n2++)
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
