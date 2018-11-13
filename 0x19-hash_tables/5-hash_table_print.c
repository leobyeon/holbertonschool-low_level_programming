#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, flag = 0;
	hash_node_t *trav;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		trav = ht->array[i];
		while (trav)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", trav->key, trav->value);
			flag = 1;
			trav = trav->next;
		}
		i++;
	}
	printf("}\n");
}
