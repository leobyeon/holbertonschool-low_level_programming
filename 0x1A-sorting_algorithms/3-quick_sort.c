#include "sort.h"

/**
 * quick_sort - sort array in ascending ording using quick sort
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	sort_helper(array, 0, size - 1, size);
}

/**
 * sort_helper - recursive function to sort array. Call pivot function to
 * find new pivot point
 * @array: array to sort
 * @front: beginning index of section to sort
 * @back: end index of section to sort
 * @size: size of array
 */
void sort_helper(int *array, int front, int back, size_t size)
{
	int pivot;

	if (size < 2)
		return;
	if (front < back)
	{
		pivot = pivot_point(array, front, back, size);
		sort_helper(array, front, pivot - 1, size);
		sort_helper(array, pivot + 1, back, size);
	}
}

/**
 * pivot_point - function to sort and return pivot point of array
 * @array: array to sort
 * @front: start index of section to sort
 * @back: end index of section to sort
 * @size: size of array
 * Return: pivot point
 */
int pivot_point(int *array, int front, int back, size_t size)
{
	int pivot = back, i = front, j = front, swap, flag = 0, swapped = 0;

	while (j < pivot)
	{
		swapped = 0;
		if (array[j] < array[pivot])
		{
			if (array[j] != array[i])
				swapped = 1;
			swap = array[j];
			array[j] = array[i];
			array[i] = swap;
			i++;
		}
		if (swapped == 1)
			print_array(array, size);
		j++;
	}
	if (flag == 0)
	{
		swap = array[j];
		array[j] = array[i];
		array[i] = swap;
		if (array[i] != array[j])
			print_array(array, size);
	}
	return (i);
}
