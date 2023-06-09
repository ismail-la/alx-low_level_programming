#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 * @key: the key to get index of.
 * @size: the size of the array of the hash table
 *
 * Return: the index for the key.
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
