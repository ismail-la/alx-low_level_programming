#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a key in a hash table
 * @ht: table to retrieve value from ot pointer to the hash table
 * @key: the key to find value of.
 *
 * Return: NULL if the key cannot be found,
 *	    Otherwise - the value associated with key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *Node;
	unsigned long int indicator;


	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	indicator = key_index((const unsigned char *)key, ht->size);
	Node = ht->array[indicator];
	while (Node != NULL)
	{
		if (strcmp(Node->key, key) == 0)
			return (Node->value);
		Node = Node->next;
	}
	return (NULL);
}
