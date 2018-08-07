#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @head: listint_t list to add to
  * @n: number to add
  * Return: address of the new element;
  * or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *tmp;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	if (!*head)
		*head = node;
	tmp = *head;

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = node;

	node->n = n;
	node->next = NULL;

	return (node);
}
