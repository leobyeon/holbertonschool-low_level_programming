#include "dog.h"
#include <stdio.h>

/**
  * init_dog - initializes a variable of type struct dog
  *
  * @d: name of the struct
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
