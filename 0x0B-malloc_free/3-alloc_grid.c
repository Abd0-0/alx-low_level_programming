#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2D_array of ints.
 *
 * @width: the width of the grid.
 * @height: the height of hte grid.
 *
 * Return: a pointer to the 2D_array, or NULL.
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	int **ptr = (int **)malloc(height * sizeof(int *));
	
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));

		if (*(ptr + i) == NULL)
			return (NULL);
		
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = '0';
		}
	}

	return (ptr);
}
