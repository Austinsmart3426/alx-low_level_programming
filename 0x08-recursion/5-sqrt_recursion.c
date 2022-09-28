#include "main.h"
/**
 *_sqrt_recursion - finds the natural sqrt of a number
 * @n: integer
 * Return: n
 */
	int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - To get the square root
 * @n: integer value of square root
 * @val: square root
 * Return: int
 */
	int square(int n, int val)
{
	if (val * val == n)
	return (val);
	else if (val * val < n)
	return (square(n, val + 1));
	else
	return (-1);
}
