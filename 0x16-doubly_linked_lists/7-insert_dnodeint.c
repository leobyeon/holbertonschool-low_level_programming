#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @idx: index of the list where the new node should be added
 * @n: value to add
 * Return: address of the new node, or
 * NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int idxcounter;
	dlistint_t *new;
	dlistint_t *traverse;

	traverse = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	for (idxcounter = 0; idxcounter < idx-1; idxcounter++)
	{
		traverse = traverse->next;
	}

	if (!*h)
	{
		*h = new;
	}
	else
	{
		if (traverse->next && idx != 0)
		{
			new->next = traverse->next;
			(traverse->next)->prev = new;
			traverse->next = new;
			new->prev = traverse;
			traverse = new;
		}
		else if (!traverse->next && idx != 0)
		{
			traverse->next = new;
			new->prev = traverse;
			traverse = new;
		}
	}
	return (new);
}
