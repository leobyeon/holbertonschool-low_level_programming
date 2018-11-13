#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the selection sort algorithm
 * @array: the given array
 * @size: length of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, smol_boi = 0, temp_val = 0, flag = 0;

	for (i = 0; i < size; i++)
	{
		smol_boi = i;
		flag = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[smol_boi])
			{
				smol_boi = j;
				flag = 1;
			}
		}
		if (flag)
		{
			temp_val = array[i];
			array[i] = array[smol_boi];
			array[smol_boi] = temp_val;
			print_array(array, size);
		}
	}
}
