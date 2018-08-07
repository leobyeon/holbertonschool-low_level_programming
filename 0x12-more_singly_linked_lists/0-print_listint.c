#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints all the elements of a listint_t list
  * @h: the listint_t list to print
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (!h)
		return (count);
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
