#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  a function that frees a 2 dimensional grid.
 *
 * @grid: a pointer to 2D_arr.
 *
 * @height: the height(rows) of th grid.
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
