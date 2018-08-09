#include "holberton.h"

/**
  * binary_to_uint - converts a binary num to unsigned int
  * @b: pointer to a string of 0 and 1 chars
  * Return: converted number;
  * or 0 if there is one or more chars in the string b that
  * is not 0 or 1, or b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int accum = 0;
	unsigned int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		accum = 2 * accum + (b[i] - '0');
		if (b[i] != '0' || b[i] != '1')
			return (0);
	}
	
	return (accum);
}
