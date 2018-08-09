#include "holberton.h"

/**
  * print_binary - prints the binary representation of a number
  * without using arrays, malloc, % or / operators
  * @n: unsigned integer to convert
  * Return: void
  */
void print_binary(unsigned long int n)
{
	long int count1 = 0, count2 = 0;
	long int temp = n, i;

	if (n == 0)
		_putchar('0');

	while (temp > 0)
	{
		temp = temp >> 1;
		count1++;
		count2++;
	}

	for (count1 -= 1; count1 >= 0; count1--)
	{
		i = n >> count1;
		_putchar((i & 1) ? '1' : '0');
	}
}
