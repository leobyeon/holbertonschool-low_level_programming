#include "holberton.h"

/**
  * swap_int - swaps the values of two integers
  * @a: first operand
  * @b: second operand
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

