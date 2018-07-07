#include "holberton.h"

/**
  * _strcmp - compares two strings
  * @s1: first operand (string)
  * @s2: second operand (string)
  *
  * Return: difference between s1 and s2
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);

	return (s1[i] - s2[i]);
}
