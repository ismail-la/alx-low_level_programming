#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: Pointer to the hash table to print.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *Node;
	unsigned long int i = 0;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	i++
	}

	printf("}\n");
}
