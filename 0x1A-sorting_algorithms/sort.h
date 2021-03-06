#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	    const int n;
		    struct listint_s *prev;
			    struct listint_s *next;
} listint_t;

/* sorting algorithms */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
/* lomuto quick sort helpers */
void sort_helper(int *array, int front, int back, size_t size);
int pivot_point(int *array, int front, int back, size_t size);
void shell_sort(int *array, size_t size);
/* hoare quick sort helpers */
void hoare_helper_sort(int *array, int front, int back, size_t size);
int hoare_pivot_point(int *array, int front, int back, size_t size);
<<<<<<< HEAD
void counting_sort(int *array, size_t size);
=======
>>>>>>> 056c13efc7581f5acffa910060c178fd5737d7ee

#endif /* SORT_H */
