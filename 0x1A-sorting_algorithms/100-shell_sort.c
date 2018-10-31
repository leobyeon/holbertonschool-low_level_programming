#include "sort.h"

/**
 * shell_sort - sorts using shell sort (Knuth sequence)
 * @array: given array
 * @size: length of array
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i = 0, j = 0;
	int temp = 0;

	while (gap < size)
	{
		gap = gap * 3 + 1;
	}
	gap = (gap - 1) / 3;

	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
