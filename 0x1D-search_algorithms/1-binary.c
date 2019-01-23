#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index at which the value is found, or
 * -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int low = 0;
	unsigned int hi = size - 1;
	unsigned int mid;
	unsigned int i;

	while (low <= hi)
	{
		i = low;
		mid = (low + hi) / 2;

		printf("Searching in array: ");
		while (i <= hi)
		{
			if (array[i] != array[hi])
				printf("%u, ", array[i]);
			else
				printf("%u\n", array[i]);
			i++;
		}

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] == value)
			return (mid);
		hi = mid - 1;
	}
	return (-1);
}
