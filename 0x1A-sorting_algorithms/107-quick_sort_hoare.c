#include "sort.h"

/**
 * quick_sort_hoare - hoare sorting algorithm. Prints every time an element
 * is swapped with another element.
 * @array: An array of integers to sort
 * @size: The size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
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

	if (front < back)
	{
		pivot = hoare_pivot_point(array, front, back, size);
		hoare_helper_sort(array, front, pivot, size);
		hoare_helper_sort(array, pivot + 1, back, size);
	}
}

/**
 * hoare_pivot_point - sort array, find and return pivot point.
 * @array: array to sort
 * @front: start index
 * @back: end index
 * @size: size of array
 * Return: pivot point
 */
int hoare_pivot_point(int *array, int front, int back, size_t size)
{
	int i = front - 1, j = back + 1, swap, pivot = array[back];

	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);

		do {
			j--;
		} while (array[j] > pivot);

		if (i < j)
		{
			swap = array[i];
			array[i] = array[j];
			array[j] = swap;
			print_array(array, size);
		}
		else
		{
			if (i == j)
				return (j - 1);
			return (j);
		}
	}
}
