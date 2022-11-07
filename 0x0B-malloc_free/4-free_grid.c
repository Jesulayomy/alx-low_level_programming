#include "main.h"

/**
 * free_grid - frees a grid
 * @grid: previously created grid
 * @height: of grid to be freed
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = height - 1; c > -1; c--)
	{
		free(grid[c]);
	}

	free(grid);
}
