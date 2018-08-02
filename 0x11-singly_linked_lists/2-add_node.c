#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _strlen - returns the length of a string
  * @s: operand
  *
  * Return: length of the string
  */
int _strlen(const char *s)
{
	unsigned int len, i;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: double pointer to the first element of the list_t list
  * @str: string to be duplicated
  * Return: address of the new element;
  * NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newlist;

	newlist = malloc(sizeof(list_t));

	newlist->len = _strlen(str);
	newlist->str = strdup(str);
	newlist->next = *head;
	*head = newlist;

	return (*head);
}
