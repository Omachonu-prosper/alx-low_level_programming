#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, n, j, n2, k, n3;

	for (i = 0, n = 48; i < 10; i++, n++)
	{
		for (j = i + 1, n2 = n + 1; j < 10; j++, n2++)
		{
			for (k = j + 1, n3 = n2 + 1; k < 10; k++, n3++)
			{
				putchar(n);
				putchar(n2);
				putchar(n3);

				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
