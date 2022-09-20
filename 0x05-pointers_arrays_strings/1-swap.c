#include "main.h"

/**
 * a function that swaps the values of two integer
 * @a: parameter a
 *   * @b: parameter b
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
