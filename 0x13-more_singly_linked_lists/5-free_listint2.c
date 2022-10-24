#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 */
	void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
	while (*head)
	{
	temp = (*head);
	*head = (*head)->next;
	free(temp);
	}
	}
	else
	{
	return;
	}
	free(*head);
	head = 0;
}
