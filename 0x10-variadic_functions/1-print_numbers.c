#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a new line
 * @seperator: String to be printed between the numbers
 * @n: Number of integers passed to the functions
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list my_nums;

	va_start(my_nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(my_nums, int));

		if (seperator)
		{
			if (n != i + 1)
				printf("%s", seperator);
		}
	}
	printf("\n");
}
