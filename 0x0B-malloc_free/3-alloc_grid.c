#include <stdlib.h>

#include "main.h"

/**
 * alloc_grid - A function that returns a
 * pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */

	int **alloc_grid(int width, int height)
{
	int **grid;

	int k, l;

	if (width <= 0 || height <= 0)
	return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	return (NULL);
	for (k = 0; k < height; k++) /*This shows  malloc for each row*/
	{
	grid[k] = malloc(width * sizeof(int));
	if (grid[k] == NULL) /*confirmed memory*/
	{
	for (k = 0; k < height; k++)
	free(grid[k]);
	free(grid);
	return (NULL);
	}
	for (l = 0; l < width; l++) /* assign zero to array values */
	grid[k][l] = 0;
	}
	return (grid);
}
