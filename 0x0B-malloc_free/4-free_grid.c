#include "main.h"

#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: the address of the two dimension array
 * @height: the height of the grid
 * Return: void
 */

	void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	free(grid[m]);
	free(grid);
}
