#include <stdio.h>
#include "lists.h"

/**
 * listint_len - A function that adds a new
 *   node at the beginning of a listint_t list.
 * @h: The head of the linked list
 * Return: The number of elements in a linked list
 */
	size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
	while (h)
	{
	h = h->next;
	count++;
	}
	}

	return (count);
}
