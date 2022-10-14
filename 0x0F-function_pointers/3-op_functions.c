#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @m: first integer
 * @n: second integer
 * Return: sum of m and n
 */
	int op_add(int m, int n)
{
		return (m + n);
}

/**
 * op_sub - calculates the difference of two integers
 * @m: first integer
 * @n: second integer
 * Return: difference of m and n
 */
	int op_sub(int m, int n)
{
	return (m - n);
}

/**
 * op_mul - calculates the product of two integers
 * @m: first integer
 * @n: second integer
 * Return: product of m and n
 */
	int op_mul(int m, int n)
{
	return (m * n);
}

/**
 * op_div - calculates the division of two integers
 * @m: first integer
 * @n: second integer
 * Return: result of the division of m and n
 */
	int op_div(int m, int n)
{
	return (m / n);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @m: first integer
 * @n: second integer
 * Return: remainder of m divided n
 */
	int op_mod(int m, int n)
{
	return (m % n);
}
