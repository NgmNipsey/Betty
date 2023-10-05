#include "main.h"

/**
 * free_grid - free memory that has been used.
 * @grid: grid.
 * @height: height of the array.
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
