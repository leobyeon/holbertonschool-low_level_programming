#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: string 1 of 2
  * @s2: string 2 of 2
  *
  * Return: a pointer to a newly allocated space in memory,
  * on failure, NULL
  */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i, j, k, len1 = 0, len2 = 0;

	for (i = 0; s1[i]; i++)
		len1++;

	for (i = 0; s2[i]; i++)
		len2++;

	newstr = (char *)malloc((len1 + len2 + 1) * (sizeof(char)));

	if (newstr == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (j < len1)
	{
		newstr[j] = s1[i];
		i++;
		j++;
	}

	k = len2 + j;
	i = 0;

	if (s2 != 0)
	{
		while (j <= k)
		{
			newstr[j] = s2[i];
			i++;
			j++;
		}
	else
	{
		newstr[j] = '\0';
	}

	return (newstr);
}
