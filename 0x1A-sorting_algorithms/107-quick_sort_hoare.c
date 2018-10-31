#include "sort.h"

/**
 * quick_sort_hoare - hoare sorting algorithm. Prints every time an element
 * is swapped with another element.
 * @array: An array of integers to sort
 * @size: The size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
	hoare_helper_sort(array, 0, size - 1, size);
}

/**
 * hoare_helper_sort - Recursive helper function that calls a pivot point
 * function.
 * @array: array to sort
 * @front: start index of array section to sort
 * @back: end index of array section to sort
 * @size: size of the array
 */
void hoare_helper_sort(int *array, int front, int back, size_t size)
{
	int pivot;

	if (size < 2)
		return;

	if (front < back)
	{
		pivot = hoare_pivot_point(array, front, back, size);
		hoare_helper_sort(array, front, pivot - 1, size);
		hoare_helper_sort(array, pivot, back, size);
	}
}

/**
 * hoare_pivot_point - sort array, find and retur pivot point.
 * @array: array to sort
 * @front: start index
 * @back: end index
 * @size: size of array
 * Return: pivot point
 */
int hoare_pivot_point(int *array, int front, int back, size_t size)
{
	int i = front, j = back, swap, pivot = array[back];

	while (1)
	{
		if (i >= j)
			return (j);
		while (array[i] < pivot)
			i++;
		while (array[j] > pivot)
			j--;
		if (flag == 0)
		{
			swap = array[i];
			array[i] = array[j];
			array[j] = swap;
			if (array[i] != array[j])
				print_array(array, size);
		}
	}
	return (j);
}
