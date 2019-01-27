#include "sort.h"

/**
 * lomuto - returns the pivot after sorting in lomuto method
 * @arr: given array
 * @low_idx: starting index
 * @hi_idx: ending index
 * @size: length of the array
 * Return: the pivot index
 */
int lomuto(int *arr, int low_idx, int hi_idx, size_t size)
{
	int pivot = arr[hi_idx];
	int i = (low_idx - 1);
	int j = low_idx;
	int swap, flag = 0;

	while (j < hi_idx)
	{
		flag = 0;
		if (arr[j] < pivot)
		{
			i++;
			swap = arr[i];
			arr[i] = arr[j];
			arr[j] = swap;
			if (arr[i] != arr[j])
				flag = 1;
		}
		if (flag)
			print_array(arr, size);
		j++;
	}

	if (!flag)
	{
		swap = arr[i + 1];
		arr[i + 1] = arr[hi_idx];
		arr[hi_idx] = swap;
		if (arr[i] != arr[j])
			print_array(arr, size);
	}
	return (i + 1);
}

/**
 * sort_helper - gets the lomudo index (pivot index)
 * using recursion
 * @array: given array
 * @low_idx: lowest index
 * @hi_idx: highest index
 * @size: length of array
 * Return: void
 */
void sort_helper(int *array, int low_idx, int hi_idx, size_t size)
{
	int l_idx = 0;

	if (low_idx < hi_idx)
	{
		l_idx = lomuto(array, low_idx, hi_idx, size);

		sort_helper(array, low_idx, l_idx - 1, size);
		sort_helper(array, l_idx + 1, hi_idx, size);
	}
}

/**
 * quick_sort - sorts given array using quick sort method
 * (Lomuto variation)
 * @array: given array
 * @size: length of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (size > 2)
		sort_helper(array, 0, size - 1, size);
}
