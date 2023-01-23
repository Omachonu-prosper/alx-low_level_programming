#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums up all given parameters
 * @n: The number of parameters passed
 *
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_nums;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(my_nums, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(my_nums, int);
	}

	va_end(my_nums);
	return (sum);
}
