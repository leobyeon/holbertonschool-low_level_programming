#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: smallest value
  * @max: largest value
  *
  * Return: pointer to the newly created array
  * if min > max, return NULL
  * if malloc fails, return NULL
  */
int *array_range(int min, int max)
{
	int i, len, *arr;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}

	return (arr);
}
