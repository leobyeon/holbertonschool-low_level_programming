#include <stdio.h>
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: string one
  * @s2: string two
  *
  * Return: a pointer to a newly allocated memory of concatenated str;
  * NULL if it fails
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *str;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;

	for (j = 0; s2[j]; j++)
		;

	if (n < j)
		j = n;

	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		str[k] = s1[k];

	l = k + j;

	for (i = 0; k < l; k++, i++)
		str[k] = s2[i];

		str[k] = '\0';

	return (str);
}
