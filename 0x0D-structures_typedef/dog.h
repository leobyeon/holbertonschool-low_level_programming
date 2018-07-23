#ifndef DOG_H
#define DOG_H

int _putchar(char c);

/**
  * struct dog - contains name, age, and owner of dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Description: this is a struct of a dog with
  * name, age, and owner of dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
