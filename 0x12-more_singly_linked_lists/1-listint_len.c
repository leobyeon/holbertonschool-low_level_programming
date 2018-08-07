#include "lists.h"

/**
  * listint_len - returns the number of elements in a linked listint_t list
  * @h: listint_t to get the elements from
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (!h)
		return (count);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
