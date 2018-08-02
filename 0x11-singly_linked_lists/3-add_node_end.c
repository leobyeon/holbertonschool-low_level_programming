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
  * add_node_end - adds a new node at the end of a list_t list
  * @head: pointer to the first element in the list_t list
  * @str: string to duplicate
  * Return: address of the new element;
  * NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	if (!*head)
	{
		*head = new_node;
	}
	
	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	return (new_node);
}
