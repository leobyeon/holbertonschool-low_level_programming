#include "holberton.h"
#include <stdio.h>

/**
  * strchr - searches for the first occurrence of the character c
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

	while (p != '\0')
	{
		if (*p == c)
		{
			return (p);
		}

		p++;
	}
	if (c == '\0')
		return (p);

	return (NULL);
}
