#include "main.h"

/**
 * print_to_98 - Print all natural numbers from n up or down to 98
 * @n: The number to start the print from
 */
void print_to_98(int n)
{
	if (n < 0)
		return;
	else if (n < 98)
	{
		for (; n < 99; n++)
		{
			printf("%d", n);

			if (n != 98)
				printf(", ");
		}

		printf("\n");
	}
	else if (n > 98)
	{
		for (; n > 97; n--)
		{
			printf("%d", n);

			if (n != 98)
				printf(", ");
		}

		printf("\n");
	}
	else
		printf("%d\n", n);
}
