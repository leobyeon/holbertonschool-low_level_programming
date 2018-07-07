#include "holberton.h"

/**
  * _strlen - returns the length of a string
  * @s: operand
  *
  * Return: length of the string
  */
int _strlen(char *s)
{
	int len, i;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
  * _strncat - concatenates two strings,
  * while using at most n bytes from src,
  * and src does not need to be null-terminated if
  * it contains n or more bytes
  * @dest: destination operand
  * @src: source operand
  * @n: the byte limit
  *
  * Return: pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int dest_len = _strlen(dest);

	i = dest_len;
	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
