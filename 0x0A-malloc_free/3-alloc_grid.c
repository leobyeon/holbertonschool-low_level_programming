#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - returns a pointer to a 2d array of integers
  * @width: width of the 2d array
  * @height: height of the 2d array
  *
  * Return: pointer to a 2d array if it works;
  * NULL on failure;
  * if width or height is 0 or negative, return NULL
  */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * width);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * height);
		if (arr[i] == NULL)
			free(arr[i]);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
