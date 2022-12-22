#include "main.h"

/**
 * reverse_array - Reverses the contents of an array
 * @a: The array to reverse
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < (n / 2); i++, j--)
	{
		if (i != j)
		{
			tmp = a[j];
			a[j] = a[i];
			a[i] = tmp;
		}
	}
}
