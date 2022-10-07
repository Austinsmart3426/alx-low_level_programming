#include "main.h"

/**
 * _calloc - A function that allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of the memory block to be allocated
 * Return: poiner to the address of the memory block
 */
	void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;

	unsigned int m;

	if (nmemb == 0 || size == 0)
	return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
	for (m = 0; m < (nmemb * size); m++)
	block[m] = 0;
	return (block);
	}
	else
	return (NULL);
}
