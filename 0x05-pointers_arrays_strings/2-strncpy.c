#include "holberton.h"

/**
  * _strncpy - copies the string pointed to by src,
  * including the terminating null byte
  * at most n bytes of src are copied
  * @dest: destination operand
  * @src: source operand
  * @n: bytes to be copied
  *
  * Return: the copied string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
