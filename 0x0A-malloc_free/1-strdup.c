#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly allocated space in
  * memory, which contains a copy of the string given as a parameter
  * @str: string to duplicate
  *
  * Return: NULL if str == NULL,
  * a pointer to the duplicate string if success,
  * NULL if insufficient memory was available
  */
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	copy = (char *)malloc((len + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}

	copy[i] = '\0';
	return (copy);
}
