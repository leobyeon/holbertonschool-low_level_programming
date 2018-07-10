#include "holberton.h"
#include <stdio.h>

/**
  * _strspn - gets the length of a prefix substring
  * @s: string to be scanned
  * @accept: string containing the list of characters to match in s
  *
  * Return: number of bytes matching s from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	char count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if ((s[i] == ' ' || s[i] == ',') && count != 0)
			{
				return (count);
			}
			else if (s[i] == accept[j])
			{
				count++;
			}
		}
	}
	return (count);
}
