#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameter
  * on each element of an array
  *
  * @array: given array
  * @size: size of the array
  * @action: given function pointer to use
  *
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
