#include "holberton.h"
#include <stdio.h>

/**
  * _strchr - searches for the first occurrence of the character c
  * in the string s
  * @s: string to look in
  * @c: character to find
  *
  * Return: a pointer to the first occurrence if found,
  * or NULL if not found
  */
char *_strchr(char *s, char c)
{
	char *p = s;
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] == c)
		{
			return (p + i);
		}
	}

	if (c == '\0')
		return (p + i);

	return (NULL);
}
