#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem_alloc;

	mem_alloc = malloc(b);
	if (mem_alloc == NULL)
		exit(98);

	return (mem_alloc);
}
