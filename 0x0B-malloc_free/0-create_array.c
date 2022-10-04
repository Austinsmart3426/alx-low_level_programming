#include "main.h"

#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array for the program
 * @c: character data type 
 * Return: character created,
 * or NULL on error
 */

	char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *w;

	i = 0;
	w = malloc(sizeof(char) * size);
	if (size == 0 || w == NULL)
	{
	return (NULL);
	}
	while (i < size)
	{
	w[i] = c;
	i++;
	}
	w[i] = '\0';
	return (w);
}
