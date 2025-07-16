#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid created by alloc_grid
 * @grid: pointer to the 2D array
 * @height: number of rows
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
