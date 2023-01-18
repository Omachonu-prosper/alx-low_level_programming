#include "function_pointers.h"

/**
 * array_iterator - Execute a function on all array elements
 * @array: The array to work with
 * @size: The size of the array
 * @action: The pointer to the function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
