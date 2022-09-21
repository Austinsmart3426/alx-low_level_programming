#include "main.h"

/**
 * puts2 - a function that prints every other
 *  character of a string, starting with
 *  the first character, followed by a new line
 * @str: string to print the chars from
 */

	void puts2(char *str)
{
	int lent, i;

	lent = 0;

	while (str[lent] != '\0')
	{
	lent++;
	}
	for (i = 0; i < lent; i += 2)
	{
	_putchar(str[i]);
	}

	_putchar('\n');
}
