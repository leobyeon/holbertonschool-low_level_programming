#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * sum_listint - returns the sum of all the data (n) of a
  * listint_t linked list
  * @head: the listint_t linked list
  * Return: the sum;
  * or 0 if the list is empty
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
