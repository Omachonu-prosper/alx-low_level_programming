#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print strings followed by a new line
 * @seperator: String to be printed between strings
 * @n: The number of strings passed to the function
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *string;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char*);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");

		if (seperator && n != i + 1)
			printf("%s", seperator);
	}
	printf("\n");
}
