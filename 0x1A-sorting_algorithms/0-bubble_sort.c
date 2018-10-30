#include "sort.h"
/**
 * bubble_sort - sorting algorithm to sort an array of integers in ascending
 * order. Calls a print function every time elements in the array are sorted.
 * This prints the entire array out.
 * @array: pointer to an array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
