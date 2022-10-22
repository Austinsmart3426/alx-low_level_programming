#include "lists.h"

/**
 * list_len - A function that returns the numbers of
 * elements in a linked list_t list
 * @h: pointer to the linked list_t
 * Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
	n++;
	h = h->next;
	}
	return (n);
}
