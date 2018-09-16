#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to head of list
 * @index: index at which to delete
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idxcounter;
	dlistint_t *traverse = *head;

	if (!*head)
		return (-1);

	if (!index)
		*head = traverse->next;
	else
	{
		for (idxcounter = 0; idxcounter < index && traverse; idxcounter++)
			traverse = traverse->next;
		if (!traverse)
			return (-1);

		(traverse->prev)->next = traverse->next;
	}

	if (traverse->next)
		(traverse->next)->prev = traverse->prev;

	free(traverse);
	return (1);
}
