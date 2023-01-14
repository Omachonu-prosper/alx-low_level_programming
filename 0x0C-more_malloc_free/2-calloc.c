#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: The number of elements in the array
 * @size: The size of each element in the array
 *
 * Return: If size = 0 or memory allocation fails
 * return NULL
 * Returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem_arr;

	if (size == 0)
		return (NULL);

	mem_arr = malloc(nmemb * size);
	if (mem_arr == NULL)
		return (NULL);
	
	for (i = 0; i < (nmemb * size); i++)
		mem_arr[i] = 0;

	return (mem_arr);
}
