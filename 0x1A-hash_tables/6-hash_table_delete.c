#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *temp;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
}
