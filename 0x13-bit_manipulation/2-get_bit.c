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
	unsigned int i = 0;
	int b;
	char *bits;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	bits = malloc(sizeof(char));
	while (n)
	{
		b = n % 2;
		n = n / 2;
		bits[i] = b + '0';
		i++;
	}
	for (i = 0; bits[i]; i++)
	{
		if (i == index)
			return (bits[i] - '0');
	}
	return (0);
}
