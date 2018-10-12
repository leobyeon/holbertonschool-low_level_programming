#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to update
 * @key: is the key
 * @value: is the value
 * Return: 1 if success, 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *newnode;

	if (key == NULL || *key == '\0')
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);

	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);

	newnode->key = strdup(key);
	if (!newnode->key)
	{
		free(newnode);
		return (0);
	}
	newnode->value = strdup(value);
	if (!newnode->value)
	{
		free(newnode->key);
		free(newnode);
		return (0);
	}

	newnode->next = ht->array[idx];
	ht->array[idx] = newnode;

	return (1);
}
