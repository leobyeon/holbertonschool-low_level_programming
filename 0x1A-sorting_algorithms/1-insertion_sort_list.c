#include "sort.h"

/**
 * insertion_sort_list - sort doubly linked list with insertion sort
 * algorithm.
 * @list: doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *move, *temp, *next_move, *tprev;

	if (!list || !*list || (*list)->next == NULL)
		return;
	move = *list;
	next_move = move->next;
	while (move)
	{
		temp = move->prev;
		next_move = move->next;
		while (temp)
		{
			tprev = temp->prev;
			if (move->n < temp->n)
			{
				if (move->next)
					move->next->prev = temp;
				temp->next = move->next;
				move->prev = temp->prev;
				move->next = temp;
				if (temp->prev)
					temp->prev->next = move;
				temp->prev = move;
				if (!move->prev)
					*list = move;
				print_list(*list);
			}
			temp = tprev;
		}
		move = next_move;
	}
}
