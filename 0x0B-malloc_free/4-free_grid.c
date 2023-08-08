#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees memory
 * @grid: pointer to grid of int type
 * @height: int type
 * Return: cleared memory
 */

void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (y = 0; y < height;  y++)
	{
		free(grid[y]);
	}
	free(grid);
}
