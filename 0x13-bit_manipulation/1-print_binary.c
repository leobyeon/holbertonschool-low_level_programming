#include "holberton.h"

/**
  * print_binary - prints the binary representation of a number
  * without using arrays, malloc, % or / operators
  * @n: unsigned integer to convert
  * Return: void
  */
void print_binary(unsigned long int n)
{
	long int count = 0, i;
	unsigned long int temp = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (temp > 0)
	{
		temp = temp >> 1;
		count++;
	}

	for (count -= 1; count >= 0; count--)
	{
		i = n >> count;
		_putchar((i & 1) ? '1' : '0');
	}
}
