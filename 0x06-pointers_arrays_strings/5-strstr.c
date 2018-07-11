#include "holberton.h"
#include <stdio.h>

/**
  * _strstr - finds the first occurrence of the substring needle
  * in the string haystack
  * @haystack: string to be scanned
  * @needle: string to be searched and matched
  *
  * Return: a pointer to the first entire sequence of occurrence,
  * or NULL if not found
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char *p = haystack;
	char *q = needle;

	for (i = 0; p[i]; i++)
	{
		if (p[i] == q[j])
		{
			for (k = i, j = 0; p[k] && q[j]; j++, k++)
			{
				if (p[k] != q[j])
					break;
					return (p + i);
			}
		}
	}

	return (NULL);

}

