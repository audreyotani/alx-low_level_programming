#include "main.h"
#include <stdlib.h>

/**
 * free_grid - prototype
 * @grid: pointer to a pointer
 * @height: integer
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
