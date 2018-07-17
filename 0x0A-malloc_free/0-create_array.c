#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - creates an array of chars,
  * and initializes it with a specific char
  * @size: size of the array
  * @c: char to initialize with
  *
  * Return: NULL if size == 0,
  * pointer to the array, or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (arr == NULL)
		return (NULL);

	i = 0;
	arr = malloc(size * sizeof(char));

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
