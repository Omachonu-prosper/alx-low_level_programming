#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The number from which to start including
 * @max: The number from which to stop including
 *
 * Return: Pointer to the newly created array
 * NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int i, diff;
	int *num_arr;

	if (min > max)
		return (NULL);

	diff = max - min;
	num_arr = malloc(sizeof(int) * (diff + 1));
	if (num_arr == NULL)
		return (NULL);

	for (i = 0; min == max; i++)
	{
		num_arr[i] = min;
		min += 1;
	}

	return (num_arr);
}
