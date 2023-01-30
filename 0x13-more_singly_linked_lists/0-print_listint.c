#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list_t
 * @h: accepts pointer to list_t
 * Return: returns type size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
