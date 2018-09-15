#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @index: index of the node
 * @head: pointer to head of list
 * Return: the index, or
 * NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index && head)
	{
		head = head->next;
		index--;
	}
	if (head && !index)
		return (head);
	else
		return (NULL);
}
