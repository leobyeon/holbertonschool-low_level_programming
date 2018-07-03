#include "holberton.h"
#include <stdio.h>

/**
  * print_array - prints n elements of an array of integers,
  * followed by a new line
  * @a: pointer to the first element in the array
  * @n: number of elements in the array to be printed
  *
  * Return: void
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
