#include <stdio.h>
#include <stdlib.h>

/**
  * argstostr - concatenates all the arguments of the program
  * @ac: argument count
  * @av: argument variables
  *
  * Return: concatenated string with each argument separated by a new line;
  * NULL if ac == 0 or av == NULL
  */
char *argstostr(int ac, char **av)
{
	char *str;
	int strlen, i, j, seg = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			strlen++;
		}
	}

	str = (char *)malloc((strlen + ac + 1) * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[seg++] = av[i][j];
		}
		str[seg++] = '\n';
	}

	str[seg] = '\0';
	return (str);
}
