#include "main.h"
/**
 * free_grid - frees a grid
 * @height: height of the grid
 * @grid: grid
 */
void free_grid(int **grid, int height)
{
	for (height--; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
