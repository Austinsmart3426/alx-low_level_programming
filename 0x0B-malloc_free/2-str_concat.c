#include "main.h"

#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: return a pointer to the string concatenated
 */

	char *str_concat(char *s1, char *s2)
{
	char *concat;

	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (*(s1 + i))
	len1++, i++;
	while (*(s2 + j))
	len2++, j++;
	len2++;
	concat = malloc(sizeof(char) * (len1 + len2)); /*allocate memory
* to the function
*/
	if (concat == NULL) /* validate memory */
	return (NULL);
	i = 0, j = 0;
	while (i < len1) /* concat*/
	{
	*(concat + i) = *(s1 + i);
	i++;
	}
	while (j < len2)
	{
	*(concat + i) = *(s2 + j);
	i++, j++;
	}
	return (concat);
}
