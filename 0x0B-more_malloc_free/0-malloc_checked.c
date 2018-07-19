#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc
  * @b: operand
  *
  * Return: void
  */
void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(sizeof(int) * b);

	if (a == NULL)
		exit(98);

	return (a);
}
