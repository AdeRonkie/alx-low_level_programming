#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees a previously created 2d grid
 * @grid: 2d grid to free
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
