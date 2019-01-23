#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using linear search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index at which the value is found or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
