#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i, a, j;
	int b = 49;

	for (i = 0; i < 10; i++)
	{
		for (j = 0, a = 48; j < 15; j++, a++)
		{
			if (j == 10)
			{
				a = 48;
			}

			if (j > 9)
			{
				_putchar(b);
			}

			_putchar(a);
		}

		_putchar('\n');
	}
}
