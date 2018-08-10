#include "holberton.h"

/**
  * flip_bits - returns the number of bits you would need
  * to flip to get from one number to another
  * @n: number to flip
  * @m: number to get
  * Return: number of bits you need to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips = n ^ m;
	unsigned long int count = 0;

	while (flips)
	{
		if (flips & 1)
			count++;
		flips >>= 1;
	}
	return (count);
}
