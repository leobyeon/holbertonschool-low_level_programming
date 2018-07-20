#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array, using malloc
  * @nmemb: number of elements in the array
  * @size: size of nmemb
  *
  * Return: void
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
	{
		arr[i] = 0;
	}

	return ((void *)arr);
}
