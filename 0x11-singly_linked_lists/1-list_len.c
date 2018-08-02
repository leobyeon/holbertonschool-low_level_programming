#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * list_len - returns the number of elements in a linked list_t list
  * @h: pointer to the first element in the list_t list
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
