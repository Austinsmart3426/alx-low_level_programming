#include "main.h"

/**
 *   * _isupper - is a function that checks if alphabet is uppercase
 *     *
 *       * @c: takes in prameter c and checks
 *         *
 *           * Return: Always return 0 or 1
 *             *
 */
int _isupper(int c)
{
	int tmp;

	if (c >= 65 && c <= 90)
	tmp = 1;
	else
	tmp = 0;
	return (tmp);
}
