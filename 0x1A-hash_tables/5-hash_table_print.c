#include "hash_tables.h"

/**
 * hash_table_print - prints hashtable
 * @ht: hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int  i;
	hash_node_t *current;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			if (current->next != NULL)
			{
				printf(", ");
			}
			current = current->next;
		}
		if (i ==  ht->size - 1)
		{
			printf(", ");
		}
	}
	printf("}\n");
}
