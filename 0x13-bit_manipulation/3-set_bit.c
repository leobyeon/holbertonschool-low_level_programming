#include "holberton.h"
#include <stdlib.h>

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: number to convert to binary
  * @index: the index to set the bit
  * Return: value of the bit at index, or;
  * -1 if error occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
