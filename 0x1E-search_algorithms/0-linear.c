#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in an array using Linear search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return:
 * the first index wherre value is located
 * if value is not present or array is NULL return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	
	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
