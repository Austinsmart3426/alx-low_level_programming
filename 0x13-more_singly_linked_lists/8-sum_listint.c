#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - A function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * Return: redturn 0. Else, sum of all data
 */
	int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
	while (head)
	{
	amount += head->n;
	head = head->next;
	}
	}
	return (amount);
}
