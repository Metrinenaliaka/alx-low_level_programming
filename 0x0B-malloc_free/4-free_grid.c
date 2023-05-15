#include "main.h"
#include <stdlib.h>
/**
 * free_grid- frees a 2 dimensional grid
 * @height: rows
 * @grid: 2d grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	do {
		free(grid[i]);
		i++;
	} while (i < height);
	free(grid);
}
