#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints all elements of a list_t
 * @h: accepts pointer to list_t
 * Return: returns type size_t
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
