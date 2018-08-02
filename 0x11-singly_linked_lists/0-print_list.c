#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_list - prints all the elements of a list_t list
  * @h: pointer to the first element in the list_t list
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	unsigned int listnum = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		listnum++;
	}
		
	return (listnum);
}
