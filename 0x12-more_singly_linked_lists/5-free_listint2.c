#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_listint2 - frees a listint_t list
  * @head: listint_t list to free
  * Return: void; function sets head to NULL
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;

	while (tmp)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
