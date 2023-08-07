#include "main.h"
#include <stdlib.h>

/**
 * free2DIntArray - a function that frees the memory.
 * @grid: an array of array pointer
 * @height: the row of the array
 */
void free2DIntArray(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			free2DIntArray(grid, height);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
