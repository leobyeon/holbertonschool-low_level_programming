#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: listint_t list
  * @idx: index of the list where n should be added
  * @n: number to insert
  * Return: address of the new node;
  * or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *prev;
	listint_t *node;
	listint_t *after;

	prev = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (*head);
	}
	for (i = 0; i < idx-1; i++)
	{
		prev = prev->next;
		if (!prev)
			return (NULL);
	}
	after = prev->next;
	prev->next = node;
	node->next = after;

	return (node);
}
