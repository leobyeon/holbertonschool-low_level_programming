#include "holberton.h"

/**
  * _strcat - appends the src string to the dest string,
  * overwriting the terminating null byte at the end of dest,
  * and then adds a terminating null byte
  * @src: source operand
  * @dest: destination operand
  * Return: pointer to the resulting dest string
  */
char *_strcat(char *dest, char *src)
{
	int i, j;
	int dest_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		dest_len++;

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
