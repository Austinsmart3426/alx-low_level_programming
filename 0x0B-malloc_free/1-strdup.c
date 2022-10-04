#include "main.h"

#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly
 *  allocated space in memory, which contains
 *  a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: The string duplicated, on success
 * otherwise, null on error
 */

	char *_strdup(char *str)
{
	int i, j;
	char *s;

	i = 0;
	if (str == NULL)
	{
	return (NULL);
	}
	while (str[i])
	{
	i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	j = 0;
	for (; j <= i; j++)
	{
	if (s == NULL)
	{
	return (NULL);
	}
	s[j] = str[j];
	}
	return (s);
}
