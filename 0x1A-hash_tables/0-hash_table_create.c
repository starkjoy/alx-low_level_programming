#include "hash_tables.h"

/**
 * hash_table_create - creates a hashtable
 * @size: size of hashtable
 * Return: hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!(table))
		return (NULL);
	table->array = calloc(size, sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	return (table);
}
