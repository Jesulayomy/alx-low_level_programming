#include "main.h"

/**
 * alloc_grid - allocates a grid
 * @width: breadth of the grid
 * @height: length of the grid
 *
 * Return: a pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **mat;
	int *line;
	int r, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	mat = malloc((width * height) * sizeof(int));

	if (mat == NULL)
	{
		free(mat);
		return (NULL);
	}

	for (r = 0; r < height; r++)
	{
		line = malloc(sizeof(int) * width);

		if (line == NULL)
		{
			free(line);
			return (NULL);
		}

		for (c = 0; c < width; c++)
		{
			line[c] = 0;
		}

		mat[r] = line;
	}

	return (mat);
}
