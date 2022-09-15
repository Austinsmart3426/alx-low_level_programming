#include <stdio.h>
/**
 *  * main -Write a program that prints all the numbers of base 16
 *   * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	int num;

	for (num = 0; num < 16; num++)
	{
	if (num < 10)
	{
	putchar(num + '0');
	}
	else
	{
	putchar(c);
	c++
	}
	}
	putchar('\n');
	return (0);
}
