i#include "main.h"

/**
 *_memset - A program that fills memory with a constant byte
 * @s: particluar area to be filled
 * @b: particular constant to be filled
 * @n: number of bytes of s that is to be filled
 * Return: return pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s;
	unsigned int value = b;

	for (i = 0; i < n; i++)
	{
	memory[i] = value;
	}
	return (memory);
}
