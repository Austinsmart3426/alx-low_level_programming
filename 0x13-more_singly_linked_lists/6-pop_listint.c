#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - A  a function that deletes the head
 * node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: A pointer, pointing to
 * the address of the
 * head of the listint_t list.
 * Return: return Nothing if the link is empty
 * else return n
 */
	int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
	new_head = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = new_head;
	}
	return (n);
}
