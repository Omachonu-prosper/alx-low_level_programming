#include "main.h"

/**
 * swap_int - Swap the values of two integers
 * @a: Integer one to be swapped
 * @b: Integer two to be swapped
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
