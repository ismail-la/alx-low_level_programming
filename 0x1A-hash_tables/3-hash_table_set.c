#include "hash_tables.h"

/**
 * hash_table_set - update or add an element in the hash table.
 * @ht: A pointer to the hash table
 * @key: Key to add (key for the data) - cannot be an empty string.
 * @value: Value associated with key (data to store)
 *
 * Return: 1 if it succeeded, or 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indicator, i;
	hash_node_t *new_node;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	indicator = key_index((const unsigned char *)key, ht->size);
	for (i = indicator; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		free(value_copy);
		return (0);

	new_node->key = strdup(key);

	if (new_node->key == NULL)
		free(new_node);
		return (0);

	new_node->value = value_copy;
	new_node->next = ht->array[indicator];
	ht->array[indicator] = new_node;

	return (1);
}
