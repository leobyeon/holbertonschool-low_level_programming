#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * get_bit - returns the value of a bit at a given index
  * @n: number to convert to binary
  * @index: the index to get the bit from
  * Return: value of the bit at index, or;
  * -1 if error occurred
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0, j = 0;
	int b;
	char *bits;

	bits = malloc(sizeof(char));
	while (n)
	{
		b = n % 2;
		n = n / 2;
		bits[i] = b + '0';
		i++;
	}

	for (j = 0; bits[j]; j++)
	{
		if (j == index)
			return (bits[j] - '0');
	}
	return (-1);
}
