#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: is the key
 * Return: value associated with elem,
 * or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *trav;

	printf("before idx is set\n");
	idx = key_index((const unsigned char *)key, ht->size);
	printf("after idx is set: %lu\nkey %s\n", idx, key);

	if (ht->array[idx])	
		trav = ht->array[idx];
	else
		return (NULL);

	if (strcmp(trav->key, key) == 0)
	{
		printf("value stored: %s\n", trav->value);
		return (trav->value);
	}
	while (trav->next)
	{
		if (strcmp(trav->key, key) == 0)
		{
			printf("value stored: %s\n", trav->value);
			return (trav->value);
		}
		trav = trav->next;
	}
	return (NULL);
}
