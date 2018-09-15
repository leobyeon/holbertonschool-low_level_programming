#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to head of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (tmp)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
