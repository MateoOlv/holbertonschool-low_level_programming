#include "main.h"
/**
 *free_grid - free the grid
 *@grid: the grid
 *@height: the height
 */
void free_grid(int **grid, int height)
{
	unsigned int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
