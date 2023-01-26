#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints all elements of a list_t
 * @h: accepts pointer to list_t
 * Return: returns type size_t
 */

size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	list_t current = h;

	while (current != NULL)
	{
		nodes++;
		current = current->next;
	}

	return (nodes);
}
