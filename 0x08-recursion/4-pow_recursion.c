#include "main.h"
/**
 *_pow_recursion - A function that returns
 the value of x**y.
 * @x: value
 * @y: power
 * Return: y < 0 = -1, x**y = 0
 */
	int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));
}
