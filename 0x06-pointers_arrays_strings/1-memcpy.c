#include "holberton.h"

/**
  * _memcpy - copies n bytes from memory area src to
  * memory area dest
  * @dest: pointer to the destination
  * @src: pointer to the source data to be copied
  * @n: number of bytes to be copied
  *
  * Return: a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i = 0;

	while (n > 0)
	{
		p[i] = src[i];
		i++;
		n--;
	}

	return (dest);
}
