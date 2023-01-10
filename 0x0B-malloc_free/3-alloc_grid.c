#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Makes a pointer to a 2 dimentional
 * array of integers
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: A pointer to a 2 dimentional array
 * NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **y;
	int *x;
	int i, j;

	y = malloc(sizeof(int) * height);
	if (y == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		x = malloc(sizeof(int) * width);
		if (x == NULL)
			return (NULL);

		y[i] = x;

		for (j = 0; j < width; j++)
			x[j] = 0;
	}

	return (y);
}
