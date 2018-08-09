#include "holberton.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: number to convert to binary
  * @index: index to set the bit
  * Return: 1 if it worked, or;
  * -1 if error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
