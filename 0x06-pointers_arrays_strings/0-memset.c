#include "holberton.h"

/**
  * _memset - fills the first n bytes of the memory area
  * pointed to by s with the constant byte b
  * @s: pointer to a memory area that will be stored
  * @b: value to be stored
  * @n: number of bytes to be stored
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p[i] = b;
	}

	return (s);
}
