#include "main.h"

/**
 * a function that swaps the values of two integer
 * swap_int - swaps interger
 * @a: parameter a
 * @b: parameter b
 *
 *Return: 0
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
