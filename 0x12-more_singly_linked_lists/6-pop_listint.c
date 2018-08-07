#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * pop_listint - deletes the head node of a listint_t linked list,
  * and returns the head node’s data (n)
  * @head: listint_t list to delete from
  * Return: the head node's data (n);
  * or 0 if the linked list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!*head)
		return (0);
	tmp = *head;
	num = (*head)->n;
	free(tmp);
	*head = (*head)->next;

	return (num);
}
