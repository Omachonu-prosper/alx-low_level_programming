#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: The array to search from
 * @size: The size of the array
 * @cmp: A pointer to a function to be used to compare values
 *
 * Return: The index of the searched integer if no errors
 * are encountered and -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, funct;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		funct = cmp(array[i]);
		if (funct != 0)
			return (i);
	}

	return (-1);
}
