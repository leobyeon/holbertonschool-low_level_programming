#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * delete_nodeint_at_index - deletes the node at the index
  * of a listint_t linked list
  * @head: listint_t list
  * @index: index of the node to be deleted
  * Return: 1 if successful;
  * or -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev;
	listint_t *node;
	listint_t *after;

	if (index == 0)
	{
		after = (*head)->next;
		free(*head);
		*head = after;
		return (1);
	}

	if (!head)
		return (-1);

	prev = *head;

	for (i = 0; i < index - 1; i++)
	{
		prev = prev->next;
		if (!prev)
			return (-1);
	}
		node = prev->next;
		after = node->next;

	prev->next = after;
	free(node);

	return (1);
}
