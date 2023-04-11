#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a two dimensional array of integers
 * @width: integer
 * @height: integer
 *
 * Return: 2d array of integers, NULL on failure or if height or width is zero
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	if (width == 0 && height == 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	/* outer loop to access row/height values */
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		/* inner loop to access column/width values */
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
