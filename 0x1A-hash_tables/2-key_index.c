#include "hash_tables.h"

/**
 * key_index - resolves index from hash
 * @key: string to be hashed
 * @size: array size of hashtable
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
