#include "main.h"

/**
 * array_range - A function that creates an array of integers
 * @min: smallest number in the array
 * @max: lagrest value in the array
 * Return: pointer to the address of the memory block
 */

	int *array_range(int min, int max)
{
	int *block;

	int m, n = 0;

	if (min > max)
	return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
	for (m = min; m <= max; m++)
	{
	block[n] = m;
	n++;
	}
	return (block);
	}
	else
	return (NULL);
}
