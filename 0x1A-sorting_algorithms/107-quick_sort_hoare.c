#include "sort.h"

/**
 * quick_sort_hoare - hoare sorting algorithm. Prints every time an element
 * is swapped with another element.
 * @array: An array of integers to sort
 * @size: The size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
<<<<<<< HEAD
=======
	if (array == NULL || size < 2)
		return;
>>>>>>> 056c13efc7581f5acffa910060c178fd5737d7ee
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

<<<<<<< HEAD
	if (size < 2)
		return;

	if (front < back)
	{
		pivot = hoare_pivot_point(array, front, back, size);
		hoare_helper_sort(array, front, pivot - 1, size);
		hoare_helper_sort(array, pivot, back, size);
=======
	if (front < back)
	{
		pivot = hoare_pivot_point(array, front, back, size);
		hoare_helper_sort(array, front, pivot, size);
		hoare_helper_sort(array, pivot + 1, back, size);
>>>>>>> 056c13efc7581f5acffa910060c178fd5737d7ee
	}
}

/**
<<<<<<< HEAD
 * hoare_pivot_point - sort array, find and retur pivot point.
=======
 * hoare_pivot_point - sort array, find and return pivot point.
>>>>>>> 056c13efc7581f5acffa910060c178fd5737d7ee
 * @array: array to sort
 * @front: start index
 * @back: end index
 * @size: size of array
 * Return: pivot point
 */
int hoare_pivot_point(int *array, int front, int back, size_t size)
{
<<<<<<< HEAD
	int i = front, j = back, swap, pivot = array[back];

	while (1)
	{
		if (i >= j)
			return (j);
		while (array[i] < pivot)
			i++;
		while (array[j] > pivot)
			j--;
		swap = array[i];
		array[i] = array[j];
		array[j] = swap;
		if (array[i] != array[j])
			print_array(array, size);
	}
	return (j);
=======
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
>>>>>>> 056c13efc7581f5acffa910060c178fd5737d7ee
}
