#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - A function that
 * inserts a new node at a given position.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @idx: Index location of the new node.
 * @n: The new integer for the new node
 * Return: NULL. Else address of new node
 */
	listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *iter;
	unsigned int count = 1;

	if (head)
	{
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);
	new_node->n = n;
	if (idx > 0)
	{
	iter = *head;
	while (iter)
	{
	if (count == idx)
	{
	new_node->next = iter->next;
	iter->next = new_node;
	return (new_node);
	}
	iter = iter->next;
	count++;
	}
	if (idx > count)
	return (NULL);
	}
	else
	{
	new_node->next = *head;
	*head = new_node;
	}
	return (new_node);
	}
	return (NULL);
}