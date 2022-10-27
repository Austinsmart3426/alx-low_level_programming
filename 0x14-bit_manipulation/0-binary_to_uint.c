#include "main.h"

/**
 * binary_to_uint - A function that converts a
 * binary number to an unsigned int
 * @b: pointer to the binary
 *
 * Return: the converted number, or 0 if b is NULL
 * or contains chars different from 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, m = 0;

	if (!b)
		return (0);
	while (b[m])
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		num <<= 1;
		num += b[m] - '0';
		m++;
	}
	return (num);
}
