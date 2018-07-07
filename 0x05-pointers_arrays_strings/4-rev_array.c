#include "holberton.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: array
  * @n: number of elements in the array
  *
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int start = n - 1;
	int end = 0;
	int tmp;

	while (start > end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start--;
		end++;
	}
}
