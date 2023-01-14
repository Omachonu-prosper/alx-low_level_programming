#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a block of memory using malloc and free
 * @ptr: Pointer to previously allocated block of memory
 * @old_size: The size of memory previously allocated
 * @new_size: The new size of memory to be allocated
 *
 * Return: A Pointer to the newly allocated block of memory
 * If new_size = 0 and ptr != NULL return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	for (i = 0; i < old_size; i++)
		new_ptr[i] = ((char *)ptr)[i];
	
	free(ptr);
	return (new_ptr);
}
