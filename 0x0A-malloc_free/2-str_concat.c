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
	int i, j, strlen = 0;

	if (s1 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		strlen++;

	for (i = 0; s2[i]; i++)
		strlen++;

	newstr = (char *)malloc((strlen + 1) * (sizeof(char)));

	if (newstr == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (s1[i])
	{
		newstr[j] = s1[i];
		i++;
		j++;
	}

		if (s2 == 0)
		{
			newstr[j] = '\0';
			return (newstr);
		}
		else
		{
			i = 0;

			while (j < strlen)
			{
				newstr[j] = s2[i];
				i++;
				j++;
			}
			return (newstr);
		}
}
