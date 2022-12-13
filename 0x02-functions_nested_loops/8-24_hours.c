#include "main.h"

/**
 * jack_bauer - Prints every minute of the day froom 0 to 23:59
 */
void jack_bauer(void)
{
	int i, n1, j, n2, k, n3, l, n4;

	for (i = 0, n1 = 48; i < 3; i++, n1++)
	{
		for (j = 0, n2 = 48; j < 10; j++, n2++)
		{
			for (k = 0, n3 = 48; k < 6; k++, n3++)
			{
			       for (l = 0, n4 = 48; l < 10; l++, n4++)
			       {
				       _putchar(n1);
				       _putchar(n2);
				       _putchar(':');
				       _putchar(n3);
				       _putchar(n4);
				       _putchar('\n');

				       if (i == 2 && j == 3 && k == 5 && l == 9)
					       return;
			       }
			}
		}
	}
}
