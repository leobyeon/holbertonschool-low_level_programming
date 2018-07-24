#include "dog.h"
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
		return (NULL);

	i = 0;

	while (i <= len)
	{
		copy[i] = str[i];
		i++;
	}

	return (copy);
}


/**
  * new_dog - creates a new dog
  *
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Return: new dog struct
  */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *hotdog;

	hotdog = malloc(sizeof(hotdog));

	if (hotdog == NULL)
		return (NULL);

	if (hotdog)
	{
		hotdog->name = _strdup(name);
		if (hotdog->name == NULL)
			free(hotdog);

		hotdog->owner = _strdup(owner);
		if (hotdog->owner == NULL)
		{
			free(hotdog->name);
			free(hotdog);
		}
	}
	hotdog->age = age;

	return (hotdog);
}
