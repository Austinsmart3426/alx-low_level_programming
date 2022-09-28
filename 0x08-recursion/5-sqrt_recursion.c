#include "main.h"
/**
 * _sqrt_recursion - A function that finds the natural sqrt of a number
 * @n: integer
 * Return: n
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - fid square root
 * @n: int to find sqrt
 * @val: sqrt
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
