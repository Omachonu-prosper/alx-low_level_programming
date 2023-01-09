#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 * initiates it with a special char
 * @size: The size of the array to crete
 * @c: The char to initiate with
 *
 * Return: A pointer to the arry
 * NULL if size is 0 or memory allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *char_arr;

	if (size == 0)
	{
		return (NULL);
	}

	char_arr = malloc(sizeof(char) * size);
	if (char_arr == NULL)
	{
		return (NULL);
	}

	char_arr[0] = c;
	return (char_arr);
}
