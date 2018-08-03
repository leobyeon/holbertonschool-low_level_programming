#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * free_list - frees a list_t list
  * @head: pointer to the first element in the list
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
