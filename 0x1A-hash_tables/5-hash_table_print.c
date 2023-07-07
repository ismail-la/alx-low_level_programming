#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: Pointer to the hash table to print.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
        char flag = 0;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	i++
	}

	printf("}\n");
}
