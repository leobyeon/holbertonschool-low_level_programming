#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elemcount = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		elemcount++;
	}
	return (elemcount);
}
