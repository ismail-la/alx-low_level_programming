#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table to delete.
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *Node;
	unsigned long int i = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			Node = ht->array[i]->Node;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = Node;
		}
	i++
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
