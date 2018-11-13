#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *trav, *tmp;

	while (i < ht->size)
	{
		trav = ht->array[i];
		while (trav)
		{
			tmp = trav;
			trav = trav->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
