#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @idx: index of the list where the new node should be added
 * @n: value to add
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int idxcounter;
	dlistint_t *new, *traverse = *h;

	if (!idx)
		return (add_dnodeint(h, n));

	else
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;

		for (idxcounter = 0; idxcounter < idx - 1; idxcounter++)
			traverse = traverse->next;

		if (!h)
			return (NULL);

		if (!traverse)
			return (NULL);
		new->next = traverse->next;
		if (traverse->next)
			(traverse->next)->prev = new;
		new->prev = traverse;
		traverse->next = new;
		return (new);
	}
}
