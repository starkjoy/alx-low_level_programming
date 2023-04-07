#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: hashtable
 * @key: associated key
 * Return: value if found or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const hash_node_t *cur_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	cur_node = ht->array[index];
	while (cur_node != NULL)
	{
		if (strcmp(cur_node->key, key) == 0)
		{
			return (cur_node->value);
		}
		cur_node = cur_node->next;
	}
	return (NULL);
}
